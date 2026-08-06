void _DrawSprite(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int par am_7
                )

{
  int iVar1;
  int iVar2;
  char *pcVar3;
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
  if (0xf0 < param_4 + param_2) {
    param_4 = 0xf0 - param_2;
  }
  if (param_2 < 0) {
    param_6 = param_6 - param_2;
    param_4 = param_4 + param_2;
    param_2 = 0;
  }
  if ((0 < param_3) && (0 < param_4)) {
    iVar1 = (&DAT_0005d610)[param_7 * 0x13];
    pcVar3 = &_GraphicData +
             param_6 * (&DAT_0005d610)[param_7 * 0x13] + (&DAT_0005d618)[param_7 * 0x13] + param_ 5;
    puVar4 = &_FrameBuffer + param_1 + param_2 * 0x140;
    for (iVar5 = 0; iVar5 != param_4; iVar5 = iVar5 + 1) {
      for (iVar2 = 0; param_3 != iVar2; iVar2 = iVar2 + 1) {
        if (*pcVar3 != '\0') {
          puVar4[iVar2] = *pcVar3;
        }
        pcVar3 = pcVar3 + 1;
      }
      puVar4 = puVar4 + (0x140 - param_3) + iVar2;
      pcVar3 = pcVar3 + (iVar1 - param_3);
    }
  }
  return;
}
