void _LoadRSVFile(undefined4 param_1,int param_2)

{
  int iVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  undefined1 local_70 [81];
  byte local_1f [15];
  
  cVar3 = _LoadFile(param_1,local_70);
  if (cVar3 == '\x01') {
    _StrCopy(&_GfxSurface + param_2 * 0x4c,param_1);
    DAT_004a10f8 = (undefined1)param_2;
    _CurrentVideoFrame = 0;
    _FileRead(local_1f,1);
    _VideoInfo = (uint)local_1f[0];
    _FileRead(local_1f,1);
    _VideoInfo = _VideoInfo + (uint)local_1f[0] * 0x100;
    _FileRead(local_1f,1);
    uVar4 = (uint)local_1f[0];
    _FileRead(local_1f,1);
    iVar1 = uVar4 + (uint)local_1f[0] * 0x100;
    _FileRead(local_1f,1);
    bVar2 = local_1f[0];
    _FileRead(local_1f,1);
    DAT_004a10f4 = _GetFilePosition();
    _VideoPlaying = 1;
    (&DAT_0005d610)[param_2 * 0x13] = iVar1;
    (&DAT_0005d614)[param_2 * 0x13] = (uint)CONCAT11(local_1f[0],bVar2);
    (&DAT_0005d618)[param_2 * 0x13] = _GfxDataPosition;
    _GfxDataPosition = _GfxDataPosition + iVar1 * (&DAT_0005d614)[param_2 * 0x13];
  }
  return;
}
