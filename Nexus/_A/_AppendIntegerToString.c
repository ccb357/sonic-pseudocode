void _AppendIntegerToString(int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 local_14;
  
  for (iVar4 = 0; *(char *)(param_1 + iVar4) != '\0'; iVar4 = iVar4 + 1) {
  }
  bVar1 = true;
  iVar3 = 10000000;
  local_14 = 7;
  do {
    iVar2 = (param_2 / iVar3) * iVar3;
    iVar3 = iVar3 / 10;
    iVar2 = (param_2 - iVar2) / iVar3;
    if (iVar3 == 1) {
      bVar1 = false;
    }
    if (iVar2 < 1) {
      if (!bVar1) {
        *(undefined1 *)(param_1 + iVar4) = 0x30;
        iVar4 = iVar4 + 1;
      }
    }
    else {
      *(char *)(param_1 + iVar4) = (char)iVar2 + '0';
      iVar4 = iVar4 + 1;
      bVar1 = false;
    }
    local_14 = local_14 + -1;
  } while (local_14 != 0);
  *(undefined1 *)(param_1 + iVar4) = 0;
  return;
}
