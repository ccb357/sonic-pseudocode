void _ObjectFloorCollision(int param_1,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  
  *(undefined4 *)(PTR__ScriptEng_00021ec8 + 0x54) = 0;
  iVar2 = _ObjectLoop;
  uVar5 = *(short *)((int)&_ObjectEntityList + _ObjectLoop * 0x38 + 2) + param_1;
  uVar8 = *(short *)((int)&DAT_004d1f84 + _ObjectLoop * 0x38 + 2) + param_2;
  if ((int)uVar5 < 1) {
    return;
  }
  if ((int)((uint)(byte)PTR__StageLayouts_007fe074[0x2801d] * 0x80) <= (int)uVar5) {
    return;
  }
  if ((int)uVar8 < 1) {
    return;
  }
  if ((int)((uint)(byte)PTR__StageLayouts_007fe074[0x2801e] * 0x80) <= (int)uVar8) {
    return;
  }
  iVar3 = (int)uVar8 >> 7;
  iVar6 = (int)(uVar8 & 0x7f) >> 4;
  iVar7 = (uint)*(ushort *)(PTR__StageLayouts_007fe074 + (((int)uVar5 >> 7) + iVar3 * 0x100) * 2 ) *
          0x40 + ((int)(uVar5 & 0x7f) >> 4) + iVar6 * 8;
  uVar4 = (uint)*(ushort *)(PTR__Tile128x128_007fe0a0 + iVar7 * 2 + 0x20000);
  if (1 < (byte)PTR__Tile128x128_007fe0a0[iVar7 + param_3 * 0x8000 + 0x40000]) goto LAB_0000cc19 ;
  cVar1 = PTR__Tile128x128_007fe0a0[iVar7 + 0x30000];
  if (cVar1 == '\x01') {
    uVar5 = ~uVar5;
LAB_0000cb0a:
    if ((int)(uVar8 & 0xf) <=
        (int)(char)PTR__TileCollisions_007fe0e0[(uVar5 & 0xf) + uVar4 * 0x10 + param_3 * 0x11400] )
    goto LAB_0000cc19;
    uVar8 = (int)(char)PTR__TileCollisions_007fe0e0
                       [(uVar5 & 0xf) + uVar4 * 0x10 + param_3 * 0x11400] + iVar3 * 0x80 +
            iVar6 * 0x10;
  }
  else {
    if (cVar1 == '\0') goto LAB_0000cb0a;
    if (cVar1 == '\x02') {
      if (0xf - (char)PTR__TileCollisions_007fe0e0
                      [uVar4 * 0x10 + (uVar5 & 0xf) + param_3 * 0x11400 + 0xc000] <
          (int)(uVar8 & 0xf)) {
        uVar8 = (iVar3 * 0x80 -
                (int)(char)PTR__TileCollisions_007fe0e0
                           [uVar4 * 0x10 + (uVar5 & 0xf) + param_3 * 0x11400 + 0xc000]) + 0xf +
                iVar6 * 0x10;
        *(undefined4 *)(PTR__ScriptEng_00021ec8 + 0x54) = 1;
      }
      goto LAB_0000cc19;
    }
    if ((cVar1 != '\x03') ||
       ((int)(uVar8 & 0xf) <=
        0xf - (char)PTR__TileCollisions_007fe0e0
                    [uVar4 * 0x10 + (~uVar5 & 0xf) + param_3 * 0x11400 + 0xc000]))
    goto LAB_0000cc19;
    uVar8 = (iVar3 * 0x80 -
            (int)(char)PTR__TileCollisions_007fe0e0
                       [uVar4 * 0x10 + (~uVar5 & 0xf) + param_3 * 0x11400 + 0xc000]) + 0xf +
            iVar6 * 0x10;
  }
  *(undefined4 *)(PTR__ScriptEng_00021ec8 + 0x54) = 1;
LAB_0000cc19:
  if (*(int *)(PTR__ScriptEng_00021ec8 + 0x54) == 1) {
    (&DAT_004d1f84)[iVar2 * 0xe] = (uVar8 - param_2) * 0x10000;
  }
  return;
}
