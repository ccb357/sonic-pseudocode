void _DrawBlendedTextMenuEntry(int param_1,char param_2,int param_3,undefined4 param_4,char para m_5)

{
  char *pcVar1;
  int iVar2;
  
  pcVar1 = (char *)(param_1 + *(int *)(param_1 + 0x1000 + param_2 * 4));
  for (iVar2 = 0; iVar2 < *(int *)(param_1 + 0x1200 + param_2 * 4); iVar2 = iVar2 + 1) {
    if ('\0' < *pcVar1) {
      _DrawBlendedSprite(param_3,param_4,8,8,(int)param_5,*pcVar1 * 8 + -8,(int)_TextMenuSurfaceN o);
    }
    param_3 = param_3 + 8;
    pcVar1 = pcVar1 + 1;
  }
  return;
}