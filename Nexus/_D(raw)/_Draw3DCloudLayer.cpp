void _Draw3DCloudLayer(byte param_1)
//i have no fucking idea if i should put these to c or c++

{
  byte bVar1;
  char cVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  char *pcVar13;
  int iVar14;
  uint uVar15;
  char *local_44;
  undefined *local_40;
  int local_3c;
  int local_34;
  uint local_2c;
  int local_14;
  
  iVar5 = (uint)(byte)(&_ActiveTileLayers)[param_1] * 0x28020;
  local_40 = &_StageLayouts + iVar5;
  bVar1 = (&DAT_0062a5ed)[iVar5];
  uVar10 = (uint)(byte)(&DAT_0062a5ee)[iVar5];
  iVar3 = *(int *)(&DAT_0062a5e0 + iVar5);
  if ((&_ActiveTileLayers)[param_1] == 0) {
    local_34 = _YScrollOffset;
    local_40 = &_StageLayouts;
  }
  else {
    iVar14 = *(int *)(&DAT_0062a5d8 + iVar5) + *(int *)(&DAT_0062a5d4 + iVar5);
    *(int *)(&DAT_0062a5d8 + iVar5) = iVar14;
    if ((int)(uVar10 * 0x800000) < iVar14) {
      iVar14 = iVar14 + uVar10 * -0x800000;
      *(int *)(&DAT_0062a5d8 + iVar5) = iVar14;
    }
    local_34 = (int)(CONCAT44(iVar14 >> 0x1f,iVar14 >> 0x10) % (longlong)(int)(uVar10 << 7));
    uVar10 = (int)(uVar10 << 7) >> 7;
  }
  iVar5 = uVar10 * 0x80;
  iVar14 = (uint)bVar1 * 0x80;
  local_44 = PTR__FrameBuffer_007fe128;
  local_14 = 0x84;
LAB_0001a45b:
  iVar6 = (int)(0x3000 / (longlong)local_14);
  uVar11 = iVar3 + (iVar6 * -0x280 >> 9);
  local_2c = iVar6 * -0x280 & 0x1ff;
  uVar8 = local_34 + iVar6;
  if (0x7fffffff < uVar8) {
    uVar8 = uVar8 + iVar5;
  }
  if (iVar5 <= (int)uVar8) {
    uVar8 = uVar8 + uVar10 * -0x80;
    if (iVar5 <= (int)uVar8) {
      uVar8 = uVar8 + uVar10 * -0x80;
    }
  }
  uVar12 = uVar8 & 0xf;
  local_3c = 0;
  do {
    if (0x7fffffff < uVar11) {
      uVar11 = uVar11 + iVar14;
    }
    if (iVar14 <= (int)uVar11) {
      uVar11 = uVar11 + (uint)bVar1 * -0x80;
    }
    uVar15 = uVar11 & 0xf;
    iVar9 = (uint)*(ushort *)(local_40 + (((int)uVar11 >> 7) + ((int)uVar8 >> 7) * 0x100) * 2) *
            0x40 + ((int)uVar11 >> 4) + ((int)uVar11 >> 7) * -8 +
                   (((int)uVar8 >> 4) + ((int)uVar8 >> 7) * -8) * 8;
    pcVar13 = PTR__TileGfx_007fe14c + (&_Tile128x128)[iVar9];
    cVar2 = (&DAT_0079a710)[iVar9];
    if (cVar2 == '\x01') {
      pcVar13 = pcVar13 + uVar12 * 0x10 + (0xf - uVar15);
    }
    else if (cVar2 == '\0') {
      pcVar13 = pcVar13 + uVar12 * 0x10 + uVar15;
    }
    else if (cVar2 == '\x02') {
      pcVar13 = pcVar13 + uVar12 * -0x10 + uVar15 + 0xf0;
    }
    else if (cVar2 == '\x03') {
      pcVar13 = pcVar13 + (uVar12 * -0x10 - uVar15) + 0xff;
    }
    if (*pcVar13 != '\0') {
      *local_44 = *pcVar13;
    }
    local_44 = local_44 + 1;
    local_3c = local_3c + 1;
    bVar4 = true;
LAB_0001a593:
    if (0x13f < local_3c) {
LAB_0001a64d:
      local_14 = local_14 + -1;
      if (local_14 == 0x24) {
        return;
      }
      goto LAB_0001a45b;
    }
  } while (!bVar4);
  cVar2 = (&DAT_0079a710)[iVar9];
  if (cVar2 == '\x01') {
LAB_0001a63b:
    if (bVar4) {
      while( true ) {
        if (0x13f < local_3c) goto LAB_0001a64d;
        local_2c = local_2c + iVar6 * 4;
        iVar7 = (int)local_2c >> 9;
        uVar15 = uVar15 + iVar7;
        uVar11 = uVar11 + iVar7;
        local_2c = local_2c & 0x1ff;
        if (0xf < (int)uVar15) break;
        pcVar13 = pcVar13 + -iVar7;
        if (*pcVar13 != '\0') {
          *local_44 = *pcVar13;
        }
        local_44 = local_44 + 1;
        local_3c = local_3c + 1;
      }
      goto LAB_0001a61c;
    }
  }
  else {
    if ((cVar2 == '\0') || (cVar2 == '\x02')) goto LAB_0001a5f0;
    if (cVar2 == '\x03') goto LAB_0001a63b;
  }
  goto LAB_0001a593;
LAB_0001a5f0:
  if (bVar4) {
    while( true ) {
      if (0x13f < local_3c) goto LAB_0001a64d;
      local_2c = local_2c + iVar6 * 4;
      iVar7 = (int)local_2c >> 9;
      uVar15 = uVar15 + iVar7;
      uVar11 = uVar11 + iVar7;
      local_2c = local_2c & 0x1ff;
      if (0xf < (int)uVar15) break;
      pcVar13 = pcVar13 + iVar7;
      if (*pcVar13 != '\0') {
        *local_44 = *pcVar13;
      }
      local_44 = local_44 + 1;
      local_3c = local_3c + 1;
    }
LAB_0001a61c:
    bVar4 = false;
  }
  goto LAB_0001a593;
}
