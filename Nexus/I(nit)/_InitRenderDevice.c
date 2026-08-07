undefined4 _InitRenderDevice(void)

{
  int iVar1;
  undefined4 uVar2;
  bool bVar3;
  
  iVar1 = _SDL_Init(0x20);
  if (iVar1 < 0) {
    uVar2 = 0;
  }
  else {
    bVar3 = _GameWindowed != '\0';
    if (bVar3) {
      iVar1 = _SDL_GetVideoInfo();
      _PrefFSDepth = *(char *)(*(int *)(iVar1 + 8) + 4);
      _Primary = _SDL_SetVideoMode(_WindowedX,_WindowedY,_PrefFSDepth,1);
      _Backbuffer = _SDL_CreateRGBSurface(0x1000,_WindowedX,_WindowedY,_PrefFSDepth,0,0,0,0);
    }
    else {
      _PrefFSDepth = '\x10';
      _Primary = _SDL_SetVideoMode(_FullscreenX,_FullscreenY,0x10,0xc0000001);
      _Backbuffer = _SDL_CreateRGBSurface(0x1000,_FullscreenX,_FullscreenY,_PrefFSDepth,0,0,0,0) ;
    }
    _SDL_ShowCursor(bVar3);
    if (_PrefFSDepth == '\x10') {
      *PTR__ColourMode_007fe124 = 0;
    }
    else if (_PrefFSDepth == ' ') {
      *PTR__ColourMode_007fe124 = 1;
    }
    else if (_PrefFSDepth == '\b') {
      *PTR__ColourMode_007fe124 = 2;
    }
    _RenderDeviceStatus = 1;
    uVar2 = 1;
  }
  return uVar2;
}
