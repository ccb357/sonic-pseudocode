void _EditTextMenuEntry(int param_1,int param_2,char param_3)

{
  int *piVar1;
  char cVar2;
  char cVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = (int)param_3;
  *(undefined4 *)(param_1 + 0x1200 + iVar5 * 4) = 0;
  pcVar4 = (char *)(param_1 + *(int *)(param_1 + 0x1000 + iVar5 * 4));
  for (iVar6 = 1; cVar2 = *(char *)(param_2 + -1 + iVar6), cVar2 != '\0'; iVar6 = iVar6 + 1) {
    cVar3 = '\0';
    if (cVar2 != ' ') {
      cVar3 = cVar2;
    }
    *pcVar4 = cVar3;
    if ((byte)(cVar3 - 0x30U) < 10) {
      cVar3 = cVar3 + -0x15;
      *pcVar4 = cVar3;
    }
    if ((byte)(cVar3 - 0x3aU) < 0x2c) {
      *pcVar4 = cVar3 + -0x40;
    }
    piVar1 = (int *)(param_1 + 0x1200 + iVar5 * 4);
    *piVar1 = *piVar1 + 1;
    pcVar4 = pcVar4 + 1;
  }
  return;
}
