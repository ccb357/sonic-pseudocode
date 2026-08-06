void _DrawSpriteNoKey(int param_1,int param_2,size_t param_3,int param_4,int param_5,int param_6 ,
                     int param_7)

{
  int iVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  int iVar4;
  
  if (0x140 < (int)(param_1 + param_3)) {
    param_3 = 0x140 - param_1;
  }
  if (param_1 < 0) {
    param_5 = param_5 - param_1;
    param_3 = param_3 + param_1;
    param_1 = 0;
  }
  if (0xf0 < param_2 + param_4) {
    param_4 = 0xf0 - param_2;
  }
  if (param_2 < 0) {
    param_6 = param_6 - param_2;
    param_4 = param_4 + param_2;
    param_2 = 0;
  }
  if ((0 < (int)param_3) && (0 < param_4)) {
    iVar1 = (&DAT_0005d610)[param_7 * 0x13];
    puVar2 = &_GraphicData + param_6 * iVar1 + param_5 + (&DAT_0005d618)[param_7 * 0x13];
    puVar3 = &_FrameBuffer + param_1 + param_2 * 0x140;
    for (iVar4 = 0; param_4 != iVar4; iVar4 = iVar4 + 1) {
      _memcpy(puVar3,puVar2,param_3);
      puVar3 = puVar3 + 0x140;
      puVar2 = puVar2 + iVar1;
    }
  }
  return;
}
