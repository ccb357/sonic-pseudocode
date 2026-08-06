void _DrawStageTextEntry(int param_1,char param_2,int param_3,undefined4 param_4,char param_5)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  int local_20;
  
  iVar2 = (int)param_2;
  pcVar3 = (char *)(param_1 + *(int *)(param_1 + 0x1000 + iVar2 * 4));
  local_20 = 0;
  iVar1 = *(int *)(param_1 + 0x1200 + iVar2 * 4);
  iVar4 = param_3;
  for (; local_20 < iVar1; local_20 = local_20 + 1) {
    if ('\0' < *pcVar3) {
      if (local_20 == iVar1 + -1) {
        iVar5 = 0;
        iVar1 = iVar4;
      }
      else {
        iVar5 = (int)param_5;
        iVar1 = param_3;
      }
      _DrawSprite(iVar1,param_4,8,8,iVar5,*pcVar3 * 8 + -8,(int)_TextMenuSurfaceNo);
      iVar1 = *(int *)(param_1 + 0x1200 + iVar2 * 4);
    }
    iVar4 = iVar4 + 8;
    param_3 = param_3 + 8;
    pcVar3 = pcVar3 + 1;
  }
  return;
}
