void _LoadSfx(undefined4 param_1,int param_2)

{
  undefined *puVar1;
  char cVar2;
  undefined4 uVar3;
  uint uVar4;
  bool bVar5;
  undefined1 local_bc [80];
  undefined1 local_6c [64];
  uint local_2c [3];
  byte local_1d [13];
  
  local_2c[2] = 0;
  local_2c[1] = 0;
  local_2c[0] = 0;
  local_1d[0] = 0;
  if (*(int *)(&_SFXSamples + param_2 * 4) == 0) {
    _StrCopy(local_6c,"Data/SoundFX/");
    _StrAdd(local_6c,param_1);
    puVar1 = PTR__UseBinFile_007fe03c;
    if (*PTR__UseBinFile_007fe03c == '\0') {
      uVar3 = _BASS_SampleLoad(0,local_6c,0,0,1,0x20000);
      *(undefined4 *)(&_SFXSamples + param_2 * 4) = uVar3;
    }
    else {
      cVar2 = _LoadFile(local_6c,local_bc);
      if (cVar2 == '\x01') {
        *puVar1 = 0;
        _FileRead(local_2c + 2,4);
        _FileRead(local_2c,4);
        _FileRead(local_2c + 1,4);
        uVar4 = 1;
        local_2c[0] = 1;
        for (local_2c[2] = 0; (uVar4 != 0 && (local_2c[2] < 400)); local_2c[2] = local_2c[2] + 1)  {
          if (uVar4 == 2) {
            _FileRead(local_1d,1);
            bVar5 = local_1d[0] == 0x61;
LAB_0000887b:
            if (bVar5) {
              uVar4 = local_2c[0] + 1;
              local_2c[0] = uVar4;
            }
            else {
LAB_000088a9:
              uVar4 = 1;
              local_2c[0] = 1;
            }
          }
          else {
            if (uVar4 < 3) {
              if (uVar4 != 1) goto LAB_000088b5;
              _FileRead(local_1d,1);
              bVar5 = local_1d[0] == 100;
              goto LAB_0000887b;
            }
            if (uVar4 == 3) {
              _FileRead(local_1d,1);
              bVar5 = local_1d[0] == 0x74;
              goto LAB_0000887b;
            }
            if (uVar4 == 4) {
              _FileRead(local_1d,1);
              if (local_1d[0] == 0x61) {
                uVar4 = 0;
                local_2c[0] = 0;
                goto LAB_000088b5;
              }
              goto LAB_000088a9;
            }
          }
LAB_000088b5:
        }
        local_2c[2] = 0;
        _FileRead(local_1d,1);
        local_2c[0] = (uint)local_1d[0];
        _FileRead(local_1d,1);
        local_2c[0] = local_2c[0] + (uint)local_1d[0] * 0x100;
        _FileRead(local_1d,1);
        local_2c[0] = local_2c[0] + (uint)local_1d[0] * 0x10000;
        _FileRead(local_1d,1);
        local_2c[0] = (uint)local_1d[0] * 0x1000000 + local_2c[0];
        uVar3 = _BASS_SampleCreate(local_2c[0],0xac44,1,1,"ENU_2");
        _FileRead(uVar3,local_2c[0]);
        uVar3 = _BASS_SampleCreateDone();
        *(undefined4 *)(&_SFXSamples + param_2 * 4) = uVar3;
        _CloseFile();
        *PTR__UseBinFile_007fe03c = 1;
      }
    }
  }
  return;
}
