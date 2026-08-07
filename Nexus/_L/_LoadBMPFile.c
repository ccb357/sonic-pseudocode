void _LoadBMPFile(undefined4 param_1,int param_2)

//UNUSED RETRO SONIC FILE LETS GOOOOOOOOOOOOOOOO
{
  char cVar1;
  int iVar2;
  byte *pbVar3;
  int local_80;
  undefined1 local_70 [64];
  int local_30;
  byte local_1d [13];
  
  cVar1 = _LoadFile(param_1,local_70);
  if (cVar1 == '\x01') {
    _StrCopy(&_GfxSurface + param_2 * 0x4c,param_1);
    _SetFilePosition(0x12);
    _FileRead(local_1d,1);
    (&DAT_0005d610)[param_2 * 0x13] = (uint)local_1d[0];
    _FileRead(local_1d,1);
    (&DAT_0005d610)[param_2 * 0x13] = (&DAT_0005d610)[param_2 * 0x13] + (uint)local_1d[0] * 0x100 ;
    _FileRead(local_1d,1);
    (&DAT_0005d610)[param_2 * 0x13] = (&DAT_0005d610)[param_2 * 0x13] + (uint)local_1d[0] * 0x100 00;
    _FileRead(local_1d,1);
    (&DAT_0005d610)[param_2 * 0x13] =
         (&DAT_0005d610)[param_2 * 0x13] + (uint)local_1d[0] * 0x1000000;
    _FileRead(local_1d,1);
    (&DAT_0005d614)[param_2 * 0x13] = (uint)local_1d[0];
    _FileRead(local_1d,1);
    (&DAT_0005d614)[param_2 * 0x13] = (&DAT_0005d614)[param_2 * 0x13] + (uint)local_1d[0] * 0x100 ;
    _FileRead(local_1d,1);
    (&DAT_0005d614)[param_2 * 0x13] = (&DAT_0005d614)[param_2 * 0x13] + (uint)local_1d[0] * 0x100 00;
    _FileRead(local_1d,1);
    iVar2 = (uint)local_1d[0] * 0x1000000 + (&DAT_0005d614)[param_2 * 0x13];
    (&DAT_0005d614)[param_2 * 0x13] = iVar2;
    _SetFilePosition(local_30 - iVar2 * (&DAT_0005d610)[param_2 * 0x13]);
    iVar2 = _GfxDataPosition;
    (&DAT_0005d618)[param_2 * 0x13] = _GfxDataPosition;
    pbVar3 = &_GraphicData +
             ((&DAT_0005d614)[param_2 * 0x13] + -1) * (&DAT_0005d610)[param_2 * 0x13] + iVar2;
    local_80 = 0;
    while( true ) {
      if ((int)(&DAT_0005d614)[param_2 * 0x13] <= local_80) break;
      for (iVar2 = 0; iVar2 < (int)(&DAT_0005d610)[param_2 * 0x13]; iVar2 = iVar2 + 1) {
        _FileRead(local_1d,1);
        *pbVar3 = local_1d[0];
        pbVar3 = pbVar3 + 1;
      }
      pbVar3 = pbVar3 + (&DAT_0005d610)[param_2 * 0x13] * -2;
      local_80 = local_80 + 1;
    }
    _GfxDataPosition =
         _GfxDataPosition + (&DAT_0005d614)[param_2 * 0x13] * (&DAT_0005d610)[param_2 * 0x13];
    _CloseFile();
  }
  return;
}
