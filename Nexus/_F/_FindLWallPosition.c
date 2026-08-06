void _FindLWallPosition(int param_1,int *param_2,int param_3)

{
  char cVar1;
  int iVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int local_1c;
  
  puVar3 = PTR__TileCollisions_007fe0e0;
  iVar2 = param_2[2];
  local_1c = 0;
  iVar5 = param_3 << 0x10;
  do {
    if ((char)param_2[3] == '\0') {
      uVar4 = (*param_2 >> 0x10) + -0x10 + local_1c;
      iVar10 = (int)uVar4 >> 7;
      iVar9 = (int)(uVar4 & 0x7f) >> 4;
      uVar6 = param_2[1] >> 0x10;
      iVar7 = (uint)*(ushort *)
                     (PTR__StageLayouts_007fe074 + (iVar10 + (param_2[1] >> 0x17) * 0x100) * 2) *
              0x40 + iVar9 + (uVar6 >> 1 & 0x38);
      uVar4 = (uint)*(ushort *)(PTR__Tile128x128_007fe0a0 + iVar7 * 2 + 0x20000);
      uVar8 = (uint)*(byte *)(param_1 + 0x37);
      if ((byte)PTR__Tile128x128_007fe0a0[iVar7 + uVar8 * 0x8000 + 0x40000] < 2) {
        cVar1 = PTR__Tile128x128_007fe0a0[iVar7 + 0x30000];
        if (cVar1 == '\x01') {
          if (-0x40 < (char)PTR__TileCollisions_007fe0e0
                            [uVar4 * 0x10 + (uVar6 & 0xf) + uVar8 * 0x11400 + 0x8000]) {
            *param_2 = (iVar10 * 0x80 -
                       (int)(char)PTR__TileCollisions_007fe0e0
                                  [uVar4 * 0x10 + (uVar6 & 0xf) + uVar8 * 0x11400 + 0x8000]) + 0xf  +
                       iVar9 * 0x10;
            *(undefined1 *)(param_2 + 3) = 1;
            param_2[2] = 0x100 - (uint)(byte)PTR__TileCollisions_007fe0e0
                                             [((uint)*(byte *)(param_1 + 0x37) * 0x4500 + uVar4) *  4
                                              + 0x10002];
          }
        }
        else if (cVar1 == '\0') {
          if ((char)puVar3[uVar4 * 0x10 + (uVar6 & 0xf) + uVar8 * 0x11400 + 0x4000] < '@') {
            *param_2 = (int)(char)puVar3[uVar4 * 0x10 + (uVar6 & 0xf) + uVar8 * 0x11400 + 0x4000]  +
                       iVar10 * 0x80 + iVar9 * 0x10;
            *(undefined1 *)(param_2 + 3) = 1;
            uVar4 = (uint)(byte)puVar3[((uint)*(byte *)(param_1 + 0x37) * 0x4500 + uVar4) * 4 +
                                       0x10001];
LAB_00015712:
            param_2[2] = uVar4;
          }
        }
        else if (cVar1 == '\x02') {
          if ((char)puVar3[uVar4 * 0x10 + (~uVar6 & 0xf) + uVar8 * 0x11400 + 0x4000] < '@') {
            *param_2 = (int)(char)puVar3[uVar4 * 0x10 + (~uVar6 & 0xf) + uVar8 * 0x11400 + 0x4000 ] +
                       iVar10 * 0x80 + iVar9 * 0x10;
            *(undefined1 *)(param_2 + 3) = 1;
            uVar4 = 0x80 - (byte)puVar3[((uint)*(byte *)(param_1 + 0x37) * 0x4500 + uVar4) * 4 +
                                        0x10001];
            goto LAB_00015712;
          }
        }
        else if ((cVar1 == '\x03') &&
                (-0x40 < (char)puVar3[uVar4 * 0x10 + (~uVar6 & 0xf) + uVar8 * 0x11400 + 0x8000]))  {
          *param_2 = (iVar10 * 0x80 -
                     (int)(char)puVar3[uVar4 * 0x10 + (~uVar6 & 0xf) + uVar8 * 0x11400 + 0x8000])  +
                     0xf + iVar9 * 0x10;
          *(undefined1 *)(param_2 + 3) = 1;
          param_2[2] = (byte)puVar3[((uint)*(byte *)(param_1 + 0x37) * 0x4500 + uVar4) * 4 + 0x100 02
                                   ] + 0x80;
        }
      }
      if ((char)param_2[3] != '\x01') goto LAB_00015808;
      iVar7 = param_2[2];
      if (iVar7 < 0) {
        iVar7 = iVar7 + 0x100;
        param_2[2] = iVar7;
      }
      if (0xff < iVar7) {
        iVar7 = iVar7 + -0x100;
        param_2[2] = iVar7;
      }
      iVar7 = iVar2 - iVar7;
      if (iVar7 < 0) {
        iVar7 = -iVar7;
      }
      if (iVar7 < 0x201) {
        if (*param_2 - param_3 < 9) {
          if (*param_2 - param_3 < -8) {
            *param_2 = iVar5;
            *(undefined1 *)(param_2 + 3) = 0;
          }
        }
        else {
          *param_2 = iVar5;
          *(undefined1 *)(param_2 + 3) = 0;
        }
        goto LAB_00015808;
      }
      *param_2 = iVar5;
      *(undefined1 *)(param_2 + 3) = 0;
      param_2[2] = iVar2;
      local_1c = 0x40;
    }
    else {
LAB_00015808:
      local_1c = local_1c + 0x10;
    }
    if (0x2f < local_1c) {
      return;
    }
  } while( true );
}
