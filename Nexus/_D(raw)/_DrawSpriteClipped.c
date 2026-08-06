void _DrawSpriteClipped(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                       int param_7,int param_8)

//i realized a pattern, blue is c++, black is c..got it
{
  int iVar1;
  char *pcVar2;
  int iVar3;
  undefined1 *puVar4;
  int iVar5;
  
  if (0x140 < param_1 + param_3) {
    param_3 = 0x140 - param_1;
  }
  if (param_1 < 0) {
    param_5 = param_5 - param_1;
    param_3 = param_3 + param_1;
    param_1 = 0;
  }
  iVar3 = param_8 - param_2;
  if (param_2 + param_4 <= param_8) {
    iVar3 = param_4;
  }
  param_4 = iVar3;
  if (param_2 < 0) {
    param_6 = param_6 - param_2;
    param_4 = iVar3 + param_2;
    param_2 = 0;
  }
  if ((0 < param_3) && (0 < param_4)) {
    iVar3 = (&DAT_0005d610)[param_7 * 0x13];
    pcVar2 = &_GraphicData +
             param_6 * (&DAT_0005d610)[param_7 * 0x13] + (&DAT_0005d618)[param_7 * 0x13] + param_ 5;
    puVar4 = &_FrameBuffer + param_1 + param_2 * 0x140;
    for (iVar5 = 0; iVar5 != param_4; iVar5 = iVar5 + 1) {
      for (iVar1 = 0; param_3 != iVar1; iVar1 = iVar1 + 1) {
        if (*pcVar2 != '\0') {
          puVar4[iVar1] = *pcVar2;
        }
        pcVar2 = pcVar2 + 1;
      }
      puVar4 = puVar4 + (0x140 - param_3) + iVar1;
      pcVar2 = pcVar2 + (iVar3 - param_3);
    }
  }
  return;
}
