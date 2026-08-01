void _ConvertIfWhileStatement(int param_1)
//i assume everything is c plus plus?? why the fuck did i put all of these in c!?
{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint unaff_EDI;
  char local_11c [268];
  
  iVar2 = _FindStringToken(param_1,"if",1);
  if (iVar2 == 0) {
    iVar2 = -1;
    iVar4 = 0;
    do {
      uVar3 = _FindStringToken(param_1,&_ScriptEvaluationTokens + iVar4 * 4,1);
      if (uVar3 < 0x80000000) {
        iVar2 = iVar4 + 1;
        unaff_EDI = uVar3;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < 6);
    if (-1 < iVar2) {
      *(undefined1 *)(param_1 + unaff_EDI) = 0x2c;
      _StrCopy(local_11c,"CheckNotEqual" + iVar2 * 0x20);
      _StrAdd(local_11c,"(");
      _AppendIntegerToString(local_11c,_JumpTableDataPos - _JumpTableOffset);
      _StrAdd(local_11c,",");
      iVar4 = _StringLength(local_11c);
      for (iVar2 = param_1; cVar1 = *(char *)(iVar2 + 2), cVar1 != '\0'; iVar2 = iVar2 + 1) {
        if (((cVar1 != '=') && (cVar1 != '(')) && (cVar1 != ')')) {
          local_11c[iVar4] = cVar1;
          iVar4 = iVar4 + 1;
        }
      }
      local_11c[iVar4] = '\0';
      _StrAdd(local_11c,")");
      _StrCopy(param_1,local_11c);
      _JumpTableStackPos = _JumpTableStackPos + 1;
      (&_JumpTableStack)[_JumpTableStackPos] = _JumpTableDataPos;
      (&_JumpTableData)[_JumpTableDataPos] = 0xffffffff;
      (&DAT_004b8d84)[_JumpTableDataPos] = 0;
      _JumpTableDataPos = _JumpTableDataPos + 2;
    }
  }
  else {
    iVar2 = _FindStringToken(param_1,"while",1);
    if (iVar2 == 0) {
      iVar2 = -1;
      iVar4 = 0;
      do {
        uVar3 = _FindStringToken(param_1,&_ScriptEvaluationTokens + iVar4 * 4,1);
        if (uVar3 < 0x80000000) {
          iVar2 = iVar4 + 1;
          unaff_EDI = uVar3;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < 6);
      if (-1 < iVar2) {
        *(undefined1 *)(param_1 + unaff_EDI) = 0x2c;
        _StrCopy(local_11c,"endif" + iVar2 * 0x20);
        _StrAdd(local_11c,"(");
        _AppendIntegerToString(local_11c,_JumpTableDataPos - _JumpTableOffset);
        _StrAdd(local_11c,",");
        iVar4 = _StringLength(local_11c);
        for (iVar2 = param_1; cVar1 = *(char *)(iVar2 + 5), cVar1 != '\0'; iVar2 = iVar2 + 1) {
          if (((cVar1 != '=') && (cVar1 != '(')) && (cVar1 != ')')) {
            local_11c[iVar4] = cVar1;
            iVar4 = iVar4 + 1;
          }
        }
        local_11c[iVar4] = '\0';
        _StrAdd(local_11c,")");
        _StrCopy(param_1,local_11c);
        _JumpTableStackPos = _JumpTableStackPos + 1;
        (&_JumpTableStack)[_JumpTableStackPos] = _JumpTableDataPos;
        (&_JumpTableData)[_JumpTableDataPos] = _ScriptDataPos - _ScriptDataOffset;
        (&DAT_004b8d84)[_JumpTableDataPos] = 0;
        _JumpTableDataPos = _JumpTableDataPos + 2;
      }
    }
  }
  return;
}
