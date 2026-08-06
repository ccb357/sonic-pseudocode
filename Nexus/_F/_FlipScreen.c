void _FlipScreen(void)

{
  char cVar1;
  ushort uVar2;
  bool bVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  undefined2 *puVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  byte *pbVar12;
  undefined4 *puVar13;
  int iVar14;
  int local_9c;
  byte *local_98;
  byte *local_94;
  byte *local_90;
  byte *local_8c;
  byte *local_88;
  byte *local_84;
  byte *local_80;
  byte *local_7c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  undefined2 local_24;
  undefined2 local_22;
  undefined2 local_20;
  undefined2 local_1e;
  
  if (_RenderDeviceStatus != '\x01') {
    return;
  }
  iVar7 = _SDL_LockSurface(_Backbuffer);
  puVar6 = PTR__TilePalette16_007fe140;
  puVar5 = PTR__TilePalette32_007fe120;
  if (iVar7 == 0) {
    if ((_WindowedX == 0x140) && (_GameWindowed == '\x01')) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if ((_FullscreenX == 0x280) || (_GameWindowed != '\0')) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar3 || bVar4) {
      cVar1 = *PTR__ColourMode_007fe124;
      if (cVar1 == '\x01') {
        puVar13 = *(undefined4 **)(_Backbuffer + 0x14);
        iVar7 = (*(ushort *)(_Backbuffer + 0x10) >> 2) - 0x140;
        if (*PTR__PaletteMode_007fe130 == '\0') {
          pbVar12 = PTR__FrameBuffer_007fe128;
          for (local_54 = 0; iVar14 = *(int *)PTR__WaterDrawPos_007fe12c, local_54 < iVar14;
              local_54 = local_54 + 1) {
            iVar14 = 0x20;
            while (puVar5 = PTR__TilePalette32_007fe120, iVar14 = iVar14 + -1, iVar14 != -1) {
              *puVar13 = *(undefined4 *)(PTR__TilePalette32_007fe120 + (uint)*pbVar12 * 4);
              puVar13[1] = *(undefined4 *)(puVar5 + (uint)pbVar12[1] * 4);
              puVar13[2] = *(undefined4 *)(puVar5 + (uint)pbVar12[2] * 4);
              puVar13[3] = *(undefined4 *)(puVar5 + (uint)pbVar12[3] * 4);
              puVar13[4] = *(undefined4 *)(puVar5 + (uint)pbVar12[4] * 4);
              puVar13[5] = *(undefined4 *)(puVar5 + (uint)pbVar12[5] * 4);
              puVar13[6] = *(undefined4 *)(puVar5 + (uint)pbVar12[6] * 4);
              puVar13[7] = *(undefined4 *)(puVar5 + (uint)pbVar12[7] * 4);
              puVar13[8] = *(undefined4 *)(puVar5 + (uint)pbVar12[8] * 4);
              puVar13[9] = *(undefined4 *)(puVar5 + (uint)pbVar12[9] * 4);
              puVar13 = puVar13 + 10;
              pbVar12 = pbVar12 + 10;
            }
            puVar13 = puVar13 + iVar7;
          }
          for (; iVar14 < 0xf0; iVar14 = iVar14 + 1) {
            iVar9 = 0x20;
            while (puVar5 = PTR__TilePaletteW32_007fe11c, iVar9 = iVar9 + -1, iVar9 != -1) {
              *puVar13 = *(undefined4 *)(PTR__TilePaletteW32_007fe11c + (uint)*pbVar12 * 4);
              puVar13[1] = *(undefined4 *)(puVar5 + (uint)pbVar12[1] * 4);
              puVar13[2] = *(undefined4 *)(puVar5 + (uint)pbVar12[2] * 4);
              puVar13[3] = *(undefined4 *)(puVar5 + (uint)pbVar12[3] * 4);
              puVar13[4] = *(undefined4 *)(puVar5 + (uint)pbVar12[4] * 4);
              puVar13[5] = *(undefined4 *)(puVar5 + (uint)pbVar12[5] * 4);
              puVar13[6] = *(undefined4 *)(puVar5 + (uint)pbVar12[6] * 4);
              puVar13[7] = *(undefined4 *)(puVar5 + (uint)pbVar12[7] * 4);
              puVar13[8] = *(undefined4 *)(puVar5 + (uint)pbVar12[8] * 4);
              puVar13[9] = *(undefined4 *)(puVar5 + (uint)pbVar12[9] * 4);
              puVar13 = puVar13 + 10;
              pbVar12 = pbVar12 + 10;
            }
            puVar13 = puVar13 + iVar7;
          }
        }
        else {
          pbVar12 = PTR__FrameBuffer_007fe128;
          for (local_50 = 0; iVar14 = *(int *)PTR__WaterDrawPos_007fe12c, local_50 < iVar14;
              local_50 = local_50 + 1) {
            iVar14 = 0x20;
            while (puVar5 = PTR__TilePalette32F_007fe148, iVar14 = iVar14 + -1, iVar14 != -1) {
              *puVar13 = *(undefined4 *)(PTR__TilePalette32F_007fe148 + (uint)*pbVar12 * 4);
              puVar13[1] = *(undefined4 *)(puVar5 + (uint)pbVar12[1] * 4);
              puVar13[2] = *(undefined4 *)(puVar5 + (uint)pbVar12[2] * 4);
              puVar13[3] = *(undefined4 *)(puVar5 + (uint)pbVar12[3] * 4);
              puVar13[4] = *(undefined4 *)(puVar5 + (uint)pbVar12[4] * 4);
              puVar13[5] = *(undefined4 *)(puVar5 + (uint)pbVar12[5] * 4);
              puVar13[6] = *(undefined4 *)(puVar5 + (uint)pbVar12[6] * 4);
              puVar13[7] = *(undefined4 *)(puVar5 + (uint)pbVar12[7] * 4);
              puVar13[8] = *(undefined4 *)(puVar5 + (uint)pbVar12[8] * 4);
              puVar13[9] = *(undefined4 *)(puVar5 + (uint)pbVar12[9] * 4);
              puVar13 = puVar13 + 10;
              pbVar12 = pbVar12 + 10;
            }
            puVar13 = puVar13 + iVar7;
          }
          for (; iVar14 < 0xf0; iVar14 = iVar14 + 1) {
            iVar9 = 0x20;
            while (puVar5 = PTR__TilePaletteW32F_007fe13c, iVar9 = iVar9 + -1, iVar9 != -1) {
              *puVar13 = *(undefined4 *)(PTR__TilePaletteW32F_007fe13c + (uint)*pbVar12 * 4);
              puVar13[1] = *(undefined4 *)(puVar5 + (uint)pbVar12[1] * 4);
              puVar13[2] = *(undefined4 *)(puVar5 + (uint)pbVar12[2] * 4);
              puVar13[3] = *(undefined4 *)(puVar5 + (uint)pbVar12[3] * 4);
              puVar13[4] = *(undefined4 *)(puVar5 + (uint)pbVar12[4] * 4);
              puVar13[5] = *(undefined4 *)(puVar5 + (uint)pbVar12[5] * 4);
              puVar13[6] = *(undefined4 *)(puVar5 + (uint)pbVar12[6] * 4);
              puVar13[7] = *(undefined4 *)(puVar5 + (uint)pbVar12[7] * 4);
              puVar13[8] = *(undefined4 *)(puVar5 + (uint)pbVar12[8] * 4);
              puVar13[9] = *(undefined4 *)(puVar5 + (uint)pbVar12[9] * 4);
              puVar13 = puVar13 + 10;
              pbVar12 = pbVar12 + 10;
            }
            puVar13 = puVar13 + iVar7;
          }
        }
      }
      else if (cVar1 == '\0') {
        puVar8 = *(undefined2 **)(_Backbuffer + 0x14);
        iVar7 = (*(ushort *)(_Backbuffer + 0x10) >> 1) - 0x140;
        if (*PTR__PaletteMode_007fe130 == '\0') {
          pbVar12 = PTR__FrameBuffer_007fe128;
          for (local_9c = 0; iVar14 = *(int *)PTR__WaterDrawPos_007fe12c, local_9c < iVar14;
              local_9c = local_9c + 1) {
            iVar14 = 0x20;
            while (puVar5 = PTR__TilePalette16_007fe140, iVar14 = iVar14 + -1, iVar14 != -1) {
              *puVar8 = *(undefined2 *)(PTR__TilePalette16_007fe140 + (uint)*pbVar12 * 2);
              puVar8[1] = *(undefined2 *)(puVar5 + (uint)pbVar12[1] * 2);
              puVar8[2] = *(undefined2 *)(puVar5 + (uint)pbVar12[2] * 2);
              puVar8[3] = *(undefined2 *)(puVar5 + (uint)pbVar12[3] * 2);
              puVar8[4] = *(undefined2 *)(puVar5 + (uint)pbVar12[4] * 2);
              puVar8[5] = *(undefined2 *)(puVar5 + (uint)pbVar12[5] * 2);
              puVar8[6] = *(undefined2 *)(puVar5 + (uint)pbVar12[6] * 2);
              puVar8[7] = *(undefined2 *)(puVar5 + (uint)pbVar12[7] * 2);
              puVar8[8] = *(undefined2 *)(puVar5 + (uint)pbVar12[8] * 2);
              puVar8[9] = *(undefined2 *)(puVar5 + (uint)pbVar12[9] * 2);
              puVar8 = puVar8 + 10;
              pbVar12 = pbVar12 + 10;
            }
            puVar8 = puVar8 + iVar7;
          }
          for (; iVar14 < 0xf0; iVar14 = iVar14 + 1) {
            iVar9 = 0x20;
            while (puVar5 = PTR__TilePaletteW16_007fe144, iVar9 = iVar9 + -1, iVar9 != -1) {
              *puVar8 = *(undefined2 *)(PTR__TilePaletteW16_007fe144 + (uint)*pbVar12 * 2);
              puVar8[1] = *(undefined2 *)(puVar5 + (uint)pbVar12[1] * 2);
              puVar8[2] = *(undefined2 *)(puVar5 + (uint)pbVar12[2] * 2);
              puVar8[3] = *(undefined2 *)(puVar5 + (uint)pbVar12[3] * 2);
              puVar8[4] = *(undefined2 *)(puVar5 + (uint)pbVar12[4] * 2);
              puVar8[5] = *(undefined2 *)(puVar5 + (uint)pbVar12[5] * 2);
              puVar8[6] = *(undefined2 *)(puVar5 + (uint)pbVar12[6] * 2);
              puVar8[7] = *(undefined2 *)(puVar5 + (uint)pbVar12[7] * 2);
              puVar8[8] = *(undefined2 *)(puVar5 + (uint)pbVar12[8] * 2);
              puVar8[9] = *(undefined2 *)(puVar5 + (uint)pbVar12[9] * 2);
              puVar8 = puVar8 + 10;
              pbVar12 = pbVar12 + 10;
            }
            puVar8 = puVar8 + iVar7;
          }
        }
        else {
          pbVar12 = PTR__FrameBuffer_007fe128;
          for (local_58 = 0; iVar14 = *(int *)PTR__WaterDrawPos_007fe12c, local_58 < iVar14;
              local_58 = local_58 + 1) {
            iVar14 = 0x20;
            while (puVar5 = PTR__TilePalette16F_007fe134, iVar14 = iVar14 + -1, iVar14 != -1) {
              *puVar8 = *(undefined2 *)(PTR__TilePalette16F_007fe134 + (uint)*pbVar12 * 2);
              puVar8[1] = *(undefined2 *)(puVar5 + (uint)pbVar12[1] * 2);
              puVar8[2] = *(undefined2 *)(puVar5 + (uint)pbVar12[2] * 2);
              puVar8[3] = *(undefined2 *)(puVar5 + (uint)pbVar12[3] * 2);
              puVar8[4] = *(undefined2 *)(puVar5 + (uint)pbVar12[4] * 2);
              puVar8[5] = *(undefined2 *)(puVar5 + (uint)pbVar12[5] * 2);
              puVar8[6] = *(undefined2 *)(puVar5 + (uint)pbVar12[6] * 2);
              puVar8[7] = *(undefined2 *)(puVar5 + (uint)pbVar12[7] * 2);
              puVar8[8] = *(undefined2 *)(puVar5 + (uint)pbVar12[8] * 2);
              puVar8[9] = *(undefined2 *)(puVar5 + (uint)pbVar12[9] * 2);
              puVar8 = puVar8 + 10;
              pbVar12 = pbVar12 + 10;
            }
            puVar8 = puVar8 + iVar7;
          }
          for (; iVar14 < 0xf0; iVar14 = iVar14 + 1) {
            iVar9 = 0x20;
            while (puVar5 = PTR__TilePaletteW16F_007fe138, iVar9 = iVar9 + -1, iVar9 != -1) {
              *puVar8 = *(undefined2 *)(PTR__TilePaletteW16F_007fe138 + (uint)*pbVar12 * 2);
              puVar8[1] = *(undefined2 *)(puVar5 + (uint)pbVar12[1] * 2);
              puVar8[2] = *(undefined2 *)(puVar5 + (uint)pbVar12[2] * 2);
              puVar8[3] = *(undefined2 *)(puVar5 + (uint)pbVar12[3] * 2);
              puVar8[4] = *(undefined2 *)(puVar5 + (uint)pbVar12[4] * 2);
              puVar8[5] = *(undefined2 *)(puVar5 + (uint)pbVar12[5] * 2);
              puVar8[6] = *(undefined2 *)(puVar5 + (uint)pbVar12[6] * 2);
              puVar8[7] = *(undefined2 *)(puVar5 + (uint)pbVar12[7] * 2);
              puVar8[8] = *(undefined2 *)(puVar5 + (uint)pbVar12[8] * 2);
              puVar8[9] = *(undefined2 *)(puVar5 + (uint)pbVar12[9] * 2);
              puVar8 = puVar8 + 10;
              pbVar12 = pbVar12 + 10;
            }
            puVar8 = puVar8 + iVar7;
          }
        }
      }
      else {
        if (cVar1 != '\x02') goto LAB_00017603;
        iVar7 = *(int *)(_Backbuffer + 0x14);
        uVar2 = *(ushort *)(_Backbuffer + 0x10);
        iVar14 = 0xf0;
        puVar13 = (undefined4 *)PTR__FrameBuffer_007fe128;
        do {
          iVar9 = 0;
          puVar10 = puVar13;
          do {
            *(undefined4 *)(iVar7 + iVar9) = *puVar10;
            puVar10 = puVar10 + 1;
            iVar9 = iVar9 + 4;
          } while (iVar9 != 0x140);
          iVar7 = iVar7 + 0x140 + (uVar2 - 0x140 & 0xfffffffc);
          puVar13 = puVar13 + 0x50;
          iVar14 = iVar14 + -1;
        } while (iVar14 != 0);
      }
    }
    else {
      cVar1 = *PTR__ColourMode_007fe124;
      if (cVar1 == '\x01') {
        puVar13 = *(undefined4 **)(_Backbuffer + 0x14);
        iVar7 = (*(ushort *)(_Backbuffer + 0x10) >> 2) - 0x280;
        if (*PTR__PaletteMode_007fe130 == '\0') {
          local_84 = PTR__FrameBuffer_007fe128;
          for (local_3c = 0; puVar6 = PTR__TilePaletteW32_007fe11c,
              local_38 = *(int *)PTR__WaterDrawPos_007fe12c, local_3c < local_38;
              local_3c = local_3c + 1) {
            iVar14 = 0x140;
            pbVar12 = local_84;
            do {
              *puVar13 = *(undefined4 *)(puVar5 + (uint)*pbVar12 * 4);
              puVar13[1] = *(undefined4 *)(puVar5 + (uint)*pbVar12 * 4);
              puVar13 = puVar13 + 2;
              pbVar12 = pbVar12 + 1;
              iVar14 = iVar14 + -1;
            } while (iVar14 != 0);
            iVar14 = 0x140;
            pbVar12 = local_84;
            do {
              *puVar13 = *(undefined4 *)(puVar5 + (uint)*pbVar12 * 4);
              puVar13[1] = *(undefined4 *)(puVar5 + (uint)*pbVar12 * 4);
              puVar13 = puVar13 + 2;
              pbVar12 = pbVar12 + 1;
              iVar14 = iVar14 + -1;
            } while (iVar14 != 0);
            puVar13 = puVar13 + iVar7;
            local_84 = local_84 + 0x140;
          }
          local_88 = local_84;
          for (; local_38 < 0xf0; local_38 = local_38 + 1) {
            iVar14 = 0x140;
            pbVar12 = local_88;
            do {
              *puVar13 = *(undefined4 *)(puVar6 + (uint)*pbVar12 * 4);
              puVar13[1] = *(undefined4 *)(puVar6 + (uint)*pbVar12 * 4);
              puVar13 = puVar13 + 2;
              pbVar12 = pbVar12 + 1;
              iVar14 = iVar14 + -1;
            } while (iVar14 != 0);
            iVar14 = 0x140;
            pbVar12 = local_88;
            do {
              *puVar13 = *(undefined4 *)(puVar6 + (uint)*pbVar12 * 4);
              puVar13[1] = *(undefined4 *)(puVar6 + (uint)*pbVar12 * 4);
              puVar13 = puVar13 + 2;
              pbVar12 = pbVar12 + 1;
              iVar14 = iVar14 + -1;
            } while (iVar14 != 0);
            puVar13 = puVar13 + iVar7;
            local_88 = local_88 + 0x140;
          }
        }
        else {
          local_7c = PTR__FrameBuffer_007fe128;
          for (local_34 = 0; puVar6 = PTR__TilePalette32F_007fe148,
              puVar5 = PTR__TilePaletteW32F_007fe13c, local_30 = *(int *)PTR__WaterDrawPos_007fe1 2c,
              local_34 < local_30; local_34 = local_34 + 1) {
            iVar14 = 0x140;
            pbVar12 = local_7c;
            do {
              *puVar13 = *(undefined4 *)(puVar6 + (uint)*pbVar12 * 4);
              puVar13[1] = *(undefined4 *)(puVar6 + (uint)*pbVar12 * 4);
              puVar13 = puVar13 + 2;
              pbVar12 = pbVar12 + 1;
              iVar14 = iVar14 + -1;
            } while (iVar14 != 0);
            iVar14 = 0x140;
            pbVar12 = local_7c;
            do {
              *puVar13 = *(undefined4 *)(puVar6 + (uint)*pbVar12 * 4);
              puVar13[1] = *(undefined4 *)(puVar6 + (uint)*pbVar12 * 4);
              puVar13 = puVar13 + 2;
              pbVar12 = pbVar12 + 1;
              iVar14 = iVar14 + -1;
            } while (iVar14 != 0);
            puVar13 = puVar13 + iVar7;
            local_7c = local_7c + 0x140;
          }
          local_80 = local_7c;
          for (; local_30 < 0xf0; local_30 = local_30 + 1) {
            iVar14 = 0x140;
            pbVar12 = local_80;
            do {
              *puVar13 = *(undefined4 *)(puVar5 + (uint)*pbVar12 * 4);
              puVar13[1] = *(undefined4 *)(puVar5 + (uint)*pbVar12 * 4);
              puVar13 = puVar13 + 2;
              pbVar12 = pbVar12 + 1;
              iVar14 = iVar14 + -1;
            } while (iVar14 != 0);
            iVar14 = 0x140;
            pbVar12 = local_80;
            do {
              *puVar13 = *(undefined4 *)(puVar5 + (uint)*pbVar12 * 4);
              puVar13[1] = *(undefined4 *)(puVar5 + (uint)*pbVar12 * 4);
              puVar13 = puVar13 + 2;
              pbVar12 = pbVar12 + 1;
              iVar14 = iVar14 + -1;
            } while (iVar14 != 0);
            puVar13 = puVar13 + iVar7;
            local_80 = local_80 + 0x140;
          }
        }
      }
      else if (cVar1 == '\0') {
        puVar8 = *(undefined2 **)(_Backbuffer + 0x14);
        iVar7 = (*(ushort *)(_Backbuffer + 0x10) >> 1) - 0x280;
        if (*PTR__PaletteMode_007fe130 == '\0') {
          local_94 = PTR__FrameBuffer_007fe128;
          for (local_4c = 0; puVar5 = PTR__TilePaletteW16_007fe144,
              local_48 = *(int *)PTR__WaterDrawPos_007fe12c, local_4c < local_48;
              local_4c = local_4c + 1) {
            iVar14 = 0x140;
            pbVar12 = local_94;
            do {
              *puVar8 = *(undefined2 *)(puVar6 + (uint)*pbVar12 * 2);
              puVar8[1] = *(undefined2 *)(puVar6 + (uint)*pbVar12 * 2);
              puVar8 = puVar8 + 2;
              pbVar12 = pbVar12 + 1;
              iVar14 = iVar14 + -1;
            } while (iVar14 != 0);
            iVar14 = 0x140;
            pbVar12 = local_94;
            do {
              *puVar8 = *(undefined2 *)(puVar6 + (uint)*pbVar12 * 2);
              puVar8[1] = *(undefined2 *)(puVar6 + (uint)*pbVar12 * 2);
              puVar8 = puVar8 + 2;
              pbVar12 = pbVar12 + 1;
              iVar14 = iVar14 + -1;
            } while (iVar14 != 0);
            puVar8 = puVar8 + iVar7;
            local_94 = local_94 + 0x140;
          }
          local_98 = local_94;
          for (; local_48 < 0xf0; local_48 = local_48 + 1) {
            iVar14 = 0x140;
            pbVar12 = local_98;
            do {
              *puVar8 = *(undefined2 *)(puVar5 + (uint)*pbVar12 * 2);
              puVar8[1] = *(undefined2 *)(puVar5 + (uint)*pbVar12 * 2);
              puVar8 = puVar8 + 2;
              pbVar12 = pbVar12 + 1;
              iVar14 = iVar14 + -1;
            } while (iVar14 != 0);
            iVar14 = 0x140;
            pbVar12 = local_98;
            do {
              *puVar8 = *(undefined2 *)(puVar5 + (uint)*pbVar12 * 2);
              puVar8[1] = *(undefined2 *)(puVar5 + (uint)*pbVar12 * 2);
              puVar8 = puVar8 + 2;
              pbVar12 = pbVar12 + 1;
              iVar14 = iVar14 + -1;
            } while (iVar14 != 0);
            puVar8 = puVar8 + iVar7;
            local_98 = local_98 + 0x140;
          }
        }
        else {
          local_8c = PTR__FrameBuffer_007fe128;
          for (local_44 = 0; puVar6 = PTR__TilePaletteW16F_007fe138,
              puVar5 = PTR__TilePalette16F_007fe134, local_40 = *(int *)PTR__WaterDrawPos_007fe12 c,
              local_44 < local_40; local_44 = local_44 + 1) {
            iVar14 = 0x140;
            pbVar12 = local_8c;
            do {
              *puVar8 = *(undefined2 *)(puVar5 + (uint)*pbVar12 * 2);
              puVar8[1] = *(undefined2 *)(puVar5 + (uint)*pbVar12 * 2);
              puVar8 = puVar8 + 2;
              pbVar12 = pbVar12 + 1;
              iVar14 = iVar14 + -1;
            } while (iVar14 != 0);
            iVar14 = 0x140;
            pbVar12 = local_8c;
            do {
              *puVar8 = *(undefined2 *)(puVar5 + (uint)*pbVar12 * 2);
              puVar8[1] = *(undefined2 *)(puVar5 + (uint)*pbVar12 * 2);
              puVar8 = puVar8 + 2;
              pbVar12 = pbVar12 + 1;
              iVar14 = iVar14 + -1;
            } while (iVar14 != 0);
            puVar8 = puVar8 + iVar7;
            local_8c = local_8c + 0x140;
          }
          local_90 = local_8c;
          for (; local_40 < 0xf0; local_40 = local_40 + 1) {
            iVar14 = 0x140;
            pbVar12 = local_90;
            do {
              *puVar8 = *(undefined2 *)(puVar6 + (uint)*pbVar12 * 2);
              puVar8[1] = *(undefined2 *)(puVar6 + (uint)*pbVar12 * 2);
              puVar8 = puVar8 + 2;
              pbVar12 = pbVar12 + 1;
              iVar14 = iVar14 + -1;
            } while (iVar14 != 0);
            iVar14 = 0x140;
            pbVar12 = local_90;
            do {
              *puVar8 = *(undefined2 *)(puVar6 + (uint)*pbVar12 * 2);
              puVar8[1] = *(undefined2 *)(puVar6 + (uint)*pbVar12 * 2);
              puVar8 = puVar8 + 2;
              pbVar12 = pbVar12 + 1;
              iVar14 = iVar14 + -1;
            } while (iVar14 != 0);
            puVar8 = puVar8 + iVar7;
            local_90 = local_90 + 0x140;
          }
        }
      }
      else {
        if (cVar1 != '\x02') goto LAB_00017603;
        puVar13 = *(undefined4 **)(_Backbuffer + 0x14);
        uVar2 = *(ushort *)(_Backbuffer + 0x10);
        iVar7 = 0xf0;
        puVar10 = (undefined4 *)PTR__FrameBuffer_007fe128;
        do {
          iVar14 = 0x50;
          puVar11 = puVar10;
          do {
            *puVar13 = *puVar11;
            puVar13 = puVar13 + 1;
            puVar11 = puVar11 + 1;
            iVar14 = iVar14 + -1;
          } while (iVar14 != 0);
          puVar13 = (undefined4 *)((int)puVar13 + (uVar2 - 0x140 & 0xfffffffc));
          puVar10 = puVar10 + 0x50;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
    }
    _SDL_UnlockSurface(_Backbuffer);
  }
LAB_00017603:
  local_24 = 0;
  local_22 = 0;
  if (_GameWindowed == '\x01') {
    local_20 = (undefined2)_WindowedX;
    local_1e = (undefined2)_WindowedY;
  }
  else {
    local_20 = (undefined2)_FullscreenX;
    local_1e = (undefined2)_FullscreenY;
  }
  _SDL_UpperBlit(_Backbuffer,&local_24,_Primary,&local_24);
  _SDL_Flip(_Primary);
  return;
}
