void _Load128x128Mappings(void)

{
  char cVar1;
  byte bVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined1 local_70 [82];
  byte local_1e;
  undefined1 local_1d;
  
  cVar1 = _LoadStageFile("128x128Tiles.bin",_StageListPosition,local_70);
  if (cVar1 == '\x01') {
    puVar3 = &_Tile128x128;
    puVar5 = &_Tile128x128;
    piVar4 = &_Tile128x128;
    do {
      _FileRead(&local_1e,2);
      bVar2 = (local_1e & 0x3f) >> 4;
      *(byte *)(puVar3 + 0xe000) = bVar2;
      local_1e = (local_1e & 0x3f) + bVar2 * -0x10;
      bVar2 = local_1e >> 2;
      *(byte *)(puVar3 + 0xc000) = bVar2;
      local_1e = local_1e + bVar2 * -4;
      *(ushort *)(puVar5 + 0x8000) = CONCAT11(local_1e,local_1d);
      *piVar4 = (uint)CONCAT11(local_1e,local_1d) << 8;
      _FileRead(&local_1e,1);
      *(byte *)(puVar3 + 0x10000) = local_1e >> 4;
      *(byte *)(puVar3 + 0x12000) = local_1e + (local_1e >> 4) * -0x10;
      puVar3 = (undefined4 *)((int)puVar3 + 1);
      puVar5 = (undefined4 *)((int)puVar5 + 2);
      piVar4 = piVar4 + 1;
    } while (puVar3 != (undefined4 *)&DAT_00772710);
    _CloseFile();
  }
  return;
}
