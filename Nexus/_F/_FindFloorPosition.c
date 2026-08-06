void _FindFloorPosition(int param_1,int *param_2,int param_3)

{
  char cVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int local_1c;
  
  puVar3 = PTR__TileCollisions_007fe0e0;
  iVar2 = param_2[2];
  local_1c = 0;
  iVar4 = param_3 << 0x10;
  do {
    if ((char)param_2[3] == '\0') {
      uVar5 = *param_2 >> 0x10;
      uVar7 = *(short *)((int)param_2 + 6) + -0x10 + local_1c;
      iVar10 = (int)uVar7 >> 7;
      iVar9 = (int)(uVar7 & 0x7f) >> 4;
      iVar6 = (uint)*(ushort *)
                     (PTR__StageLayouts_007fe074 + ((*param_2 >> 0x17) + iVar10 * 0x100) * 2) * 0 x40
              + ((int)(uVar5 & 0x7f) >> 4) + iVar9 * 8;
      uVar7 = (uint)*(ushort *)(PTR__Tile128x128_007fe0a0 + iVar6 * 2 + 0x20000);
      uVar8 = (uint)*(byte *)(param_1 + 0x37);
      if ((byte)PTR__Tile128x128_007fe0a0[iVar6 + uVar8 * 0x8000 + 0x40000] < 2) {
        cVar1 = PTR__Tile128x128_007fe0a0[iVar6 + 0x30000];
        if (cVar1 == '\x01') {
          if ((char)PTR__TileCollisions_007fe0e0[(~uVar5 & 0xf) + uVar7 * 0x10 + uVar8 * 0x11400]  <
              '@') {
            param_2[1] = (int)(char)PTR__TileCollisions_007fe0e0
                                    [(~uVar5 & 0xf) + uVar7 * 0x10 + uVar8 * 0x11400] +
                         iVar10 * 0x80 + iVar9 * 0x10;
            *(undefined1 *)(param_2 + 3) = 1;
            param_2[2] = 0x100 - (uint)(byte)PTR__TileCollisions_007fe0e0
                                             [((uint)*(byte *)(param_1 + 0x37) * 0x4500 + uVar7) *  4
                                              + 0x10000];
          }
        }
        else if (cVar1 == '\0') {
          if ((char)puVar3[(uVar5 & 0xf) + uVar7 * 0x10 + uVar8 * 0x11400] < '@') {
            param_2[1] = (int)(char)puVar3[(uVar5 & 0xf) + uVar7 * 0x10 + uVar8 * 0x11400] +
                         iVar10 * 0x80 + iVar9 * 0x10;
            *(undefined1 *)(param_2 + 3) = 1;
            uVar7 = (uint)(byte)puVar3[((uint)*(byte *)(param_1 + 0x37) * 0x4500 + uVar7) * 4 +
                                       0x10000];
LAB_00015108:
            param_2[2] = uVar7;
          }
        }
        else if (cVar1 == '\x02') {
          if (-0x40 < (char)puVar3[uVar7 * 0x10 + (uVar5 & 0xf) + uVar8 * 0x11400 + 0xc000]) {
            param_2[1] = (iVar10 * 0x80 -
                         (int)(char)puVar3[uVar7 * 0x10 + (uVar5 & 0xf) + uVar8 * 0x11400 + 0xc000 ])
                         + 0xf + iVar9 * 0x10;
            *(undefined1 *)(param_2 + 3) = 1;
            uVar7 = 0x80 - (byte)puVar3[((uint)*(byte *)(param_1 + 0x37) * 0x4500 + uVar7) * 4 +
                                        0x10003];
            goto LAB_00015108;
          }
        }
        else if ((cVar1 == '\x03') &&
                (-0x40 < (char)puVar3[uVar7 * 0x10 + (~uVar5 & 0xf) + uVar8 * 0x11400 + 0xc000]))  {
          param_2[1] = (iVar10 * 0x80 -
                       (int)(char)puVar3[uVar7 * 0x10 + (~uVar5 & 0xf) + uVar8 * 0x11400 + 0xc000 ])
                       + 0xf + iVar9 * 0x10;
          *(undefined1 *)(param_2 + 3) = 1;
          param_2[2] = (byte)puVar3[((uint)*(byte *)(param_1 + 0x37) * 0x4500 + uVar7) * 4 + 0x100 03
                                   ] + 0x80;
        }
      }
      if ((char)param_2[3] != '\x01') goto LAB_00015224;
      iVar6 = param_2[2];
      if (iVar6 < 0) {
        iVar6 = iVar6 + 0x100;
        param_2[2] = iVar6;
      }
      if (0xff < iVar6) {
        iVar6 = iVar6 + -0x100;
        param_2[2] = iVar6;
      }
      iVar6 = iVar6 - iVar2;
      iVar9 = iVar6;
      if (iVar6 < 0) {
        iVar9 = -iVar6;
      }
      if (iVar9 < 0x21) {
LAB_000151f8:
        if (param_2[1] - param_3 < 9) {
          if (param_2[1] - param_3 < -8) {
            param_2[1] = iVar4;
            *(undefined1 *)(param_2 + 3) = 0;
          }
        }
        else {
          param_2[1] = iVar4;
          *(undefined1 *)(param_2 + 3) = 0;
        }
        goto LAB_00015224;
      }
      iVar9 = iVar6 + -0x100;
      if (iVar9 < 0) {
        iVar9 = -iVar9;
      }
      if (iVar9 < 0x21) goto LAB_000151f8;
      iVar6 = iVar6 + 0x100;
      if (iVar6 < 0) {
        iVar6 = -iVar6;
      }
      if (iVar6 < 0x21) goto LAB_000151f8;
      param_2[1] = iVar4;
      *(undefined1 *)(param_2 + 3) = 0;
      param_2[2] = iVar2;
      local_1c = 0x40;
    }
    else {
LAB_00015224:
      local_1c = local_1c + 0x10;
    }
    if (0x2f < local_1c) {
      return;
    }
  } while( true );
}
