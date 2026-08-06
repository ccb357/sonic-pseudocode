void _FindRoofPosition(int param_1,int *param_2,int param_3)

{
  char cVar1;
  undefined *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int local_18;
  
  puVar2 = PTR__TileCollisions_007fe0e0;
  local_18 = 0;
  iVar5 = param_3 << 0x10;
  do {
    if ((char)param_2[3] == '\0') {
      uVar4 = *param_2 >> 0x10;
      uVar3 = (*(short *)((int)param_2 + 6) - local_18) + 0x10;
      iVar9 = (int)uVar3 >> 7;
      iVar8 = (int)(uVar3 & 0x7f) >> 4;
      iVar6 = (uint)*(ushort *)
                     (PTR__StageLayouts_007fe074 + ((*param_2 >> 0x17) + iVar9 * 0x100) * 2) * 0x 40
              + ((int)(uVar4 & 0x7f) >> 4) + iVar8 * 8;
      uVar3 = (uint)*(ushort *)(PTR__Tile128x128_007fe0a0 + iVar6 * 2 + 0x20000);
      uVar7 = (uint)*(byte *)(param_1 + 0x37);
      if ((byte)PTR__Tile128x128_007fe0a0[iVar6 + uVar7 * 0x8000 + 0x40000] < 2) {
        cVar1 = PTR__Tile128x128_007fe0a0[iVar6 + 0x30000];
        if (cVar1 == '\x01') {
          if (-0x40 < (char)PTR__TileCollisions_007fe0e0
                            [uVar3 * 0x10 + (~uVar4 & 0xf) + uVar7 * 0x11400 + 0xc000]) {
            param_2[1] = (int)(char)PTR__TileCollisions_007fe0e0
                                    [uVar3 * 0x10 + (~uVar4 & 0xf) + uVar7 * 0x11400 + 0xc000] +
                         iVar9 * 0x80 + iVar8 * 0x10;
            *(undefined1 *)(param_2 + 3) = 1;
            param_2[2] = 0x100 - (uint)(byte)PTR__TileCollisions_007fe0e0
                                             [((uint)*(byte *)(param_1 + 0x37) * 0x4500 + uVar3) *  4
                                              + 0x10003];
          }
        }
        else if (cVar1 == '\0') {
          if (-0x40 < (char)puVar2[uVar3 * 0x10 + (uVar4 & 0xf) + uVar7 * 0x11400 + 0xc000]) {
            param_2[1] = (int)(char)puVar2[uVar3 * 0x10 + (uVar4 & 0xf) + uVar7 * 0x11400 + 0xc00 0]
                         + iVar9 * 0x80 + iVar8 * 0x10;
            *(undefined1 *)(param_2 + 3) = 1;
            uVar3 = (uint)(byte)puVar2[((uint)*(byte *)(param_1 + 0x37) * 0x4500 + uVar3) * 4 +
                                       0x10003];
LAB_00015abb:
            param_2[2] = uVar3;
          }
        }
        else if (cVar1 == '\x02') {
          if ((char)puVar2[(uVar4 & 0xf) + uVar3 * 0x10 + uVar7 * 0x11400] < '@') {
            param_2[1] = (iVar9 * 0x80 -
                         (int)(char)puVar2[(uVar4 & 0xf) + uVar3 * 0x10 + uVar7 * 0x11400]) + 0xf  +
                         iVar8 * 0x10;
            *(undefined1 *)(param_2 + 3) = 1;
            param_2[2] = 0x80 - (uint)(byte)puVar2[((uint)*(byte *)(param_1 + 0x37) * 0x4500 + uVa r3
                                                   ) * 4 + 0x10000];
          }
        }
        else if ((cVar1 == '\x03') &&
                ((char)puVar2[(~uVar4 & 0xf) + uVar3 * 0x10 + uVar7 * 0x11400] < '@')) {
          param_2[1] = (iVar9 * 0x80 -
                       (int)(char)puVar2[(~uVar4 & 0xf) + uVar3 * 0x10 + uVar7 * 0x11400]) + 0xf +
                       iVar8 * 0x10;
          *(undefined1 *)(param_2 + 3) = 1;
          uVar3 = (byte)puVar2[((uint)*(byte *)(param_1 + 0x37) * 0x4500 + uVar3) * 4 + 0x10000] +
                  0x80;
          goto LAB_00015abb;
        }
      }
      if ((char)param_2[3] == '\x01') {
        iVar6 = param_2[2];
        if (iVar6 < 0) {
          iVar6 = iVar6 + 0x100;
          param_2[2] = iVar6;
        }
        if (0xff < iVar6) {
          param_2[2] = iVar6 + -0x100;
        }
        iVar6 = param_2[1];
        if (0xf < param_2[1] - param_3) {
          param_2[1] = iVar5;
          *(undefined1 *)(param_2 + 3) = 0;
          iVar6 = iVar5;
        }
        if (iVar6 - param_3 < -0xf) {
          param_2[1] = iVar5;
          *(undefined1 *)(param_2 + 3) = 0;
        }
      }
    }
    local_18 = local_18 + 0x10;
    if (local_18 == 0x30) {
      return;
    }
  } while( true );
}
