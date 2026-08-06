void _DrawTintRect(int param_1,int param_2,int param_3,undefined *param_4,int param_5)

{
  byte *pbVar1;
  byte *pbVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar4 = param_4;
  if (0x140 < param_1 + param_3) {
    param_3 = 0x140 - param_1;
  }
  if (param_1 < 0) {
    param_3 = param_3 + param_1;
    param_1 = 0;
  }
  if (0xf0 < (int)(param_4 + param_2)) {
    param_4 = (undefined *)(0xf0 - param_2);
  }
  if (param_2 < 0) {
    param_4 = param_4 + param_2;
    param_2 = 0;
  }
  if ((0 < param_3) && (0 < (int)param_4)) {
    pbVar2 = &_FrameBuffer + param_1 + param_2 * 0x140;
    if (param_5 == 1) {
      puVar4 = &_TintLookupTable2;
    }
    else if (param_5 < 2) {
      if (param_5 == 0) {
        puVar4 = &_TintLookupTable1;
      }
    }
    else if (param_5 == 2) {
      puVar4 = &_TintLookupTable3;
    }
    else if (param_5 == 3) {
      puVar4 = &_TintLookupTable4;
    }
    for (puVar3 = (undefined *)0x0; puVar3 != param_4; puVar3 = puVar3 + 1) {
      pbVar1 = pbVar2 + param_3;
      for (; pbVar2 != pbVar1; pbVar2 = pbVar2 + 1) {
        *pbVar2 = puVar4[*pbVar2];
      }
      pbVar2 = pbVar1 + (0x140 - param_3);
    }
  }
  return;
}
