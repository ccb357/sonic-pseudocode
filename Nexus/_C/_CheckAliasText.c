void _CheckAliasText(int param_1)

{
  char cVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar2 = _FindStringToken(param_1,"#alias",1);
  if (iVar2 != 0) {
    return;
  }
  iVar6 = 0;
  iVar2 = 6;
  iVar5 = (uint)_NO_ALIASES * 0x20;
  do {
    cVar1 = *(char *)(param_1 + iVar2);
    if (cVar1 != ':') {
      (&_AliasVariables)[iVar6 + iVar5] = cVar1;
      iVar6 = iVar6 + 1;
    }
    else {
      (&_AliasVariables)[iVar6 + iVar5] = 0;
      iVar6 = 0;
    }
    bVar3 = cVar1 == ':';
    iVar4 = iVar2 + param_1;
    while( true ) {
      iVar2 = iVar2 + 1;
      if (1 < bVar3) {
        _NO_ALIASES = _NO_ALIASES + 1;
        return;
      }
      if (bVar3 == 0) break;
      if (bVar3 == 1) {
        (&_AliasNames)[iVar6 + iVar5] = *(undefined1 *)(iVar4 + 1);
        if (*(char *)(iVar4 + 1) == '\0') {
          iVar6 = 0;
          bVar3 = 2;
        }
        else {
          iVar6 = iVar6 + 1;
        }
      }
      iVar4 = iVar4 + 1;
    }
  } while( true );
}
