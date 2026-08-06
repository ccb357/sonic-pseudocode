void _DrawHLineScrollLayer(byte param_1)
//so some are in c and some are in c++... THIS IS SOOOOO CONFUSING
{
  int iVar1;
  undefined *puVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  char *pcVar10;
  int iVar11;
  char *pcVar12;
  int *piVar13;
  int iVar14;
  char *pcVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  char *pcVar19;
  int iVar20;
  uint uVar21;
  bool bVar22;
  undefined *local_8c;
  undefined *local_88;
  uint local_84;
  int local_7c;
  uint local_78;
  uint local_74;
  uint local_70;
  undefined4 *local_54;
  undefined4 *local_50;
  int local_4c;
  int local_48;
  byte *local_20;
  int local_18;
  int local_14;
  
  uVar4 = (uint)param_1;
  iVar5 = (uint)(byte)(&_ActiveTileLayers)[uVar4] * 0x28020;
  local_8c = &_StageLayouts + iVar5;
  local_74 = (uint)(byte)(&DAT_0062a5ed)[iVar5];
  local_70 = (uint)(byte)(&DAT_0062a5ee)[iVar5];
  bVar22 = _TLayerMidPoint <= param_1;
  if ((&_ActiveTileLayers)[uVar4] == 0) {
    DAT_007fc050 = _XScrollOffset;
    local_54 = &_BGDeformationData1 + (_YScrollOffset + _DeformationPos1 & 0xff);
    local_50 = &_BGDeformationData2 +
               (_YScrollOffset + _DeformationPos2 + *(int *)PTR__WaterDrawPos_007fe12c & 0xff);
    local_8c = &_StageLayouts;
    local_88 = &DAT_006225d0;
    iVar5 = _YScrollOffset;
    _LastXSize = local_74;
  }
  else {
    iVar17 = *(int *)(&DAT_0062a5d0 + iVar5) * _YScrollOffset;
    *(int *)(&DAT_0062a5d8 + iVar5) =
         *(int *)(&DAT_0062a5d8 + iVar5) + *(int *)(&DAT_0062a5d4 + iVar5);
    if ((int)(local_70 * 0x800000) <
        *(int *)(&DAT_0062a5d8 + (uint)(byte)(&_ActiveTileLayers)[uVar4] * 0x28020)) {
      *(uint *)(&DAT_0062a5d8 + (uint)(byte)(&_ActiveTileLayers)[uVar4] * 0x28020) =
           *(int *)(&DAT_0062a5d8 + (uint)(byte)(&_ActiveTileLayers)[uVar4] * 0x28020) +
           local_70 * -0x800000;
    }
    iVar5 = ((iVar17 >> 6) +
            (int)*(short *)(&DAT_0062a5da + (uint)(byte)(&_ActiveTileLayers)[uVar4] * 0x28020)) %
            (int)(local_70 << 7);
    local_70 = (int)(local_70 << 7) >> 7;
    local_88 = &DAT_006225d0 + (uint)(byte)(&_ActiveTileLayers)[uVar4] * 0x28020;
    local_54 = &_BGDeformationData3 + (iVar5 + _DeformationPos3 & 0xff);
    local_50 = &_BGDeformationData4 +
               (iVar5 + _DeformationPos4 + *(int *)PTR__WaterDrawPos_007fe12c & 0xff);
  }
  iVar17 = _XScrollOffset;
  if ((&DAT_0062a5ec)[(uint)(byte)(&_ActiveTileLayers)[uVar4] * 0x28020] == '\x01') {
    if (local_74 != _LastXSize) {
      piVar13 = &_HParallax;
      uVar4 = (uint)DAT_007fc550;
      for (iVar20 = 0; iVar20 < (int)uVar4; iVar20 = iVar20 + 1) {
        piVar13[0x300] = iVar17 * *piVar13 >> 7;
        iVar18 = piVar13[0x200] + piVar13[0x100];
        piVar13[0x200] = iVar18;
        if ((int)(local_74 * 0x800000) < iVar18) {
          iVar18 = iVar18 + local_74 * -0x800000;
          piVar13[0x200] = iVar18;
        }
        piVar13[0x300] = ((iVar18 >> 0x10) + piVar13[0x300]) % (int)(local_74 << 7);
        piVar13 = piVar13 + 1;
      }
      local_74 = (int)(local_74 << 7) >> 7;
    }
    _LastXSize = local_74;
  }
  puVar2 = PTR__TileGfx_007fe14c;
  uVar4 = iVar5 % (int)(local_70 * 0x80);
  if (0x7fffffff < uVar4) {
    uVar4 = uVar4 + local_70 * 0x80;
  }
  local_20 = local_88 + uVar4;
  local_78 = uVar4 & 0xf;
  local_84 = (int)uVar4 >> 7;
  local_7c = (int)(uVar4 & 0x7f) >> 4;
  iVar5 = *(int *)PTR__WaterDrawPos_007fe12c;
  pcVar19 = PTR__FrameBuffer_007fe128;
  for (local_48 = 0; local_48 != iVar5; local_48 = local_48 + 1) {
    uVar4 = (&DAT_007fc050)[*local_20];
    if ((&DAT_007fc450)[*local_20] == '\x01') {
      uVar4 = uVar4 + local_54[local_48];
    }
    local_20 = local_20 + 1;
    if (0x7fffffff < uVar4) {
      uVar4 = uVar4 + local_74 * 0x80;
    }
    if ((int)(local_74 * 0x80) <= (int)uVar4) {
      uVar4 = uVar4 + local_74 * -0x80;
    }
    uVar21 = (int)uVar4 >> 7;
    iVar6 = (int)(uVar4 & 0x7f) >> 4;
    uVar4 = uVar4 & 0xf;
    iVar18 = 0x10 - uVar4;
    iVar16 = local_84 * 0x100;
    iVar17 = local_7c * 8;
    iVar20 = (uint)*(ushort *)(local_8c + (uVar21 + iVar16) * 2) * 0x40 + iVar6 + iVar17;
    iVar7 = local_78 * 0x10;
    iVar8 = iVar7 + 0xf;
    iVar1 = (0xf - local_78) * 0x10;
    iVar9 = iVar1 + 0xf;
    if (bVar22 == (bool)(&DAT_007a2710)[iVar20]) {
      cVar3 = (&DAT_0079a710)[iVar20];
      if (cVar3 == '\x01') {
        pcVar12 = puVar2 + ((iVar8 + (&_Tile128x128)[iVar20]) - uVar4);
        pcVar15 = pcVar19 + iVar18;
        for (; pcVar19 != pcVar15; pcVar19 = pcVar19 + 1) {
          if (*pcVar12 != '\0') {
            *pcVar19 = *pcVar12;
          }
          pcVar12 = pcVar12 + -1;
        }
      }
      else if (cVar3 == '\0') {
        iVar11 = (&_Tile128x128)[iVar20];
        for (iVar14 = 0; iVar18 != iVar14; iVar14 = iVar14 + 1) {
          if (puVar2[iVar14 + uVar4 + iVar7 + iVar11] != '\0') {
            *pcVar19 = puVar2[iVar14 + uVar4 + iVar7 + iVar11];
          }
          pcVar19 = pcVar19 + 1;
        }
      }
      else if (cVar3 == '\x02') {
        iVar11 = (&_Tile128x128)[iVar20];
        for (iVar14 = 0; iVar14 != iVar18; iVar14 = iVar14 + 1) {
          if (puVar2[iVar14 + uVar4 + iVar1 + iVar11] != '\0') {
            *pcVar19 = puVar2[iVar14 + uVar4 + iVar1 + iVar11];
          }
          pcVar19 = pcVar19 + 1;
        }
      }
      else if (cVar3 == '\x03') {
        pcVar12 = puVar2 + ((iVar9 + (&_Tile128x128)[iVar20]) - uVar4);
        pcVar15 = pcVar19 + iVar18;
        for (; pcVar19 != pcVar15; pcVar19 = pcVar19 + 1) {
          if (*pcVar12 != '\0') {
            *pcVar19 = *pcVar12;
          }
          pcVar12 = pcVar12 + -1;
        }
      }
    }
    else {
      pcVar19 = pcVar19 + iVar18;
    }
    iVar6 = iVar6 + 1;
    local_18 = 0x13;
    pcVar15 = pcVar19;
LAB_000193e5:
    local_18 = local_18 + -1;
    if (local_18 != -1) {
      if (iVar6 < 8) {
        iVar20 = iVar20 + 1;
        iVar6 = iVar6 + 1;
      }
      else {
        uVar21 = uVar21 + 1;
        if (local_74 == uVar21) {
          uVar21 = 0;
        }
        iVar20 = iVar17 + (uint)*(ushort *)(local_8c + (uVar21 + iVar16) * 2) * 0x40;
        iVar6 = 1;
      }
      if (bVar22 == (bool)(&DAT_007a2710)[iVar20]) {
        cVar3 = (&DAT_0079a710)[iVar20];
        iVar11 = iVar8;
        if (cVar3 == '\x01') goto LAB_00019325;
        iVar11 = iVar7;
        if ((cVar3 != '\0') && (iVar11 = iVar1, cVar3 != '\x02')) goto code_r0x0001924a;
        pcVar19 = puVar2 + iVar11 + (&_Tile128x128)[iVar20];
        if (*pcVar19 != '\0') {
          *pcVar15 = *pcVar19;
        }
        if (pcVar19[1] != '\0') {
          pcVar15[1] = pcVar19[1];
        }
        if (pcVar19[2] != '\0') {
          pcVar15[2] = pcVar19[2];
        }
        if (pcVar19[3] != '\0') {
          pcVar15[3] = pcVar19[3];
        }
        if (pcVar19[4] != '\0') {
          pcVar15[4] = pcVar19[4];
        }
        if (pcVar19[5] != '\0') {
          pcVar15[5] = pcVar19[5];
        }
        if (pcVar19[6] != '\0') {
          pcVar15[6] = pcVar19[6];
        }
        if (pcVar19[7] != '\0') {
          pcVar15[7] = pcVar19[7];
        }
        if (pcVar19[8] != '\0') {
          pcVar15[8] = pcVar19[8];
        }
        if (pcVar19[9] != '\0') {
          pcVar15[9] = pcVar19[9];
        }
        if (pcVar19[10] != '\0') {
          pcVar15[10] = pcVar19[10];
        }
        if (pcVar19[0xb] != '\0') {
          pcVar15[0xb] = pcVar19[0xb];
        }
        if (pcVar19[0xc] != '\0') {
          pcVar15[0xc] = pcVar19[0xc];
        }
        if (pcVar19[0xd] != '\0') {
          pcVar15[0xd] = pcVar19[0xd];
        }
        if (pcVar19[0xe] != '\0') {
          pcVar15[0xe] = pcVar19[0xe];
        }
        cVar3 = pcVar19[0xf];
        goto LAB_000193db;
      }
      goto LAB_000193e2;
    }
    if (iVar6 < 8) {
      iVar17 = iVar20 + 1;
    }
    else {
      uVar21 = uVar21 + 1;
      if (local_74 == uVar21) {
        uVar21 = 0;
      }
      iVar17 = (uint)*(ushort *)(local_8c + (uVar21 + iVar16) * 2) * 0x40 + iVar17;
    }
    iVar18 = 0x10 - iVar18;
    if (bVar22 == (bool)(&DAT_007a2710)[iVar17]) {
      cVar3 = (&DAT_0079a710)[iVar17];
      if (cVar3 == '\x01') {
        pcVar12 = puVar2 + iVar8 + (&_Tile128x128)[iVar17];
        pcVar19 = pcVar15 + iVar18;
        for (; pcVar15 != pcVar19; pcVar15 = pcVar15 + 1) {
          if (*pcVar12 != '\0') {
            *pcVar15 = *pcVar12;
          }
          pcVar12 = pcVar12 + -1;
        }
      }
      else if (cVar3 == '\0') {
        iVar17 = (&_Tile128x128)[iVar17];
        for (iVar20 = 0; pcVar19 = pcVar15, iVar18 != iVar20; iVar20 = iVar20 + 1) {
          if (puVar2[iVar20 + iVar7 + iVar17] != '\0') {
            *pcVar15 = puVar2[iVar20 + iVar7 + iVar17];
          }
          pcVar15 = pcVar15 + 1;
        }
      }
      else if (cVar3 == '\x02') {
        iVar17 = (&_Tile128x128)[iVar17];
        for (iVar20 = 0; pcVar19 = pcVar15, iVar20 != iVar18; iVar20 = iVar20 + 1) {
          if (puVar2[iVar20 + iVar1 + iVar17] != '\0') {
            *pcVar15 = puVar2[iVar20 + iVar1 + iVar17];
          }
          pcVar15 = pcVar15 + 1;
        }
      }
      else {
        pcVar19 = pcVar15;
        if (cVar3 == '\x03') {
          pcVar12 = puVar2 + iVar9 + (&_Tile128x128)[iVar17];
          pcVar10 = pcVar15 + iVar18;
          for (; pcVar19 = pcVar15, pcVar15 != pcVar10; pcVar15 = pcVar15 + 1) {
            if (*pcVar12 != '\0') {
              *pcVar15 = *pcVar12;
            }
            pcVar12 = pcVar12 + -1;
          }
        }
      }
    }
    else {
      pcVar19 = pcVar15 + iVar18;
    }
    local_78 = local_78 + 1;
    if (0xf < (int)local_78) {
      local_7c = local_7c + 1;
      local_78 = 0;
    }
    if (7 < local_7c) {
      local_84 = local_84 + 1;
      if (local_70 == local_84) {
        local_20 = local_20 + local_70 * -0x80;
        local_84 = 0;
      }
      local_7c = 0;
    }
  }
  iVar5 = *(int *)PTR__WaterDrawPos_007fe12c;
  *(int *)PTR__WaterDrawPos_007fe12c = 0xf0 - iVar5;
  puVar2 = PTR__TileGfx_007fe14c;
  local_4c = 0;
  do {
    if (0xf0 - iVar5 == local_4c) {
      *(int *)PTR__WaterDrawPos_007fe12c = 0xf0 - *(int *)PTR__WaterDrawPos_007fe12c;
      return;
    }
    uVar4 = (&_HParallax)[*local_20];
    if ((&DAT_007fc450)[*local_20] == '\x01') {
      uVar4 = uVar4 + local_50[local_4c];
    }
    local_20 = local_20 + 1;
    if (0x7fffffff < uVar4) {
      uVar4 = uVar4 + local_74 * 0x80;
    }
    if ((int)(local_74 * 0x80) <= (int)uVar4) {
      uVar4 = uVar4 + local_74 * -0x80;
    }
    uVar21 = (int)uVar4 >> 7;
    iVar6 = (int)(uVar4 & 0x7f) >> 4;
    uVar4 = uVar4 & 0xf;
    iVar18 = 0x10 - uVar4;
    iVar16 = local_84 * 0x100;
    iVar17 = local_7c * 8;
    iVar20 = (uint)*(ushort *)(local_8c + (uVar21 + iVar16) * 2) * 0x40 + iVar6 + iVar17;
    iVar7 = local_78 * 0x10;
    iVar8 = iVar7 + 0xf;
    iVar1 = (0xf - local_78) * 0x10;
    iVar9 = iVar1 + 0xf;
    if (bVar22 == (bool)(&DAT_007a2710)[iVar20]) {
      cVar3 = (&DAT_0079a710)[iVar20];
      if (cVar3 == '\x01') {
        pcVar12 = puVar2 + ((iVar8 + (&_Tile128x128)[iVar20]) - uVar4);
        pcVar15 = pcVar19 + iVar18;
        for (; pcVar15 != pcVar19; pcVar19 = pcVar19 + 1) {
          if (*pcVar12 != '\0') {
            *pcVar19 = *pcVar12;
          }
          pcVar12 = pcVar12 + -1;
        }
      }
      else if (cVar3 == '\0') {
        iVar11 = (&_Tile128x128)[iVar20];
        for (iVar14 = 0; pcVar15 = pcVar19, iVar18 != iVar14; iVar14 = iVar14 + 1) {
          if (puVar2[iVar14 + uVar4 + iVar7 + iVar11] != '\0') {
            *pcVar19 = puVar2[iVar14 + uVar4 + iVar7 + iVar11];
          }
          pcVar19 = pcVar19 + 1;
        }
      }
      else if (cVar3 == '\x02') {
        iVar11 = (&_Tile128x128)[iVar20];
        for (iVar14 = 0; pcVar15 = pcVar19, iVar18 != iVar14; iVar14 = iVar14 + 1) {
          if (puVar2[iVar14 + uVar4 + iVar1 + iVar11] != '\0') {
            *pcVar19 = puVar2[iVar14 + uVar4 + iVar1 + iVar11];
          }
          pcVar19 = pcVar19 + 1;
        }
      }
      else {
        pcVar15 = pcVar19;
        if (cVar3 == '\x03') {
          pcVar10 = puVar2 + ((iVar9 + (&_Tile128x128)[iVar20]) - uVar4);
          pcVar12 = pcVar19 + iVar18;
          for (; pcVar15 = pcVar19, pcVar12 != pcVar19; pcVar19 = pcVar19 + 1) {
            if (*pcVar10 != '\0') {
              *pcVar19 = *pcVar10;
            }
            pcVar10 = pcVar10 + -1;
          }
        }
      }
    }
    else {
      pcVar15 = pcVar19 + iVar18;
    }
    iVar6 = iVar6 + 1;
    local_14 = 0x13;
LAB_00019984:
    local_14 = local_14 + -1;
    if (local_14 != -1) {
      if (iVar6 < 8) {
        iVar20 = iVar20 + 1;
        iVar6 = iVar6 + 1;
      }
      else {
        uVar21 = uVar21 + 1;
        if (local_74 == uVar21) {
          uVar21 = 0;
        }
        iVar20 = iVar17 + (uint)*(ushort *)(local_8c + (uVar21 + iVar16) * 2) * 0x40;
        iVar6 = 1;
      }
      if (bVar22 == (bool)(&DAT_007a2710)[iVar20]) {
        cVar3 = (&DAT_0079a710)[iVar20];
        iVar11 = iVar8;
        if (cVar3 == '\x01') goto LAB_000198c4;
        iVar11 = iVar7;
        if ((cVar3 != '\0') && (iVar11 = iVar1, cVar3 != '\x02')) goto code_r0x000197e9;
        pcVar19 = puVar2 + iVar11 + (&_Tile128x128)[iVar20];
        if (*pcVar19 != '\0') {
          *pcVar15 = *pcVar19;
        }
        if (pcVar19[1] != '\0') {
          pcVar15[1] = pcVar19[1];
        }
        if (pcVar19[2] != '\0') {
          pcVar15[2] = pcVar19[2];
        }
        if (pcVar19[3] != '\0') {
          pcVar15[3] = pcVar19[3];
        }
        if (pcVar19[4] != '\0') {
          pcVar15[4] = pcVar19[4];
        }
        if (pcVar19[5] != '\0') {
          pcVar15[5] = pcVar19[5];
        }
        if (pcVar19[6] != '\0') {
          pcVar15[6] = pcVar19[6];
        }
        if (pcVar19[7] != '\0') {
          pcVar15[7] = pcVar19[7];
        }
        if (pcVar19[8] != '\0') {
          pcVar15[8] = pcVar19[8];
        }
        if (pcVar19[9] != '\0') {
          pcVar15[9] = pcVar19[9];
        }
        if (pcVar19[10] != '\0') {
          pcVar15[10] = pcVar19[10];
        }
        if (pcVar19[0xb] != '\0') {
          pcVar15[0xb] = pcVar19[0xb];
        }
        if (pcVar19[0xc] != '\0') {
          pcVar15[0xc] = pcVar19[0xc];
        }
        if (pcVar19[0xd] != '\0') {
          pcVar15[0xd] = pcVar19[0xd];
        }
        if (pcVar19[0xe] != '\0') {
          pcVar15[0xe] = pcVar19[0xe];
        }
        cVar3 = pcVar19[0xf];
        goto LAB_0001997a;
      }
      goto LAB_00019981;
    }
    if (iVar6 < 8) {
      iVar17 = iVar20 + 1;
    }
    else {
      uVar21 = uVar21 + 1;
      if (local_74 == uVar21) {
        uVar21 = 0;
      }
      iVar17 = (uint)*(ushort *)(local_8c + (uVar21 + iVar16) * 2) * 0x40 + iVar17;
    }
    iVar18 = 0x10 - iVar18;
    if (bVar22 == (bool)(&DAT_007a2710)[iVar17]) {
      cVar3 = (&DAT_0079a710)[iVar17];
      if (cVar3 == '\x01') {
        pcVar12 = puVar2 + iVar8 + (&_Tile128x128)[iVar17];
        pcVar19 = pcVar15 + iVar18;
        for (; pcVar15 != pcVar19; pcVar15 = pcVar15 + 1) {
          if (*pcVar12 != '\0') {
            *pcVar15 = *pcVar12;
          }
          pcVar12 = pcVar12 + -1;
        }
      }
      else if (cVar3 == '\0') {
        iVar17 = (&_Tile128x128)[iVar17];
        for (iVar20 = 0; pcVar19 = pcVar15, iVar18 != iVar20; iVar20 = iVar20 + 1) {
          if (puVar2[iVar20 + iVar7 + iVar17] != '\0') {
            *pcVar15 = puVar2[iVar20 + iVar7 + iVar17];
          }
          pcVar15 = pcVar15 + 1;
        }
      }
      else if (cVar3 == '\x02') {
        iVar17 = (&_Tile128x128)[iVar17];
        for (iVar20 = 0; pcVar19 = pcVar15, iVar20 != iVar18; iVar20 = iVar20 + 1) {
          if (puVar2[iVar20 + iVar1 + iVar17] != '\0') {
            *pcVar15 = puVar2[iVar20 + iVar1 + iVar17];
          }
          pcVar15 = pcVar15 + 1;
        }
      }
      else {
        pcVar19 = pcVar15;
        if (cVar3 == '\x03') {
          pcVar12 = puVar2 + iVar9 + (&_Tile128x128)[iVar17];
          pcVar10 = pcVar15 + iVar18;
          for (; pcVar19 = pcVar15, pcVar10 != pcVar15; pcVar15 = pcVar15 + 1) {
            if (*pcVar12 != '\0') {
              *pcVar15 = *pcVar12;
            }
            pcVar12 = pcVar12 + -1;
          }
        }
      }
    }
    else {
      pcVar19 = pcVar15 + iVar18;
    }
    local_78 = local_78 + 1;
    if (0xf < (int)local_78) {
      local_7c = local_7c + 1;
      local_78 = 0;
    }
    if (7 < local_7c) {
      local_84 = local_84 + 1;
      if (local_70 == local_84) {
        local_20 = local_20 + local_70 * -0x80;
        local_84 = 0;
      }
      local_7c = 0;
    }
    local_4c = local_4c + 1;
  } while( true );
code_r0x0001924a:
  iVar11 = iVar9;
  if (cVar3 == '\x03') {
LAB_00019325:
    pcVar19 = puVar2 + iVar11 + (&_Tile128x128)[iVar20];
    if (*pcVar19 != '\0') {
      *pcVar15 = *pcVar19;
    }
    if (pcVar19[-1] != '\0') {
      pcVar15[1] = pcVar19[-1];
    }
    if (pcVar19[-2] != '\0') {
      pcVar15[2] = pcVar19[-2];
    }
    if (pcVar19[-3] != '\0') {
      pcVar15[3] = pcVar19[-3];
    }
    if (pcVar19[-4] != '\0') {
      pcVar15[4] = pcVar19[-4];
    }
    if (pcVar19[-5] != '\0') {
      pcVar15[5] = pcVar19[-5];
    }
    if (pcVar19[-6] != '\0') {
      pcVar15[6] = pcVar19[-6];
    }
    if (pcVar19[-7] != '\0') {
      pcVar15[7] = pcVar19[-7];
    }
    if (pcVar19[-8] != '\0') {
      pcVar15[8] = pcVar19[-8];
    }
    if (pcVar19[-9] != '\0') {
      pcVar15[9] = pcVar19[-9];
    }
    if (pcVar19[-10] != '\0') {
      pcVar15[10] = pcVar19[-10];
    }
    if (pcVar19[-0xb] != '\0') {
      pcVar15[0xb] = pcVar19[-0xb];
    }
    if (pcVar19[-0xc] != '\0') {
      pcVar15[0xc] = pcVar19[-0xc];
    }
    if (pcVar19[-0xd] != '\0') {
      pcVar15[0xd] = pcVar19[-0xd];
    }
    if (pcVar19[-0xe] != '\0') {
      pcVar15[0xe] = pcVar19[-0xe];
    }
    cVar3 = pcVar19[-0xf];
LAB_000193db:
    if (cVar3 != '\0') {
      pcVar15[0xf] = cVar3;
    }
LAB_000193e2:
    pcVar15 = pcVar15 + 0x10;
  }
  goto LAB_000193e5;
code_r0x000197e9:
  iVar11 = iVar9;
  if (cVar3 == '\x03') {
LAB_000198c4:
    pcVar19 = puVar2 + iVar11 + (&_Tile128x128)[iVar20];
    if (*pcVar19 != '\0') {
      *pcVar15 = *pcVar19;
    }
    if (pcVar19[-1] != '\0') {
      pcVar15[1] = pcVar19[-1];
    }
    if (pcVar19[-2] != '\0') {
      pcVar15[2] = pcVar19[-2];
    }
    if (pcVar19[-3] != '\0') {
      pcVar15[3] = pcVar19[-3];
    }
    if (pcVar19[-4] != '\0') {
      pcVar15[4] = pcVar19[-4];
    }
    if (pcVar19[-5] != '\0') {
      pcVar15[5] = pcVar19[-5];
    }
    if (pcVar19[-6] != '\0') {
      pcVar15[6] = pcVar19[-6];
    }
    if (pcVar19[-7] != '\0') {
      pcVar15[7] = pcVar19[-7];
    }
    if (pcVar19[-8] != '\0') {
      pcVar15[8] = pcVar19[-8];
    }
    if (pcVar19[-9] != '\0') {
      pcVar15[9] = pcVar19[-9];
    }
    if (pcVar19[-10] != '\0') {
      pcVar15[10] = pcVar19[-10];
    }
    if (pcVar19[-0xb] != '\0') {
      pcVar15[0xb] = pcVar19[-0xb];
    }
    if (pcVar19[-0xc] != '\0') {
      pcVar15[0xc] = pcVar19[-0xc];
    }
    if (pcVar19[-0xd] != '\0') {
      pcVar15[0xd] = pcVar19[-0xd];
    }
    if (pcVar19[-0xe] != '\0') {
      pcVar15[0xe] = pcVar19[-0xe];
    }
    cVar3 = pcVar19[-0xf];
LAB_0001997a:
    if (cVar3 != '\0') {
      pcVar15[0xf] = cVar3;
    }
LAB_00019981:
    pcVar15 = pcVar15 + 0x10;
  }
  goto LAB_00019984;
}
