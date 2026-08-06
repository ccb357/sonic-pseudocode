void _DrawScaledSprite(char param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                      int param_7,int param_8,int param_9,int param_10,int param_11,int param_12)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  uint uVar7;
  char *pcVar8;
  int iVar9;
  uint local_3c;
  int local_38;
  uint local_34;
  int local_28;
  int local_24;
  int local_18;
  int local_14;
  
  param_6 = param_6 * 4;
  param_7 = param_7 * 4;
  local_38 = param_8 + -1;
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
    if (-1 < param_2) {
LAB_00006b53:
      local_34 = 0;
      goto LAB_00006b5a;
    }
    local_34 = -iVar3 * param_2;
    param_10 = param_10 + ((int)local_34 >> 0xb);
  }
  else {
    if (-1 < param_2) goto LAB_00006b53;
    local_34 = -iVar3 * param_2;
    local_38 = local_38 - ((int)local_34 >> 0xb);
  }
  local_34 = local_34 & 0x7ff;
  local_14 = local_14 + param_2;
  param_2 = 0;
LAB_00006b5a:
  if (0xf0 < param_3 + local_18) {
    local_18 = 0xf0 - param_3;
  }
  if (param_3 < 0) {
    param_11 = param_11 + (-iVar4 * param_3 >> 0xb);
    local_3c = -iVar4 * param_3 & 0x7ff;
    local_18 = local_18 + param_3;
    param_3 = 0;
  }
  else {
    local_3c = 0;
  }
  if ((0 < local_14) && (0 < local_18)) {
    iVar2 = (&DAT_0005d610)[param_12 * 0x13];
    pcVar8 = &_GraphicData + param_11 * iVar2 + (&DAT_0005d618)[param_12 * 0x13] + param_10;
    pcVar6 = &_FrameBuffer + param_2 + param_3 * 0x140;
    if (param_1 == '\0') {
      for (local_28 = 0; local_28 != local_18; local_28 = local_28 + 1) {
        iVar9 = 0;
        pcVar1 = pcVar6 + local_14;
        uVar7 = local_34;
        for (; pcVar6 != pcVar1; pcVar6 = pcVar6 + 1) {
          if (*pcVar8 != '\0') {
            *pcVar6 = *pcVar8;
          }
          iVar5 = (int)(uVar7 + iVar3) >> 0xb;
          pcVar8 = pcVar8 + iVar5;
          iVar9 = iVar9 + iVar5;
          uVar7 = uVar7 + iVar3 & 0x7ff;
        }
        pcVar6 = pcVar1 + (0x140 - local_14);
        pcVar8 = pcVar8 + (((int)(local_3c + iVar4) >> 0xb) * iVar2 - iVar9);
        local_3c = local_3c + iVar4 & 0x7ff;
      }
    }
    else if (param_1 == '\x01') {
      pcVar8 = pcVar8 + local_38;
      for (local_24 = 0; local_18 != local_24; local_24 = local_24 + 1) {
        iVar9 = 0;
        pcVar1 = pcVar6 + local_14;
        uVar7 = local_34;
        for (; pcVar1 != pcVar6; pcVar6 = pcVar6 + 1) {
          if (*pcVar8 != '\0') {
            *pcVar6 = *pcVar8;
          }
          iVar5 = (int)(uVar7 + iVar3) >> 9;
          pcVar8 = pcVar8 + -iVar5;
          iVar9 = iVar9 + iVar5;
          uVar7 = uVar7 + iVar3 & 0x1ff;
        }
        pcVar6 = pcVar1 + (0x140 - local_14);
        pcVar8 = pcVar8 + iVar9 + ((int)(local_3c + iVar4) >> 9) * iVar2;
        local_3c = local_3c + iVar4 & 0x1ff;
      }
    }
  }
  return;
}
