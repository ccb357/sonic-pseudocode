int _AddGraphicsFile(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char local_5c [76];
  
  _StrCopy(local_5c,"Data/Sprites/");
  _StrAdd(local_5c,param_1);
  iVar3 = 0;
  while( true ) {
    iVar2 = _StringLength(&_GfxSurface + iVar3 * 0x4c);
    if (iVar2 < 1) break;
    cVar1 = _StringComp(&_GfxSurface + iVar3 * 0x4c,local_5c);
    if (cVar1 == '\x01') {
      return iVar3;
    }
    iVar3 = iVar3 + 1;
    if (iVar3 == 0x10) {
      return 0;
    }
  }
  cVar1 = _StringLength(local_5c);
  cVar1 = local_5c[(char)(cVar1 + -1)];
  if (cVar1 == 'p') {
    _LoadBMPFile(local_5c,iVar3);
    return iVar3;
  }
  if (cVar1 < 'q') {
    if (cVar1 != 'f') {
      return iVar3;
    }
    _LoadGIFFile(local_5c,iVar3);
    return iVar3;
  }
  if (cVar1 == 'v') {
    _LoadRSVFile(local_5c,iVar3);
    return iVar3;
  }
  if (cVar1 != 'x') {
    return iVar3;
  }
  _LoadGFXFile(local_5c,iVar3);
  return iVar3;
}
