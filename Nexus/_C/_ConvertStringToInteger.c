undefined4 _ConvertStringToInteger(char *param_1,int *param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  
  *param_2 = 0;
  cVar1 = *param_1;
  if (cVar1 != '+' && (9 < (byte)(cVar1 - 0x30U) && cVar1 != '-')) {
LAB_000039f1:
    uVar5 = 0;
  }
  else {
    for (iVar3 = 0; param_1[iVar3] != '\0'; iVar3 = iVar3 + 1) {
    }
    uVar6 = iVar3 - 1;
    if (cVar1 != '-') {
      if (cVar1 == '+') {
        uVar6 = iVar3 - 2;
      }
      uVar4 = (uint)(cVar1 == '+');
      bVar2 = false;
    }
    else {
      uVar6 = iVar3 - 2;
      uVar4 = 1;
      bVar2 = true;
    }
    param_1 = param_1 + uVar4;
    for (; uVar6 < 0x80000000; uVar6 = uVar6 - 1) {
      cVar1 = *param_1;
      if (9 < (byte)(cVar1 - 0x30U)) goto LAB_000039f1;
      if ((int)uVar6 < 1) {
        *param_2 = (int)cVar1 + *param_2 + -0x30;
      }
      else {
        iVar3 = cVar1 + -0x30;
        for (uVar4 = 0; uVar6 != uVar4; uVar4 = uVar4 + 1) {
          iVar3 = iVar3 * 10;
        }
        *param_2 = *param_2 + iVar3;
      }
      param_1 = param_1 + 1;
    }
    if (bVar2) {
      *param_2 = -*param_2;
    }
    uVar5 = 1;
  }
  return uVar5;
}
