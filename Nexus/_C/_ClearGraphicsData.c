void _ClearGraphicsData(void)

{
  undefined *puVar1;
  int iVar2;
  
  iVar2 = 0;
  puVar1 = &_GfxSurface;
  do {
    _StrCopy(puVar1,"");
    iVar2 = iVar2 + 1;
    puVar1 = puVar1 + 0x4c;
  } while (iVar2 != 0x18);
  _GfxDataPosition = 0;
  return;
}