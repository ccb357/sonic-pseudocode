void _AddTextMenuEntry(int param_1,char *param_2)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = (int)section_00001470.segname[param_1 + 4];
  iVar3 = *(int *)(section_00001470.segname + param_1);
  *(int *)(param_1 + 0x1000 + iVar4 * 4) = iVar3;
  *(undefined4 *)(param_1 + 0x1200 + iVar4 * 4) = 0;
  while( true ) {
    cVar2 = *param_2;
    if (cVar2 == '\0') break;
    *(char *)(iVar3 + param_1) = cVar2;
    if (cVar2 == ' ') {
      *(undefined1 *)(iVar3 + param_1) = 0;
    }
    if ((byte)(*(char *)(iVar3 + param_1) - 0x30U) < 10) {
      *(char *)(iVar3 + param_1) = *(char *)(iVar3 + param_1) + -0x15;
    }
    if ((byte)(*(char *)(iVar3 + param_1) - 0x3aU) < 0x2c) {
      *(char *)(iVar3 + param_1) = *(char *)(iVar3 + param_1) + -0x40;
    }
    *(int *)(section_00001470.segname + param_1) = iVar3 + 1;
    piVar1 = (int *)(param_1 + 0x1200 + iVar4 * 4);
    *piVar1 = *piVar1 + 1;
    param_2 = param_2 + 1;
    iVar3 = iVar3 + 1;
  }
  section_00001470.segname[param_1 + 4] = section_00001470.segname[param_1 + 4] + '\x01';
  return;
}
