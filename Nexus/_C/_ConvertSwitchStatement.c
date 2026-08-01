undefined4 _ConvertSwitchStatement(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  char local_10c [256];
  
  iVar2 = _FindStringToken(param_1,"switch",1);
  if (iVar2 == 0) {
    _StrCopy(local_10c,"switch");
    _StrAdd(local_10c,"(");
    _AppendIntegerToString(local_10c,_JumpTableDataPos - _JumpTableOffset);
    _StrAdd(local_10c,",");
    iVar4 = _StringLength(local_10c);
    for (iVar2 = param_1; cVar1 = *(char *)(iVar2 + 6), cVar1 != '\0'; iVar2 = iVar2 + 1) {
      if (((cVar1 != '=') && (cVar1 != '(')) && (cVar1 != ')')) {
        local_10c[iVar4] = cVar1;
        iVar4 = iVar4 + 1;
      }
    }
    local_10c[iVar4] = '\0';
    _StrAdd(local_10c,")");
    _StrCopy(param_1,local_10c);
    _JumpTableStackPos = _JumpTableStackPos + 1;
    (&_JumpTableStack)[_JumpTableStackPos] = _JumpTableDataPos;
    (&_JumpTableData)[_JumpTableDataPos] = 0x10000;
    (&DAT_004b8d84)[_JumpTableDataPos] = 0xffff0000;
    *(undefined4 *)(&DAT_004b8d88 + _JumpTableDataPos * 4) = 0xffffffff;
    *(undefined4 *)(&DAT_004b8d8c + _JumpTableDataPos * 4) = 0;
    _JumpTableDataPos = _JumpTableDataPos + 4;
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}
