void _DrawScaledTintMask(char param_1,int param_2,int param_3,int param_4,int param_5,int param_ 6,
                        int param_7,int param_8,int param_9,int param_10,int param_11,int param_1 2,
                        int param_13)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  uint uVar7;
  int iVar8;
  char *pcVar9;
  uint local_40;
  int local_3c;
  uint local_38;
  undefined *local_34;
  int local_28;
  int local_24;
  int local_18;
  int local_14;
  
  param_6 = param_6 * 4;
  param_7 = param_7 * 4;
  local_3c = param_8 + -1;
  param_2 = param_2 - (param_6 * param_4 >> 0xb);
  local_14 = param_8 * param_6 >> 0xb;
  param_3 = param_3 - (param_7 * param_5 >> 0xb);
  local_18 = param_7 * param_9 >> 0xb;
  iVar3 = (int)((2048.0 / (float)param_6) * 2048.0);
  iVar4 = (int)((2048.0 / (float)param_7) * 2048.0);
  if (0x140 < param_2 + local_14) {
    local_14 = 0x140 - param_2;
  }
  if (param_1 == '\0') {
    if (param_2 < 0) {
      local_38 = -iVar3 * param_2;
      param_10 = param_10 + ((int)local_38 >> 0xb);
LAB_000066d5:
      local_14 = local_14 + param_2;
      local_38 = local_38 & 0x7ff;
      param_2 = 0;
      goto LAB_000066e5;
    }
  }
  else if (param_2 < 0) {
    local_38 = -iVar3 * param_2;
    local_3c = local_3c - ((int)local_38 >> 0xb);
    goto LAB_000066d5;
  }
  local_38 = 0;
LAB_000066e5:
  if (0xf0 < param_3 + local_18) {
    local_18 = 0xf0 - param_3;
  }
  if (param_3 < 0) {
    param_11 = param_11 + (-iVar4 * param_3 >> 0xb);
    local_40 = -iVar4 * param_3 & 0x7ff;
    local_18 = local_18 + param_3;
    param_3 = 0;
  }
  else {
    local_40 = 0;
  }
  if ((0 < local_14) && (0 < local_18)) {
    iVar2 = (&DAT_0005d610)[param_13 * 0x13];
    pcVar9 = &_GraphicData + param_11 * iVar2 + (&DAT_0005d618)[param_13 * 0x13] + param_10;
    pbVar6 = &_FrameBuffer + param_2 + param_3 * 0x140;
    if (param_12 == 1) {
      local_34 = &_TintLookupTable2;
    }
    else if (param_12 < 2) {
      if (param_12 == 0) {
        local_34 = &_TintLookupTable1;
      }
    }
    else if (param_12 == 2) {
      local_34 = &_TintLookupTable3;
    }
    else if (param_12 == 3) {
      local_34 = &_TintLookupTable4;
    }
    if (param_1 == '\0') {
      for (local_28 = 0; local_28 != local_18; local_28 = local_28 + 1) {
        iVar8 = 0;
        pbVar1 = pbVar6 + local_14;
        uVar7 = local_38;
        for (; pbVar6 != pbVar1; pbVar6 = pbVar6 + 1) {
          if (*pcVar9 != '\0') {
            *pbVar6 = local_34[*pbVar6];
          }
          iVar5 = (int)(uVar7 + iVar3) >> 0xb;
          pcVar9 = pcVar9 + iVar5;
          iVar8 = iVar8 + iVar5;
          uVar7 = uVar7 + iVar3 & 0x7ff;
        }
        pbVar6 = pbVar1 + (0x140 - local_14);
        pcVar9 = pcVar9 + (((int)(local_40 + iVar4) >> 0xb) * iVar2 - iVar8);
        local_40 = local_40 + iVar4 & 0x7ff;
      }
    }
    else if (param_1 == '\x01') {
      pcVar9 = pcVar9 + local_3c;
      for (local_24 = 0; local_24 != local_18; local_24 = local_24 + 1) {
        iVar8 = 0;
        pbVar1 = pbVar6 + local_14;
        uVar7 = local_38;
        for (; pbVar6 != pbVar1; pbVar6 = pbVar6 + 1) {
          if (*pcVar9 != '\0') {
            *pbVar6 = local_34[*pbVar6];
          }
          iVar5 = (int)(uVar7 + iVar3) >> 9;
          pcVar9 = pcVar9 + -iVar5;
          iVar8 = iVar8 + iVar5;
          uVar7 = uVar7 + iVar3 & 0x1ff;
        }
        pbVar6 = pbVar1 + (0x140 - local_14);
        pcVar9 = pcVar9 + iVar8 + ((int)(local_40 + iVar4) >> 9) * iVar2;
        local_40 = local_40 + iVar4 & 0x1ff;
      }
    }
  }
  return;
}
