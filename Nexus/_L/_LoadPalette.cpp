void _LoadPalette(undefined4 param_1,int param_2,int param_3)

{
  char cVar1;
  byte *pbVar2;
  int local_88;
  ushort *local_84;
  int *local_80;
  undefined1 local_70 [81];
  byte local_1f;
  byte local_1e;
  byte local_1d;
  
  cVar1 = _LoadFile(param_1,local_70);
  if (cVar1 == '\x01') {
    _SetFilePosition(param_2 * 3);
    local_88 = param_2;
    pbVar2 = &_TilePalette + param_2 * 4;
    local_84 = &_TilePalette16 + param_2;
    local_80 = &_TilePalette32 + param_2;
    while( true ) {
      if (param_3 <= local_88) break;
      _FileRead(&local_1f,3);
      *local_84 = (ushort)(local_1f >> 3) << 0xb | (ushort)(local_1e >> 2) << 5 |
                  (ushort)(local_1d >> 3);
      *local_80 = (uint)local_1f * 0x10000 + (uint)local_1e * 0x100 + (uint)local_1d;
      *pbVar2 = local_1f;
      pbVar2[1] = local_1e;
      pbVar2[2] = local_1d;
      local_88 = local_88 + 1;
      pbVar2 = pbVar2 + 4;
      local_84 = local_84 + 1;
      local_80 = local_80 + 1;
    }
    _CloseFile();
  }
  return;
}
