void _LoadStageGIFFile(undefined4 param_1)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  byte *pbVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined1 *puVar9;
  undefined4 *local_90;
  undefined2 *local_8c;
  undefined1 local_70 [81];
  byte local_1f;
  byte local_1e;
  byte local_1d;
  
  cVar2 = _LoadStageFile("16x16Tiles.gif",param_1,local_70);
  if (cVar2 == '\x01') {
    _SetFilePosition(6);
    _FileRead(&local_1f,1);
    uVar6 = (uint)local_1f;
    _FileRead(&local_1f,1);
    uVar3 = (uint)local_1f;
    _FileRead(&local_1f,1);
    uVar7 = (uint)local_1f;
    _FileRead(&local_1f,1);
    uVar4 = (uint)local_1f;
    _FileRead(&local_1f,1);
    _FileRead(&local_1f,1);
    _FileRead(&local_1f,1);
    iVar8 = 0x80;
    do {
      _FileRead(&local_1f,3);
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
    puVar9 = &_TilePalette;
    local_90 = &_TilePalette32;
    local_8c = &_TilePalette16;
    do {
      _FileRead(&local_1f,3);
      puVar9[0x200] = local_1f;
      puVar9[0x201] = local_1e;
      puVar9[0x202] = local_1d;
      local_90[0x80] = (uint)local_1f * 0x10000 + (uint)local_1e * 0x100 + (uint)local_1d;
      local_8c[0x80] =
           (ushort)(local_1f >> 3) << 0xb | (ushort)(local_1e >> 2) << 5 | (ushort)(local_1d >> 3 );
      puVar9 = puVar9 + 4;
      local_90 = local_90 + 1;
      local_8c = local_8c + 1;
    } while (puVar9 != &DAT_0049e6f0);
    _FileRead(&local_1f,1);
    if (local_1f == 0x2c) {
      _FileRead(&local_1f,2);
      _FileRead(&local_1f,2);
      _FileRead(&local_1f,2);
      _FileRead(&local_1f,2);
      _FileRead(&local_1f,1);
      if ((char)local_1f < '\0') {
        iVar8 = 0x80;
        do {
          _FileRead(&local_1f,3);
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
      }
      _ReadGifPictureData(uVar6 + uVar3 * 0x100,uVar7 + uVar4 * 0x100,(local_1f & 0x40) >> 6,
                          &_TileGfx);
      bVar1 = _TileGfx;
      local_1f = _TileGfx;
      pbVar5 = &_TileGfx;
      do {
        if (bVar1 == *pbVar5) {
          *pbVar5 = 0;
        }
        pbVar5 = pbVar5 + 1;
      } while (pbVar5 != &_TilePalette);
    }
    _CloseFile();
  }
  return;
}
