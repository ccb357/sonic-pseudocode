void _LWallCollision(int param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  
  if ((char)param_2[3] != '\0') {
    return;
  }
  uVar3 = *param_2 >> 0x10;
  iVar2 = *param_2 >> 0x17;
  iVar6 = (int)(uVar3 & 0x7f) >> 4;
  uVar7 = param_2[1] >> 0x10;
  iVar4 = (uint)*(ushort *)(PTR__StageLayouts_007fe074 + ((param_2[1] >> 0x17) * 0x100 + iVar2) * 2)
          * 0x40 + iVar6 + (uVar7 >> 1 & 0x38);
  uVar5 = (uint)*(byte *)(param_1 + 0x37);
  if (PTR__Tile128x128_007fe0a0[iVar4 + uVar5 * 0x8000 + 0x40000] != '\0') {
    return;
  }
  cVar1 = PTR__Tile128x128_007fe0a0[iVar4 + 0x30000];
  if (cVar1 == '\x01') {
LAB_0001532f:
    if ((int)(uVar3 & 0xf) <=
        0xf - (char)PTR__TileCollisions_007fe0e0
                    [(uint)*(ushort *)(PTR__Tile128x128_007fe0a0 + iVar4 * 2 + 0x20000) * 0x10 +
                     (uVar7 & 0xf) + uVar5 * 0x11400 + 0x8000]) {
      return;
    }
    iVar2 = (iVar2 * 0x80 -
            (int)(char)PTR__TileCollisions_007fe0e0
                       [(uint)*(ushort *)(PTR__Tile128x128_007fe0a0 + iVar4 * 2 + 0x20000) * 0x10  +
                        (uVar7 & 0xf) + uVar5 * 0x11400 + 0x8000]) + 0xf + iVar6 * 0x10;
  }
  else {
    if (cVar1 != '\0') {
      if (cVar1 != '\x02') {
        if (cVar1 != '\x03') {
          return;
        }
        uVar7 = ~uVar7;
        goto LAB_0001532f;
      }
      uVar7 = ~uVar7;
    }
    if ((int)(uVar3 & 0xf) <=
        (int)(char)PTR__TileCollisions_007fe0e0
                   [(uint)*(ushort *)(PTR__Tile128x128_007fe0a0 + iVar4 * 2 + 0x20000) * 0x10 +
                    (uVar7 & 0xf) + uVar5 * 0x11400 + 0x4000]) {
      return;
    }
    iVar2 = (int)(char)PTR__TileCollisions_007fe0e0
                       [(uint)*(ushort *)(PTR__Tile128x128_007fe0a0 + iVar4 * 2 + 0x20000) * 0x10  +
                        (uVar7 & 0xf) + uVar5 * 0x11400 + 0x4000] + iVar2 * 0x80 + iVar6 * 0x10;
  }
  *param_2 = iVar2;
  *(undefined1 *)(param_2 + 3) = 1;
  return;
}
