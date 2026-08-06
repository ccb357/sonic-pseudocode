void _DrawTintSpriteMask(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6 ,
                        int param_7,int param_8)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined1 *local_24;
  undefined *local_20;
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
    iVar1 = (&DAT_0005d610)[param_8 * 0x13];
    local_24 = &_FrameBuffer + param_1 + param_2 * 0x140;
    pcVar3 = &_GraphicData + param_5 + iVar1 * param_6 + (&DAT_0005d618)[param_8 * 0x13];
    if (param_7 == 1) {
      local_20 = &_TintLookupTable2;
    }
    else if (param_7 < 2) {
      if (param_7 == 0) {
        local_20 = &_TintLookupTable1;
      }
    }
    else if (param_7 == 2) {
      local_20 = &_TintLookupTable3;
    }
    else if (param_7 == 3) {
      local_20 = &_TintLookupTable4;
    }
    for (local_14 = 0; local_14 != param_4; local_14 = local_14 + 1) {
      for (iVar2 = 0; param_3 != iVar2; iVar2 = iVar2 + 1) {
        if (*pcVar3 != '\0') {
          local_24[iVar2] = local_20[(byte)local_24[iVar2]];
        }
        pcVar3 = pcVar3 + 1;
      }
      local_24 = local_24 + (0x140 - param_3) + iVar2;
      pcVar3 = pcVar3 + (iVar1 - param_3);
    }
  }
  return;
}
