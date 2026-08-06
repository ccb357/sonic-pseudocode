void _DrawVLineScrollLayer(byte param_1)

{
  uint uVar1;
  char cVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  int *piVar8;
  char *pcVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  bool bVar15;
  undefined *local_54;
  undefined *local_50;
  uint local_4c;
  int local_48;
  uint local_40;
  uint local_3c;
  uint local_38;
  int local_28;
  int *local_20;
  int local_18;
  byte *local_14;
  
  uVar4 = (uint)param_1;
  iVar5 = (uint)(byte)(&_ActiveTileLayers)[uVar4] * 0x28020;
  local_54 = &_StageLayouts + iVar5;
  local_3c = (uint)(byte)(&DAT_0062a5ed)[iVar5];
  local_38 = (uint)(byte)(&DAT_0062a5ee)[iVar5];
  bVar15 = _TLayerMidPoint <= param_1;
  if ((&_ActiveTileLayers)[uVar4] == 0) {
    DAT_007fd190 = _YScrollOffset;
    DAT_007fd590 = 1;
    local_20 = &_BGDeformationData1 + (_XScrollOffset + _DeformationPos1 & 0xff);
    local_54 = &_StageLayouts;
    local_50 = &DAT_006225d0;
    iVar5 = _XScrollOffset;
    _LastYSize = local_38;
  }
  else {
    iVar13 = *(int *)(&DAT_0062a5d0 + iVar5) * _XScrollOffset;
    *(int *)(&DAT_0062a5d8 + iVar5) =
         *(int *)(&DAT_0062a5d8 + iVar5) + *(int *)(&DAT_0062a5d4 + iVar5);
    if ((int)(local_3c * 0x800000) <
        *(int *)(&DAT_0062a5d8 + (uint)(byte)(&_ActiveTileLayers)[uVar4] * 0x28020)) {
      *(uint *)(&DAT_0062a5d8 + (uint)(byte)(&_ActiveTileLayers)[uVar4] * 0x28020) =
           *(int *)(&DAT_0062a5d8 + (uint)(byte)(&_ActiveTileLayers)[uVar4] * 0x28020) +
           local_3c * -0x800000;
    }
    iVar5 = ((iVar13 >> 6) +
            (int)*(short *)(&DAT_0062a5da + (uint)(byte)(&_ActiveTileLayers)[uVar4] * 0x28020)) %
            (int)(local_3c << 7);
    local_3c = (int)(local_3c << 7) >> 7;
    local_50 = &DAT_006225d0 + (uint)(byte)(&_ActiveTileLayers)[uVar4] * 0x28020;
    local_20 = &_BGDeformationData3 + (iVar5 + _DeformationPos3 & 0xff);
  }
  iVar13 = _YScrollOffset;
  if ((&DAT_0062a5ec)[(uint)(byte)(&_ActiveTileLayers)[uVar4] * 0x28020] == '\x02') {
    if (local_38 != _LastYSize) {
      piVar8 = &_VParallax;
      uVar4 = (uint)DAT_007fd690;
      for (iVar10 = 0; iVar10 < (int)uVar4; iVar10 = iVar10 + 1) {
        piVar8[0x300] = iVar13 * *piVar8 >> 7;
        iVar6 = piVar8[0x200] + piVar8[0x100];
        piVar8[0x200] = iVar6;
        if ((int)(local_38 * 0x800000) < iVar6) {
          iVar6 = iVar6 + local_38 * -0x800000;
          piVar8[0x200] = iVar6;
        }
        piVar8[0x300] = ((iVar6 >> 0x10) + piVar8[0x300]) % (int)(local_38 << 7);
        piVar8 = piVar8 + 1;
      }
      local_38 = (int)(local_38 << 7) >> 7;
    }
    _LastYSize = local_38;
  }
  puVar3 = PTR__TileGfx_007fe14c;
  uVar4 = iVar5 % (int)(local_3c * 0x80);
  if (0x7fffffff < uVar4) {
    uVar4 = uVar4 + local_3c * 0x80;
  }
  local_14 = local_50 + uVar4;
  local_40 = uVar4 & 0xf;
  local_4c = (int)uVar4 >> 7;
  local_48 = (int)(uVar4 & 0x7f) >> 4;
  local_28 = 0x140;
  pcVar9 = PTR__FrameBuffer_007fe128;
  do {
    local_28 = local_28 + -1;
    if (local_28 == -1) {
      return;
    }
    uVar4 = (&DAT_007fd190)[*local_14];
    if ((&DAT_007fd590)[*local_14] == '\x01') {
      uVar4 = uVar4 + *local_20;
    }
    local_20 = local_20 + 1;
    local_14 = local_14 + 1;
    if (0x7fffffff < uVar4) {
      uVar4 = uVar4 + local_38 * 0x80;
    }
    if ((int)(local_38 * 0x80) <= (int)uVar4) {
      uVar4 = uVar4 + local_38 * -0x80;
    }
    uVar14 = (int)uVar4 >> 7;
    iVar11 = (int)(uVar4 & 0x7f) >> 4;
    uVar4 = uVar4 & 0xf;
    iVar13 = 0x10 - uVar4;
    iVar5 = (uint)*(ushort *)(local_54 + (uVar14 * 0x100 + local_4c) * 2) * 0x40 +
            local_48 + iVar11 * 8;
    uVar1 = 0xf - local_40;
    iVar6 = local_40 + 0xf0;
    iVar10 = 0xff - local_40;
    if (bVar15 == (bool)(&DAT_007a2710)[iVar5]) {
      cVar2 = (&DAT_0079a710)[iVar5];
      if (cVar2 == '\x01') {
        pcVar7 = puVar3 + uVar1 + (&_Tile128x128)[iVar5] + uVar4 * 0x10;
        for (iVar12 = 0; iVar12 != iVar13; iVar12 = iVar12 + 1) {
          if (*pcVar7 != '\0') {
            *pcVar9 = *pcVar7;
          }
          pcVar9 = pcVar9 + 0x140;
          pcVar7 = pcVar7 + 0x10;
        }
      }
      else if (cVar2 == '\0') {
        pcVar7 = puVar3 + local_40 + (&_Tile128x128)[iVar5] + uVar4 * 0x10;
        for (iVar12 = 0; iVar13 != iVar12; iVar12 = iVar12 + 1) {
          if (*pcVar7 != '\0') {
            *pcVar9 = *pcVar7;
          }
          pcVar9 = pcVar9 + 0x140;
          pcVar7 = pcVar7 + 0x10;
        }
      }
      else if (cVar2 == '\x02') {
        pcVar7 = puVar3 + iVar6 + (&_Tile128x128)[iVar5] + uVar4 * -0x10;
        for (iVar12 = 0; iVar12 != iVar13; iVar12 = iVar12 + 1) {
          if (*pcVar7 != '\0') {
            *pcVar9 = *pcVar7;
          }
          pcVar9 = pcVar9 + 0x140;
          pcVar7 = pcVar7 + -0x10;
        }
      }
      else if (cVar2 == '\x03') {
        pcVar7 = puVar3 + iVar10 + (&_Tile128x128)[iVar5] + uVar4 * -0x10;
        for (iVar12 = 0; iVar12 != iVar13; iVar12 = iVar12 + 1) {
          if (*pcVar7 != '\0') {
            *pcVar9 = *pcVar7;
          }
          pcVar9 = pcVar9 + 0x140;
          pcVar7 = pcVar7 + -0x10;
        }
      }
    }
    else {
      pcVar9 = pcVar9 + iVar13 * 0x140;
    }
    iVar11 = iVar11 + 1;
    local_18 = 0xe;
LAB_0001a20b:
    local_18 = local_18 + -1;
    if (local_18 != -1) {
      if (iVar11 < 8) {
        iVar5 = iVar5 + 8;
        iVar11 = iVar11 + 1;
      }
      else {
        uVar14 = uVar14 + 1;
        if (local_38 == uVar14) {
          uVar14 = 0;
          iVar5 = 0;
        }
        else {
          iVar5 = uVar14 * 0x100;
        }
        iVar5 = local_48 + (uint)*(ushort *)(local_54 + (iVar5 + local_4c) * 2) * 0x40;
        iVar11 = 1;
      }
      if (bVar15 == (bool)(&DAT_007a2710)[iVar5]) {
        cVar2 = (&DAT_0079a710)[iVar5];
        uVar4 = uVar1;
        if ((cVar2 != '\x01') && (uVar4 = local_40, cVar2 != '\0')) break;
        pcVar7 = puVar3 + uVar4 + (&_Tile128x128)[iVar5];
        if (*pcVar7 != '\0') {
          *pcVar9 = *pcVar7;
        }
        if (pcVar7[0x10] != '\0') {
          pcVar9[0x140] = pcVar7[0x10];
        }
        if (pcVar7[0x20] != '\0') {
          pcVar9[0x280] = pcVar7[0x20];
        }
        if (pcVar7[0x30] != '\0') {
          pcVar9[0x3c0] = pcVar7[0x30];
        }
        if (pcVar7[0x40] != '\0') {
          pcVar9[0x500] = pcVar7[0x40];
        }
        if (pcVar7[0x50] != '\0') {
          pcVar9[0x640] = pcVar7[0x50];
        }
        if (pcVar7[0x60] != '\0') {
          pcVar9[0x780] = pcVar7[0x60];
        }
        if (pcVar7[0x70] != '\0') {
          pcVar9[0x8c0] = pcVar7[0x70];
        }
        if (pcVar7[0x80] != '\0') {
          pcVar9[0xa00] = pcVar7[0x80];
        }
        if (pcVar7[0x90] != '\0') {
          pcVar9[0xb40] = pcVar7[0x90];
        }
        if (pcVar7[0xa0] != '\0') {
          pcVar9[0xc80] = pcVar7[0xa0];
        }
        if (pcVar7[0xb0] != '\0') {
          pcVar9[0xdc0] = pcVar7[0xb0];
        }
        if (pcVar7[0xc0] != '\0') {
          pcVar9[0xf00] = pcVar7[0xc0];
        }
        if (pcVar7[0xd0] != '\0') {
          pcVar9[0x1040] = pcVar7[0xd0];
        }
        if (pcVar7[0xe0] != '\0') {
          pcVar9[0x1180] = pcVar7[0xe0];
        }
        cVar2 = pcVar7[0xf0];
        goto LAB_0001a1fb;
      }
      goto LAB_0001a205;
    }
    if (iVar11 < 8) {
      iVar5 = iVar5 + 8;
    }
    else {
      if (local_38 == uVar14 + 1) {
        iVar5 = 0;
      }
      else {
        iVar5 = (uVar14 + 1) * 0x100;
      }
      iVar5 = local_48 + (uint)*(ushort *)(local_54 + (iVar5 + local_4c) * 2) * 0x40;
    }
    iVar13 = 0x10 - iVar13;
    if (bVar15 == (bool)(&DAT_007a2710)[iVar5]) {
      cVar2 = (&DAT_0079a710)[iVar5];
      if (cVar2 == '\x01') {
        pcVar7 = puVar3 + uVar1 + (&_Tile128x128)[iVar5];
        for (iVar5 = 0; iVar13 != iVar5; iVar5 = iVar5 + 1) {
          if (*pcVar7 != '\0') {
            *pcVar9 = *pcVar7;
          }
          pcVar9 = pcVar9 + 0x140;
          pcVar7 = pcVar7 + 0x10;
        }
      }
      else if (cVar2 == '\0') {
        pcVar7 = puVar3 + local_40 + (&_Tile128x128)[iVar5];
        for (iVar5 = 0; iVar13 != iVar5; iVar5 = iVar5 + 1) {
          if (*pcVar7 != '\0') {
            *pcVar9 = *pcVar7;
          }
          pcVar9 = pcVar9 + 0x140;
          pcVar7 = pcVar7 + 0x10;
        }
      }
      else if (cVar2 == '\x02') {
        pcVar7 = puVar3 + iVar6 + (&_Tile128x128)[iVar5];
        for (iVar5 = 0; iVar13 != iVar5; iVar5 = iVar5 + 1) {
          if (*pcVar7 != '\0') {
            *pcVar9 = *pcVar7;
          }
          pcVar9 = pcVar9 + 0x140;
          pcVar7 = pcVar7 + -0x10;
        }
      }
      else if (cVar2 == '\x03') {
        pcVar7 = puVar3 + iVar10 + (&_Tile128x128)[iVar5];
        for (iVar5 = 0; iVar13 != iVar5; iVar5 = iVar5 + 1) {
          if (*pcVar7 != '\0') {
            *pcVar9 = *pcVar7;
          }
          pcVar9 = pcVar9 + 0x140;
          pcVar7 = pcVar7 + -0x10;
        }
      }
    }
    else {
      pcVar9 = pcVar9 + iVar13 * 0x140;
    }
    local_40 = local_40 + 1;
    if (0xf < (int)local_40) {
      local_48 = local_48 + 1;
      local_40 = 0;
    }
    if (7 < local_48) {
      local_4c = local_4c + 1;
      if (local_3c == local_4c) {
        local_14 = local_14 + local_3c * -0x80;
        local_4c = 0;
      }
      local_48 = 0;
    }
    pcVar9 = pcVar9 + -0x12bff;
  } while( true );
  iVar12 = iVar6;
  if ((cVar2 == '\x02') || (iVar12 = iVar10, cVar2 == '\x03')) {
    pcVar7 = puVar3 + iVar12 + (&_Tile128x128)[iVar5];
    if (*pcVar7 != '\0') {
      *pcVar9 = *pcVar7;
    }
    if (pcVar7[-0x10] != '\0') {
      pcVar9[0x140] = pcVar7[-0x10];
    }
    if (pcVar7[-0x20] != '\0') {
      pcVar9[0x280] = pcVar7[-0x20];
    }
    if (pcVar7[-0x30] != '\0') {
      pcVar9[0x3c0] = pcVar7[-0x30];
    }
    if (pcVar7[-0x40] != '\0') {
      pcVar9[0x500] = pcVar7[-0x40];
    }
    if (pcVar7[-0x50] != '\0') {
      pcVar9[0x640] = pcVar7[-0x50];
    }
    if (pcVar7[-0x60] != '\0') {
      pcVar9[0x780] = pcVar7[-0x60];
    }
    if (pcVar7[-0x70] != '\0') {
      pcVar9[0x8c0] = pcVar7[-0x70];
    }
    if (pcVar7[-0x80] != '\0') {
      pcVar9[0xa00] = pcVar7[-0x80];
    }
    if (pcVar7[-0x90] != '\0') {
      pcVar9[0xb40] = pcVar7[-0x90];
    }
    if (pcVar7[-0xa0] != '\0') {
      pcVar9[0xc80] = pcVar7[-0xa0];
    }
    if (pcVar7[-0xb0] != '\0') {
      pcVar9[0xdc0] = pcVar7[-0xb0];
    }
    if (pcVar7[-0xc0] != '\0') {
      pcVar9[0xf00] = pcVar7[-0xc0];
    }
    if (pcVar7[-0xd0] != '\0') {
      pcVar9[0x1040] = pcVar7[-0xd0];
    }
    if (pcVar7[-0xe0] != '\0') {
      pcVar9[0x1180] = pcVar7[-0xe0];
    }
    cVar2 = pcVar7[-0xf0];
LAB_0001a1fb:
    if (cVar2 != '\0') {
      pcVar9[0x12c0] = cVar2;
    }
LAB_0001a205:
    pcVar9 = pcVar9 + 0x1400;
  }
  goto LAB_0001a20b;
}
