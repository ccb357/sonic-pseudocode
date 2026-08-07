void _LoadGIFFile(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  char cVar3;
  undefined *puVar4;
  uint uVar5;
  int iVar6;
  undefined1 local_70 [81];
  byte local_1f [15];
  
  cVar3 = _LoadFile(param_1,local_70);
  if (cVar3 == '\x01') {
    _StrCopy(&_GfxSurface + param_2 * 0x4c,param_1);
    _SetFilePosition(6);
    _FileRead(local_1f,1);
    uVar5 = (uint)local_1f[0];
    _FileRead(local_1f,1);
    iVar1 = uVar5 + (uint)local_1f[0] * 0x100;
    _FileRead(local_1f,1);
    uVar5 = (uint)local_1f[0];
    _FileRead(local_1f,1);
    iVar2 = uVar5 + (uint)local_1f[0] * 0x100;
    _FileRead(local_1f,1);
    _FileRead(local_1f,1);
    _FileRead(local_1f,1);
    iVar6 = 0x80;
    do {
      _FileRead(local_1f,3);
      iVar6 = iVar6 + 1;
    } while (iVar6 != 0x100);
    iVar6 = 0x80;
    do {
      _FileRead(local_1f,3);
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    do {
      _FileRead(local_1f,1);
    } while (local_1f[0] != 0x2c);
    _FileRead(local_1f,2);
    _FileRead(local_1f,2);
    _FileRead(local_1f,2);
    _FileRead(local_1f,2);
    _FileRead(local_1f,1);
    if ((char)local_1f[0] < '\0') {
      iVar6 = 0x80;
      do {
        _FileRead(local_1f,3);
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    (&DAT_0005d610)[param_2 * 0x13] = iVar1;
    (&DAT_0005d614)[param_2 * 0x13] = iVar2;
    (&DAT_0005d618)[param_2 * 0x13] = _GfxDataPosition;
    uVar5 = _GfxDataPosition + (&DAT_0005d614)[param_2 * 0x13] * iVar1;
    if (uVar5 < 0x400000) {
      puVar4 = &_GraphicData + _GfxDataPosition;
      _GfxDataPosition = uVar5;
      _ReadGifPictureData(iVar1,iVar2,(local_1f[0] & 0x40) >> 6,puVar4);
      uVar5 = _GfxDataPosition;
    }
    _GfxDataPosition = uVar5;
    _CloseFile();
  }
  return;
}
