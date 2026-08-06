int _FindStringToken(char *param_1,int param_2,char param_3)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  char *pcVar4;
  int local_18;
  int local_14;
  
  local_18 = 0;
  local_14 = 0;
  while( true ) {
    if (*param_1 == '\0') {
      return -1;
    }
    bVar2 = true;
    pcVar4 = param_1;
    for (iVar3 = 1; cVar1 = *(char *)(param_2 + -1 + iVar3), cVar1 != '\0'; iVar3 = iVar3 + 1) {
      if (*pcVar4 == '\0') {
        return -1;
      }
      if (cVar1 != *pcVar4) {
        bVar2 = false;
      }
      pcVar4 = pcVar4 + 1;
    }
    if ((bVar2) && (local_14 = local_14 + 1, local_14 == param_3)) break;
    local_18 = local_18 + 1;
    param_1 = param_1 + 1;
  }
  return local_18;
}
