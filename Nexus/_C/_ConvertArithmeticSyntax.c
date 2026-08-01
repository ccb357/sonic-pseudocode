void _ConvertArithmeticSyntax(int param_1)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  uint unaff_EDI;
  char local_11c [268];
  
  iVar7 = 0;
  iVar6 = 0;
  do {
    uVar2 = _FindStringToken(param_1,&_ScriptArithmeticTokens + iVar6 * 4,1);
    if (uVar2 < 0x80000000) {
      iVar7 = iVar6 + 1;
      unaff_EDI = uVar2;
    }
    iVar6 = iVar6 + 1;
  } while (iVar6 < 0xc);
  if (0 < iVar7) {
    _StrCopy(local_11c,&_ScriptOpcodeNames + iVar7 * 8);
    _StrAdd(local_11c,"(");
    iVar6 = _StringLength(local_11c);
    pcVar3 = local_11c + iVar6;
    for (iVar4 = 0; iVar4 < (int)unaff_EDI; iVar4 = iVar4 + 1) {
      *pcVar3 = *(char *)(param_1 + iVar4);
      iVar6 = iVar6 + 1;
      pcVar3 = pcVar3 + 1;
    }
    if ('\x01' < (char)(&_ScriptOpcodeSizes)[iVar7]) {
      local_11c[iVar6] = ',';
      iVar7 = _StringLength(&DAT_0001de7c + iVar7 * 4);
      pcVar3 = (char *)(unaff_EDI + iVar7 + param_1);
      pcVar5 = local_11c + iVar6 + 1;
      while( true ) {
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + 1;
        if (cVar1 == '\0') break;
        *pcVar5 = cVar1;
        pcVar5 = pcVar5 + 1;
      }
      iVar6 = (int)pcVar5 - (int)local_11c;
    }
    local_11c[iVar6] = '\0';
    _StrAdd(local_11c,")");
    _StrCopy(param_1,local_11c);
  }
  return;
}
