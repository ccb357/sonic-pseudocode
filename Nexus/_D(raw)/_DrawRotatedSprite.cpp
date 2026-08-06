void _DrawRotatedSprite(char param_1,int param_2,int param_3,int param_4,int param_5,int param_6 ,
                       int param_7,int param_8,int param_9,uint param_10,int param_11)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint local_a4;
  uint local_a0;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  char *local_68;
  int local_5c;
  int local_58;
  int local_44;
  int local_40 [5];
  int local_2c [7];
  
  iVar6 = param_6 + param_8;
  iVar2 = param_7 + param_9;
  param_10 = param_10 & 0x1ff;
  if (param_1 == '\0') {
    local_78 = param_6 + param_4;
    local_74 = param_7 + param_5;
    param_6 = param_6 + -1;
    param_7 = param_7 + -1;
    iVar1 = 0;
    if (param_10 != 0) {
      iVar1 = 0x200 - param_10;
    }
    local_80 = *(int *)(PTR__SinValue512_007fe034 + iVar1 * 4);
    local_7c = *(int *)(PTR__CosValue512_007fe030 + iVar1 * 4);
    iVar12 = local_7c * (-2 - param_4);
    iVar9 = local_80 * (-2 - param_5);
    local_2c[0] = param_2 + (iVar12 + iVar9 >> 9);
    iVar7 = (-2 - param_5) * local_7c;
    iVar1 = local_80 * (-2 - param_4);
    local_40[1] = param_3 + (iVar7 - iVar1 >> 9);
    iVar3 = (param_8 - param_4) + 2;
    iVar11 = local_7c * iVar3;
    local_2c[1] = (iVar9 + iVar11 >> 9) + param_2;
    iVar3 = iVar3 * local_80;
    local_40[2] = param_3 + (iVar7 - iVar3 >> 9);
    iVar9 = (param_9 - param_5) + 2;
    iVar7 = local_80 * iVar9;
    local_2c[2] = (iVar12 + iVar7 >> 9) + param_2;
    iVar9 = iVar9 * local_7c;
    local_40[3] = (iVar9 - iVar1 >> 9) + param_3;
    local_2c[3] = (iVar11 + iVar7 >> 9) + param_2;
    local_40[4] = (iVar9 - iVar3 >> 9) + param_3;
  }
  else if (param_1 == '\x01') {
    local_78 = param_6 + param_4 + -1;
    local_74 = param_7 + param_5;
    param_6 = param_6 + -1;
    param_7 = param_7 + -1;
    local_80 = *(int *)(PTR__SinValue512_007fe034 + param_10 * 4);
    local_7c = *(int *)(PTR__CosValue512_007fe030 + param_10 * 4);
    iVar12 = local_7c * (param_4 + 1);
    iVar1 = local_80 * (-2 - param_5);
    local_2c[0] = param_2 + (iVar12 - iVar1 >> 9);
    iVar7 = (-2 - param_5) * local_7c;
    iVar11 = (param_4 + 1) * local_80;
    local_40[1] = param_3 + (iVar7 + iVar11 >> 9);
    iVar3 = ((param_4 + -1) - param_8) + -2;
    iVar9 = local_7c * iVar3;
    local_2c[1] = (iVar9 - iVar1 >> 9) + param_2;
    iVar3 = iVar3 * local_80;
    local_40[2] = param_3 + (iVar7 + iVar3 >> 9);
    iVar1 = (param_9 - param_5) + 2;
    iVar7 = local_80 * iVar1;
    local_2c[2] = param_2 + (iVar12 - iVar7 >> 9);
    iVar1 = iVar1 * local_7c;
    local_40[3] = (iVar11 + iVar1 >> 9) + param_3;
    local_2c[3] = (iVar9 - iVar7 >> 9) + param_2;
    local_40[4] = (iVar3 + iVar1 >> 9) + param_3;
  }
  iVar1 = 0x140;
  iVar3 = 0;
  do {
    if (local_40[iVar3 + 5] < iVar1) {
      iVar1 = local_40[iVar3 + 5];
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 != 4);
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  iVar3 = 0;
  iVar7 = 1;
  do {
    if (iVar3 < local_40[iVar7 + 4]) {
      iVar3 = local_40[iVar7 + 4];
    }
    iVar7 = iVar7 + 1;
  } while (iVar7 != 5);
  if (0x140 < iVar3) {
    iVar3 = 0x140;
  }
  iVar3 = iVar3 - iVar1;
  local_44 = 0xf0;
  iVar7 = 1;
  do {
    if (local_40[iVar7] < local_44) {
      local_44 = local_40[iVar7];
    }
    iVar7 = iVar7 + 1;
  } while (iVar7 != 5);
  if (local_44 < 0) {
    local_44 = 0;
  }
  iVar7 = 0;
  iVar9 = 1;
  do {
    if (iVar7 < local_40[iVar9]) {
      iVar7 = local_40[iVar9];
    }
    iVar9 = iVar9 + 1;
  } while (iVar9 != 5);
  if (0x140 < iVar7) {
    iVar7 = 0x140;
  }
  iVar7 = iVar7 - local_44;
  if ((0 < iVar3) && (0 < iVar7)) {
    iVar9 = (&DAT_0005d610)[param_11 * 0x13];
    local_68 = &_FrameBuffer + iVar1 + local_44 * 0x140;
    iVar1 = iVar1 - param_2;
    local_44 = local_44 - param_3;
    if (param_1 == '\0') {
      local_a0 = local_44 * local_7c + iVar1 * local_80;
      local_a4 = local_7c * iVar1 - local_80 * local_44;
      for (local_5c = 0; local_5c != iVar7; local_5c = local_5c + 1) {
        local_2c[0] = local_78 + ((int)local_a4 >> 9);
        local_40[1] = local_74 + ((int)local_a0 >> 9);
        pcVar4 = &_GraphicData +
                 iVar9 * local_40[1] + (&DAT_0005d618)[param_11 * 0x13] + local_2c[0];
        pcVar5 = local_68 + iVar3;
        uVar8 = local_a0;
        uVar10 = local_a4;
        while( true ) {
          local_2c[1] = uVar10 & 0x1ff;
          local_40[2] = uVar8 & 0x1ff;
          if (local_68 == pcVar5) break;
          if ((((param_6 < local_2c[0]) && (local_2c[0] < iVar6)) && (param_7 < local_40[1])) &&
             ((local_40[1] < iVar2 && (*pcVar4 != '\0')))) {
            *local_68 = *pcVar4;
          }
          local_68 = local_68 + 1;
          uVar10 = local_7c + local_2c[1];
          pcVar4 = pcVar4 + ((int)uVar10 >> 9);
          local_2c[0] = ((int)uVar10 >> 9) + local_2c[0];
          uVar8 = local_80 + local_40[2];
          iVar1 = (int)uVar8 >> 9;
          if (iVar1 == -1) {
            pcVar4 = pcVar4 + -iVar9;
          }
          else if (iVar1 == 1) {
            pcVar4 = pcVar4 + iVar9;
          }
          local_40[1] = iVar1 + local_40[1];
        }
        local_a4 = local_a4 - local_80;
        local_a0 = local_a0 + local_7c;
        local_68 = pcVar5 + (0x140 - iVar3);
      }
    }
    else if (param_1 == '\x01') {
      for (local_58 = 0; iVar7 != local_58; local_58 = local_58 + 1) {
        uVar10 = local_78 * 0x200 - (local_44 * local_80 + local_7c * iVar1);
        uVar8 = local_74 * 0x200 + (local_44 * local_7c - iVar1 * local_80);
        local_2c[0] = (int)uVar10 >> 9;
        local_40[1] = (int)uVar8 >> 9;
        pcVar5 = &_GraphicData +
                 iVar9 * local_40[1] + (&DAT_0005d618)[param_11 * 0x13] + local_2c[0];
        pcVar4 = local_68 + iVar3;
        while( true ) {
          local_2c[1] = uVar10 & 0x1ff;
          local_40[2] = uVar8 & 0x1ff;
          if (pcVar4 == local_68) break;
          if (((param_6 < local_2c[0]) && (local_2c[0] < iVar6)) &&
             ((param_7 < local_40[1] && ((local_40[1] < iVar2 && (*pcVar5 != '\0')))))) {
            *local_68 = *pcVar5;
          }
          local_68 = local_68 + 1;
          uVar10 = local_2c[1] - local_7c;
          pcVar5 = pcVar5 + ((int)uVar10 >> 9);
          local_2c[0] = ((int)uVar10 >> 9) + local_2c[0];
          uVar8 = local_40[2] - local_80;
          iVar11 = (int)uVar8 >> 9;
          if (iVar11 == -1) {
            pcVar5 = pcVar5 + -iVar9;
          }
          else if (iVar11 == 1) {
            pcVar5 = pcVar5 + iVar9;
          }
          local_40[1] = iVar11 + local_40[1];
        }
        local_44 = local_44 + 1;
        local_68 = local_68 + (0x140 - iVar3);
      }
    }
  }
  return;
}
