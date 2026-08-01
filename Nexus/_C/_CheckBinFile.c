undefined4 _CheckBinFile(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  char local_4c [64];
  
  for (iVar3 = 0; *(char *)(param_1 + iVar3) != '\0'; iVar3 = iVar3 + 1) {
    local_4c[iVar3] = *(char *)(param_1 + iVar3);
  }
  local_4c[iVar3] = '\0';
  _CFileHandle = _fopen(local_4c,"rb");
  if (_CFileHandle == (FILE *)0x0) {
    _UseBinFile = 0;
    uVar2 = 0;
  }
  else {
    _UseBinFile = 1;
    for (iVar3 = 0; cVar1 = local_4c[iVar3], cVar1 != '\0'; iVar3 = iVar3 + 1) {
      (&_BinFileName)[iVar3] = cVar1;
    }
    (&_BinFileName)[iVar3] = 0;
    _fclose(_CFileHandle);
    uVar2 = 1;
  }
  return uVar2;
}