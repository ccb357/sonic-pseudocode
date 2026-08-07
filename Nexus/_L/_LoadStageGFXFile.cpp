void _LoadStageGFXFile(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  undefined1 *puVar4;
  uint uVar5;
  byte local_89;
  undefined4 *local_88;
  undefined2 *local_84;
  undefined1 local_70 [81];
  byte local_1f;
  byte local_1e;
  byte local_1d [13];
  
  cVar1 = _LoadStageFile("16x16Tiles.gfx",param_1,local_70);
  if (cVar1 == '\x01') {
    _FileRead(&local_1f,1);
    _FileRead(&local_1f,1);
    _FileRead(&local_1f,1);
    _FileRead(&local_1f,1);
    puVar4 = &_TilePalette;
    local_88 = &_TilePalette32;
    local_84 = &_TilePalette16;
    do {
      _FileRead(&local_1f,3);
      puVar4[0x200] = local_1f;
      puVar4[0x201] = local_1e;
      puVar4[0x202] = local_1d[0];
      local_88[0x80] = (uint)local_1f * 0x10000 + (uint)local_1e * 0x100 + (uint)local_1d[0];
      local_84[0x80] =
           (ushort)(local_1f >> 3) << 0xb | (ushort)(local_1e >> 2) << 5 |
           (ushort)(local_1d[0] >> 3);
      puVar4 = puVar4 + 4;
      local_88 = local_88 + 1;
      local_84 = local_84 + 1;
    } while (puVar4 != &DAT_0049e6f0);
    iVar2 = 0x7f;
    do {
      _FileRead(&local_1f,3);
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    uVar5 = 0;
    pcVar3 = &_TileGfx;
    do {
      _FileRead(&local_1f,1);
      if (local_1f == 0xff) {
        _FileRead(&local_1e,1);
        if (local_1e == 0xff) break;
        if (uVar5 == 0) {
          uVar5 = 1;
          local_89 = local_1e;
        }
        _FileRead(local_1d,1);
        for (iVar2 = 0; iVar2 < (int)(uint)local_1d[0]; iVar2 = iVar2 + 1) {
          if ((local_89 == local_1e) || ((char)local_1e < '\0')) {
            *pcVar3 = '\0';
          }
          else {
            *pcVar3 = local_1e + 0x80;
          }
          pcVar3 = pcVar3 + 1;
        }
      }
      else {
        if (uVar5 == 0) {
          local_89 = local_1f;
          uVar5 = 1;
LAB_00005ec7:
          *pcVar3 = '\0';
        }
        else {
          if ((local_1f == local_89) || ((char)local_1f < '\0')) goto LAB_00005ec7;
          *pcVar3 = local_1f + 0x80;
        }
        pcVar3 = pcVar3 + 1;
      }
    } while (uVar5 < 2);
    _CloseFile();
  }
  return;
}
