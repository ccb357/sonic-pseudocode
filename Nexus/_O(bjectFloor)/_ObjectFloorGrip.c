void _ObjectFloorGrip(int param_1,int param_2,int param_3)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int local_18;
  
  *(undefined4 *)(PTR__ScriptEng_00021ec8 + 0x54) = 0;
  puVar5 = PTR__TileCollisions_007fe0e0;
  iVar4 = _ObjectLoop;
  uVar12 = *(short *)((int)&_ObjectEntityList + _ObjectLoop * 0x38 + 2) + param_1;
  iVar6 = *(short *)((int)&DAT_004d1f84 + _ObjectLoop * 0x38 + 2) + param_2;
  uVar13 = iVar6 - 0x10;
  bVar1 = PTR__StageLayouts_007fe074[0x2801d];
  bVar2 = PTR__StageLayouts_007fe074[0x2801e];
  local_18 = 4;
  do {
    local_18 = local_18 + -1;
    if (local_18 == 0) {
      if (*(int *)(PTR__ScriptEng_00021ec8 + 0x54) == 1) {
        if (((&DAT_004d1f84)[iVar4 * 0xe] - iVar6) + 0xfU < 0x1f) {
          (&DAT_004d1f84)[iVar4 * 0xe] = ((&DAT_004d1f84)[iVar4 * 0xe] - param_2) * 0x10000;
        }
        else {
          (&DAT_004d1f84)[iVar4 * 0xe] = (iVar6 - param_2) * 0x10000;
          *(undefined4 *)(PTR__ScriptEng_00021ec8 + 0x54) = 0;
        }
      }
      return;
    }
    if ((((0 < (int)uVar12) && ((int)uVar12 < (int)((uint)bVar1 << 7))) && (0 < (int)uVar13)) &&
       (((int)uVar13 < (int)((uint)bVar2 << 7) && (*(int *)(PTR__ScriptEng_00021ec8 + 0x54) == 0) )))
    {
      iVar9 = (int)uVar13 >> 7;
      iVar7 = (int)(uVar13 & 0x7f) >> 4;
      iVar10 = (uint)*(ushort *)
                      (PTR__StageLayouts_007fe074 + (iVar9 * 0x100 + ((int)uVar12 >> 7)) * 2) * 0 x40
               + ((int)(uVar12 & 0x7f) >> 4) + iVar7 * 8;
      uVar8 = (uint)*(ushort *)(PTR__Tile128x128_007fe0a0 + iVar10 * 2 + 0x20000);
      if ((byte)PTR__Tile128x128_007fe0a0[iVar10 + param_3 * 0x8000 + 0x40000] < 2) {
        cVar3 = PTR__Tile128x128_007fe0a0[iVar10 + 0x30000];
        uVar11 = ~uVar12 & 0xf;
        if ((cVar3 == '\x01') || (uVar11 = uVar12 & 0xf, cVar3 == '\0')) {
          if ((char)puVar5[uVar11 + uVar8 * 0x10 + param_3 * 0x11400] < '@') {
            iVar7 = (int)(char)puVar5[uVar11 + uVar8 * 0x10 + param_3 * 0x11400] + iVar9 * 0x80 +
                    iVar7 * 0x10;
LAB_0000ce80:
            (&DAT_004d1f84)[iVar4 * 0xe] = iVar7;
            *(undefined4 *)(PTR__ScriptEng_00021ec8 + 0x54) = 1;
          }
        }
        else if (cVar3 == '\x02') {
          if (-0x40 < (char)puVar5[uVar8 * 0x10 + (uVar12 & 0xf) + param_3 * 0x11400 + 0xc000]) {
            (&DAT_004d1f84)[iVar4 * 0xe] =
                 (iVar9 * 0x80 -
                 (int)(char)puVar5[uVar8 * 0x10 + (uVar12 & 0xf) + param_3 * 0x11400 + 0xc000]) +
                 0xf + iVar7 * 0x10;
            *(undefined4 *)(PTR__ScriptEng_00021ec8 + 0x54) = 1;
          }
        }
        else if ((cVar3 == '\x03') &&
                (-0x40 < (char)puVar5[uVar8 * 0x10 + (~uVar12 & 0xf) + param_3 * 0x11400 + 0xc000 ]))
        {
          iVar7 = (iVar9 * 0x80 -
                  (int)(char)puVar5[uVar8 * 0x10 + (~uVar12 & 0xf) + param_3 * 0x11400 + 0xc000])  +
                  0xf + iVar7 * 0x10;
          goto LAB_0000ce80;
        }
      }
    }
    uVar13 = uVar13 + 0x10;
  } while( true );
}
