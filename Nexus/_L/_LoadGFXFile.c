void _LoadGFXFile(undefined4 param_1,int param_2)
//ANOTHER RETRO SONIC UNUSED FUNCTION HELL YEAH

{
  ushort uVar1;
  ushort uVar2;
  char cVar3;
  int iVar4;
  char *pcVar5;
  undefined1 local_70 [81];
  char local_1f;
  char local_1e;
  byte local_1d [13];
  
  cVar3 = _LoadFile(param_1,local_70);
  if (cVar3 == '\x01') {
    _StrCopy(&_GfxSurface + param_2 * 0x4c,param_1);
    _FileRead(&local_1f,1);
    cVar3 = local_1f;
    _FileRead(&local_1f,1);
    uVar1 = CONCAT11(cVar3,local_1f);
    _FileRead(&local_1f,1);
    cVar3 = local_1f;
    _FileRead(&local_1f,1);
    uVar2 = CONCAT11(cVar3,local_1f);
    iVar4 = 0xff;
    do {
      _FileRead(&local_1f,3);
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    (&DAT_0005d610)[param_2 * 0x13] = (uint)uVar1;
    (&DAT_0005d614)[param_2 * 0x13] = (uint)uVar2;
    iVar4 = _GfxDataPosition;
    (&DAT_0005d618)[param_2 * 0x13] = _GfxDataPosition;
    pcVar5 = &_GraphicData + iVar4;
    while( true ) {
      while (_FileRead(&local_1f,1), local_1f != -1) {
        *pcVar5 = local_1f;
        pcVar5 = pcVar5 + 1;
      }
      _FileRead(&local_1e,1);
      if (local_1e == -1) break;
      _FileRead(local_1d,1);
      for (iVar4 = 0; iVar4 < (int)(uint)local_1d[0]; iVar4 = iVar4 + 1) {
        *pcVar5 = local_1e;
        pcVar5 = pcVar5 + 1;
      }
    }
    _GfxDataPosition =
         _GfxDataPosition + (&DAT_0005d610)[param_2 * 0x13] * (&DAT_0005d614)[param_2 * 0x13];
    _CloseFile();
  }
  return;
}
