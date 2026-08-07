void _LoadPlayerFromList(char param_1,char param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int local_c0;
  undefined1 local_b0 [81];
  undefined1 local_5f [64];
  undefined1 local_1f;
  byte local_1e;
  byte local_1d [13];
  
  cVar1 = _LoadFile("Data/Game/GameConfig.bin",local_b0);
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
    for (iVar2 = 0; iVar2 < (int)(uint)local_1d[0]; iVar2 = iVar2 + 1) {
      _FileRead(&local_1e,1);
      for (iVar3 = 0; iVar3 < (int)(uint)local_1e; iVar3 = iVar3 + 1) {
        _FileRead(&local_1f,1);
      }
    }
    _FileRead(local_1d,1);
    for (iVar2 = 0; iVar2 < (int)(uint)local_1d[0]; iVar2 = iVar2 + 1) {
      _FileRead(&local_1e,1);
      for (iVar3 = 0; iVar3 < (int)(uint)local_1e; iVar3 = iVar3 + 1) {
        _FileRead(&local_1f,1);
      }
      _FileRead(&local_1f,1);
      _FileRead(&local_1f,1);
      _FileRead(&local_1f,1);
      _FileRead(&local_1f,1);
    }
    _FileRead(local_1d,1);
    for (iVar2 = 0; iVar2 < (int)(uint)local_1d[0]; iVar2 = iVar2 + 1) {
      _FileRead(&local_1e,1);
      for (iVar3 = 0; iVar3 < (int)(uint)local_1e; iVar3 = iVar3 + 1) {
        _FileRead(&local_1f,1);
      }
    }
    _FileRead(local_1d,1);
    for (local_c0 = 0; local_c0 < (int)(uint)local_1d[0]; local_c0 = local_c0 + 1) {
      _FileRead(&local_1e,1);
      for (iVar2 = 0; iVar2 < (int)(uint)local_1e; iVar2 = iVar2 + 1) {
        _FileRead(&local_1f,1);
        local_5f[iVar2] = local_1f;
      }
      local_5f[iVar2] = 0;
      if (local_c0 == param_1) {
        _GetFileInfo(local_b0);
        _CloseFile();
        _LoadPlayerAnimation(local_5f,(int)param_2);
        _SetFileInfo(local_b0);
      }
      _FileRead(&local_1e,1);
      for (iVar2 = 0; iVar2 < (int)(uint)local_1e; iVar2 = iVar2 + 1) {
        _FileRead(&local_1f,1);
        local_5f[iVar2] = local_1f;
      }
      local_5f[iVar2] = 0;
      _StrCopy(PTR__PlayerScriptList_007fe10c + param_2 * 0xa54,local_5f);
      _FileRead(&local_1e,1);
      for (iVar2 = 0; iVar2 < (int)(uint)local_1e; iVar2 = iVar2 + 1) {
        _FileRead(&local_1f,1);
        local_5f[iVar2] = local_1f;
      }
      local_5f[iVar2] = 0;
    }
    _CloseFile();
  }
  return;
}
