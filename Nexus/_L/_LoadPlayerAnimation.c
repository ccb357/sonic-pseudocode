void _LoadPlayerAnimation(undefined4 param_1,int param_2)

{
  undefined *puVar1;
  char cVar2;
  char *pcVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined *local_e8;
  char local_e4;
  int local_dc;
  int local_d8;
  undefined *local_d0;
  int local_c8;
  int local_c4;
  int local_c0;
  undefined1 local_b0 [82];
  char local_5e [12];
  char acStack_52 [52];
  byte local_1e;
  byte local_1d [13];
  
  local_1d[0] = 0;
  _StrCopy(local_5e,"Data/Animations/");
  _StrAdd(local_5e,param_1);
  cVar2 = _LoadFile(local_5e,local_b0);
  if (cVar2 == '\x01') {
    _FileRead(local_1d,1);
    _FileRead(local_1d,1);
    _FileRead(local_1d,1);
    _FileRead(local_1d,1);
    _FileRead(local_1d,1);
    local_c4 = 0;
    do {
      _FileRead(local_1d,1);
      if (local_1d[0] != 0) {
        _StrCopy(local_5e,"Data/Sprites/");
        pcVar3 = acStack_52;
        for (iVar6 = 0; pcVar3 = pcVar3 + 1, iVar6 < (int)(uint)local_1d[0]; iVar6 = iVar6 + 1) {
          _FileRead(pcVar3,1);
        }
        acStack_52[iVar6 + 1] = '\0';
        _GetFileInfo(local_b0);
        _CloseFile();
        iVar5 = local_c4 + 0x10 + param_2 * 4;
        _RemoveGraphicsFile("",iVar5);
        cVar2 = acStack_52[iVar6];
        if (cVar2 == 'p') {
          _LoadBMPFile(local_5e,iVar5);
        }
        else if (cVar2 == 'x') {
          _LoadGFXFile(local_5e,iVar5);
        }
        else if (cVar2 == 'f') {
          _LoadGIFFile(local_5e,iVar5);
        }
        _SetFileInfo(local_b0);
      }
      local_c4 = local_c4 + 1;
    } while (local_c4 != 4);
    _FileRead(&local_1e,1);
    local_e4 = (char)param_2 * '\x04';
    local_d0 = PTR__PlayerScriptList_007fe10c + param_2 * 0xa54;
    local_e8 = &_PlayerFrames + param_2 * 0x7000;
    for (local_dc = 0; local_dc < (int)(uint)local_1e; local_dc = local_dc + 1) {
      _FileRead(local_1d,1);
      local_d0[0x850] = local_1d[0];
      _FileRead(local_1d,1);
      local_d0[0x851] = local_1d[0];
      _FileRead(local_1d,1);
      local_d0[0x852] = local_1d[0];
      piVar4 = (int *)(local_d0 + 0x854);
      *(undefined **)(local_d0 + 0x854) = local_e8;
      iVar6 = 0;
      for (local_d8 = 0; local_d8 < (int)(uint)(byte)local_d0[0x850]; local_d8 = local_d8 + 1) {
        _FileRead(local_1d,1);
        *(byte *)(*piVar4 + 0x18 + iVar6) = local_e4 + local_1d[0] + '\x10';
        _FileRead(local_1d,1);
        *(byte *)(*piVar4 + 0x19 + iVar6) = local_1d[0] + (char)param_2 * '\b';
        _FileRead(local_1d,1);
        *(uint *)(*piVar4 + iVar6) = (uint)local_1d[0];
        _FileRead(local_1d,1);
        *(uint *)(*piVar4 + 4 + iVar6) = (uint)local_1d[0];
        _FileRead(local_1d,1);
        *(uint *)(*piVar4 + 8 + iVar6) = (uint)local_1d[0];
        _FileRead(local_1d,1);
        *(uint *)(*piVar4 + 0xc + iVar6) = (uint)local_1d[0];
        _FileRead(local_5e,1);
        *(int *)(*piVar4 + 0x10 + iVar6) = (int)local_5e[0];
        _FileRead(local_5e,1);
        *(int *)(*piVar4 + 0x14 + iVar6) = (int)local_5e[0];
        local_e8 = local_e8 + 0x1c;
        iVar6 = iVar6 + 0x1c;
      }
      local_d0 = local_d0 + 8;
    }
    _FileRead(&local_1e,1);
    local_c0 = param_2 << 3;
    for (local_c8 = 0; puVar1 = PTR__PlayerScriptList_007fe10c, local_c8 < (int)(uint)local_1e;
        local_c8 = local_c8 + 1) {
      iVar5 = 0;
      iVar6 = local_c0 * 0x20;
      do {
        _FileRead(&_PlayerCBoxes + iVar5 + iVar6,1);
        _FileRead(&DAT_004e4aa8 + iVar5 + iVar6,1);
        _FileRead(&DAT_004e4ab0 + iVar5 + iVar6,1);
        _FileRead(&DAT_004e4ab8 + iVar5 + iVar6,1);
        iVar5 = iVar5 + 1;
      } while (iVar5 != 8);
      local_c0 = local_c0 + 1;
    }
    PTR__PlayerScriptList_007fe10c[param_2 * 0xa54 + 0xa51] =
         PTR__PlayerScriptList_007fe10c[param_2 * 0xa54 + 0x879] + -0x14;
    puVar1[param_2 * 0xa54 + 0xa50] = puVar1[param_2 * 0xa54 + 0x881];
    puVar1[param_2 * 0xa54 + 0xa52] = puVar1[param_2 * 0xa54 + 0x8a1] + -0x30;
    _CloseFile();
  }
  return;
}
