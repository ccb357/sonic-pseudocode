
void _LoadStageCollisions(void)

{
  char cVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  byte bVar6;
  char *pcVar7;
  byte *pbVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  undefined *local_f4;
  undefined *local_e4;
  undefined *local_e0;
  int local_dc;
  int local_d8;
  int local_d4;
  undefined *local_d0;
  undefined *local_cc;
  int local_c8;
  int local_c4;
  undefined *local_c0;
  int local_bc;
  int local_a0;
  int local_9c;
  byte *local_94;
  uint *local_90;
  int local_8c;
  int local_88;
  int local_84;
  undefined1 local_70 [83];
  byte local_1d [13];
  
  cVar1 = _LoadStageFile("CollisionMasks.bin",_StageListPosition,local_70);
  if (cVar1 == '\x01') {
    local_a0 = 0;
    local_8c = 0xf;
    local_88 = 8;
    local_84 = 1;
    do {
      iVar2 = local_a0 * 0x10;
      local_94 = &DAT_007cb710 + local_a0;
      local_90 = (uint *)(&DAT_007ca710 + local_a0 * 4);
      local_9c = 0;
      local_dc = iVar2 + 0xc000;
      local_c0 = &DAT_007c6710 + local_8c;
      local_c4 = 0;
      local_cc = &_TileCollisions;
      local_d0 = &_TileCollisions;
      local_d8 = local_88;
      local_e0 = &_TileCollisions;
      local_e4 = &_TileCollisions;
      local_d4 = iVar2;
      local_c8 = local_dc;
      local_bc = local_dc;
      do {
        _FileRead(local_1d,1);
        bVar6 = local_1d[0];
        *local_94 = local_1d[0] & 0xf;
        _FileRead(local_1d,1);
        *local_90 = (uint)local_1d[0];
        _FileRead(local_1d,1);
        *local_90 = *local_90 + (uint)local_1d[0] * 0x100;
        _FileRead(local_1d,1);
        *local_90 = *local_90 + (uint)local_1d[0] * 0x10000;
        _FileRead(local_1d,1);
        *local_90 = *local_90 + (uint)local_1d[0] * 0x1000000;
        if (bVar6 >> 4 == 0) {
          pbVar8 = &_TileCollisions + local_d4;
          iVar10 = 8;
          local_f4 = &_TileCollisions + local_d4;
          do {
            _FileRead(local_1d,1);
            *pbVar8 = local_1d[0] >> 4;
            pbVar8[(local_c4 + local_84) - local_d4] = local_1d[0] & 0xf;
            pbVar8 = pbVar8 + 2;
            iVar10 = iVar10 + -1;
          } while (iVar10 != 0);
          _FileRead(local_1d,1);
          iVar10 = 0;
          bVar6 = 1;
          iVar11 = local_d8 - local_d4;
          puVar3 = &DAT_007c6710 + local_d4;
          do {
            if ((local_1d[0] & bVar6) == 0) {
              local_f4[iVar11] = 0x40;
              puVar3[iVar11] = 0xc0;
            }
            else {
              puVar3[iVar11] = 0xf;
            }
            bVar6 = bVar6 * '\x02';
            iVar10 = iVar10 + 1;
            local_f4 = local_f4 + 1;
            puVar3 = puVar3 + 1;
          } while (iVar10 != 8);
          _FileRead(local_1d,1);
          local_f4 = &_TileCollisions + local_d4;
          puVar3 = &DAT_007c6710 + local_d4;
          bVar6 = 1;
          iVar10 = 8;
          do {
            if ((local_1d[0] & bVar6) == 0) {
              *local_f4 = 0x40;
              *puVar3 = 0xc0;
            }
            else {
              *puVar3 = 0xf;
            }
            bVar6 = bVar6 * '\x02';
            local_f4 = local_f4 + 1;
            puVar3 = puVar3 + 1;
            iVar10 = iVar10 + -1;
          } while (iVar10 != 0);
          for (bVar6 = 0; bVar6 < 0x10; bVar6 = bVar6 + 1) {
            uVar9 = (uint)bVar6;
            pcVar7 = &_TileCollisions + local_d4;
            iVar10 = 0;
            do {
              if ((int)*pcVar7 <= (int)uVar9) {
                local_e0[iVar2 + uVar9 + 0x4000] = (char)iVar10;
                goto LAB_00017ab4;
              }
              iVar10 = iVar10 + 1;
              if (iVar10 < 0) goto LAB_00017ab4;
              pcVar7 = pcVar7 + 1;
            } while (iVar10 != 0x10);
            local_e4[iVar2 + uVar9 + 0x4000] = 0x40;
LAB_00017ab4:
          }
          for (local_1d[0] = 0; local_1d[0] < 0x10; local_1d[0] = local_1d[0] + 1) {
            uVar9 = (uint)local_1d[0];
            puVar3 = &_TileCollisions + local_d4;
            iVar10 = 0xf;
            do {
              if ((int)(char)puVar3[(local_c4 + local_8c) - local_d4] <= (int)uVar9) {
                *(char *)(local_c4 + uVar9 + 0x7c2710 + iVar2) = (char)iVar10;
                goto LAB_00017b2f;
              }
              iVar10 = iVar10 + -1;
              if (0xf < iVar10) goto LAB_00017b2f;
              puVar3 = puVar3 + -1;
            } while (iVar10 != -1);
            *(undefined1 *)(local_c4 + uVar9 + 0x7c2710 + iVar2) = 0xc0;
LAB_00017b2f:
          }
        }
        else {
          pbVar8 = &_TileCollisions + local_dc;
          iVar10 = 8;
          puVar3 = &DAT_007c6710 + local_d4;
          do {
            _FileRead(local_1d,1);
            *pbVar8 = local_1d[0] >> 4;
            pbVar8[(int)(&DAT_007c6710 + ((local_c4 + local_84) - (int)puVar3))] = local_1d[0] & 0xf
            ;
            pbVar8 = pbVar8 + 2;
            iVar10 = iVar10 + -1;
          } while (iVar10 != 0);
          _FileRead(local_1d,1);
          puVar4 = &_TileCollisions + local_d4;
          iVar11 = 0;
          bVar6 = 1;
          iVar10 = local_d8 - (int)puVar4;
          do {
            if ((local_1d[0] & bVar6) == 0) {
              puVar4[(int)(&_TileCollisions + iVar10)] = 0x40;
              puVar3[local_d8 - local_d4] = 0xc0;
            }
            else {
              puVar4[(int)(&_TileCollisions + iVar10)] = 0;
            }
            bVar6 = bVar6 * '\x02';
            iVar11 = iVar11 + 1;
            puVar4 = puVar4 + 1;
            puVar3 = puVar3 + 1;
          } while (iVar11 != 8);
          _FileRead(local_1d,1);
          puVar5 = &_TileCollisions + local_d4;
          local_f4 = &DAT_007c6710 + local_d4;
          bVar6 = 1;
          iVar10 = 8;
          do {
            if ((local_1d[0] & bVar6) == 0) {
              *puVar5 = 0x40;
              *local_f4 = 0xc0;
            }
            else {
              *puVar5 = 0;
            }
            bVar6 = bVar6 * '\x02';
            puVar5 = puVar5 + 1;
            local_f4 = local_f4 + 1;
            iVar10 = iVar10 + -1;
          } while (iVar10 != 0);
          for (bVar6 = 0; bVar6 < 0x10; bVar6 = bVar6 + 1) {
            uVar9 = (uint)bVar6;
            pcVar7 = &_TileCollisions + local_c8;
            iVar10 = 0;
            do {
              if ((int)uVar9 <= (int)*pcVar7) {
                local_cc[iVar2 + uVar9 + 0x4000] = (char)iVar10;
                goto LAB_00017ce7;
              }
              iVar10 = iVar10 + 1;
              if (iVar10 < 0) goto LAB_00017ce7;
              pcVar7 = pcVar7 + 1;
            } while (iVar10 != 0x10);
            local_d0[iVar2 + uVar9 + 0x4000] = 0x40;
LAB_00017ce7:
          }
          for (local_1d[0] = 0; local_1d[0] < 0x10; local_1d[0] = local_1d[0] + 1) {
            uVar9 = (uint)local_1d[0];
            puVar3 = &_TileCollisions + local_bc;
            iVar10 = 0xf;
            do {
              if ((int)uVar9 <= (int)(char)puVar3[(int)local_c0 - (int)(&DAT_007c6710 + local_d4)])
              {
                *(char *)(local_c4 + uVar9 + 0x7c2710 + iVar2) = (char)iVar10;
                goto LAB_00017d78;
              }
              iVar10 = iVar10 + -1;
              if (0xf < iVar10) goto LAB_00017d78;
              puVar3 = puVar3 + -1;
            } while (iVar10 != -1);
            *(undefined1 *)(local_c4 + uVar9 + 0x7c2710 + iVar2) = 0xc0;
LAB_00017d78:
          }
        }
        local_9c = local_9c + 1;
        local_e4 = local_e4 + 0x11400;
        local_e0 = local_e0 + 0x11400;
        local_dc = local_dc + 0x11400;
        local_d8 = local_d8 + 0x11400;
        local_d4 = local_d4 + 0x11400;
        local_d0 = local_d0 + 0x11400;
        local_cc = local_cc + 0x11400;
        local_c8 = local_c8 + 0x11400;
        local_c4 = local_c4 + 0x11400;
        local_c0 = local_c0 + 0x11400;
        local_bc = local_bc + 0x11400;
        local_94 = local_94 + 0x11400;
        local_90 = local_90 + 0x4500;
      } while (local_9c != 2);
      local_a0 = local_a0 + 1;
      local_8c = local_8c + 0x10;
      local_88 = local_88 + 0x10;
      local_84 = local_84 + 0x10;
    } while (local_a0 != 0x400);
    _CloseFile();
  }
  return;
}

