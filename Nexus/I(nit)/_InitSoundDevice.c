undefined4 _InitSoundDevice(void)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int local_a8;
  int local_a4;
  int local_a0;
  undefined1 local_90 [81];
  undefined1 local_3f [32];
  undefined1 local_1f;
  byte local_1e;
  byte local_1d [13];
  
  iVar2 = _BASS_Init(0xffffffff,0xac44,0,0,0);
  uVar3 = 0;
  if (iVar2 != 0) {
    puVar4 = (undefined4 *)&_MusicTracks;
    do {
      _StrCopy(puVar4,"");
      puVar4 = puVar4 + 0x10;
    } while (puVar4 != &_MusicVolume);
    cVar1 = _LoadFile("Data/Game/GameConfig.bin",local_90);
    if (cVar1 == '\x01') {
      _FileRead(&local_1e,1);
      for (iVar2 = 0; iVar2 < (int)(uint)local_1e; iVar2 = iVar2 + 1) {
        _FileRead(&local_1f,1);
      }
      _FileRead(&local_1e,1);
      for (iVar2 = 0; iVar2 < (int)(uint)local_1e; iVar2 = iVar2 + 1) {
        _FileRead(&local_1f,1);
      }
      _FileRead(&local_1e,1);
      for (iVar2 = 0; iVar2 < (int)(uint)local_1e; iVar2 = iVar2 + 1) {
        _FileRead(&local_1f,1);
      }
      _FileRead(local_1d,1);
      for (local_a8 = 0; local_a8 < (int)(uint)local_1d[0]; local_a8 = local_a8 + 1) {
        _FileRead(&local_1e,1);
        for (iVar2 = 0; iVar2 < (int)(uint)local_1e; iVar2 = iVar2 + 1) {
          _FileRead(&local_1f,1);
          local_3f[iVar2] = local_1f;
        }
        local_3f[iVar2] = 0;
      }
      _FileRead(local_1d,1);
      for (local_a4 = 0; local_a4 < (int)(uint)local_1d[0]; local_a4 = local_a4 + 1) {
        _FileRead(&local_1e,1);
        for (iVar2 = 0; iVar2 < (int)(uint)local_1e; iVar2 = iVar2 + 1) {
          _FileRead(&local_1f,1);
          local_3f[iVar2] = local_1f;
        }
        local_3f[iVar2] = 0;
        _FileRead(&local_1f,1);
        _FileRead(&local_1f,1);
        _FileRead(&local_1f,1);
        _FileRead(&local_1f,1);
      }
      _FileRead(local_1d,1);
      _NoGlobalSFX = (uint)local_1d[0];
      for (local_a0 = 0; local_a0 < (int)(uint)local_1d[0]; local_a0 = local_a0 + 1) {
        _FileRead(&local_1e,1);
        for (iVar2 = 0; iVar2 < (int)(uint)local_1e; iVar2 = iVar2 + 1) {
          _FileRead(&local_1f,1);
          local_3f[iVar2] = local_1f;
        }
        local_3f[iVar2] = 0;
        _GetFileInfo(local_90);
        _CloseFile();
        _LoadSfx(local_3f,local_a0);
        _SetFileInfo(local_90);
      }
    }
    uVar3 = 1;
  }
  return uVar3;
}
