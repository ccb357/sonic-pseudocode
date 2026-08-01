void _CheckCaseNumber(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char local_90 [128];
  int local_10;
  
  iVar2 = _FindStringToken(param_1,"case",1);
  if (iVar2 == 0) {
    iVar2 = 0;
    for (iVar3 = 4; cVar1 = *(char *)(param_1 + iVar3), cVar1 != '\0'; iVar3 = iVar3 + 1) {
      if (cVar1 != ':') {
        local_90[iVar2] = cVar1;
        iVar2 = iVar2 + 1;
      }
    }
    local_90[iVar2] = '\0';
    for (local_10 = 0; local_10 < (int)(uint)_NO_ALIASES; local_10 = local_10 + 1) {
      cVar1 = _StringComp(local_90,&_AliasNames + local_10 * 0x20);
      if (cVar1 == '\x01') {
        _StrCopy(local_90,&_AliasVariables + local_10 * 0x20);
      }
    }
    cVar1 = _ConvertStringToInteger(local_90,&local_10);
    if (cVar1 == '\x01') {
      iVar2 = (&_JumpTableStack)[_JumpTableStackPos];
      if (local_10 < (int)(&_JumpTableData)[iVar2]) {
        (&_JumpTableData)[iVar2] = local_10;
      }
      if ((int)(&_JumpTableData)[iVar2 + 1] < local_10) {
        (&_JumpTableData)[iVar2 + 1] = local_10;
      }
    }
  }
  return;
}
