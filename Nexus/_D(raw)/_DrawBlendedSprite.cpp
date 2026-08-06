void _DrawBlendedSprite(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                       int param_7)

{
  int iVar1;
  int iVar2;
  byte *pbVar3;
  undefined1 *puVar4;
  int local_14;
  
  if (0x140 < param_1 + param_3) {
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
  if ((0 < param_3) && (0 < param_4)) {
    iVar1 = (&DAT_0005d610)[param_7 * 0x13];
    pbVar3 = &_GraphicData + param_6 * iVar1 + (&DAT_0005d618)[param_7 * 0x13] + param_5;
    puVar4 = &_FrameBuffer + param_1 + param_2 * 0x140;
    for (local_14 = 0; local_14 != param_4; local_14 = local_14 + 1) {
      for (iVar2 = 0; param_3 != iVar2; iVar2 = iVar2 + 1) {
        if (*pbVar3 != 0) {
          puVar4[iVar2] = (&_BlendLookupTable)[(uint)*pbVar3 + (uint)(byte)puVar4[iVar2] * 0x100] ;
        }
        pbVar3 = pbVar3 + 1;
      }
      puVar4 = puVar4 + (0x140 - param_3) + iVar2;
      pbVar3 = pbVar3 + (iVar1 - param_3);
    }
  }
  return;
}
