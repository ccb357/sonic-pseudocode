void _DrawStageGfx(void)

//ANNNNNND NEVERMIND THIS IS ALSO C GODDAMMIT
{
  char cVar1;
  
  _DrawObjectList(0);
  if (_ActiveTileLayers < 9) {
    cVar1 = (&DAT_0062a5ec)[(uint)_ActiveTileLayers * 0x28020];
    if (cVar1 == '\x02') {
      _DrawVLineScrollLayer(0);
    }
    else if (cVar1 == '\x03') {
      _Draw3DCloudLayer(0);
    }
    else if (cVar1 == '\x01') {
      _DrawHLineScrollLayer(0);
    }
  }
  _DrawObjectList(1);
  if (DAT_007f9001 < 9) {
    cVar1 = (&DAT_0062a5ec)[(uint)DAT_007f9001 * 0x28020];
    if (cVar1 == '\x02') {
      _DrawVLineScrollLayer(1);
    }
    else if (cVar1 == '\x03') {
      _Draw3DCloudLayer(1);
    }
    else if (cVar1 == '\x01') {
      _DrawHLineScrollLayer(1);
    }
  }
  _DrawObjectList(2);
  if (DAT_007f9002 < 9) {
    cVar1 = (&DAT_0062a5ec)[(uint)DAT_007f9002 * 0x28020];
    if (cVar1 == '\x02') {
      _DrawVLineScrollLayer(2);
    }
    else if (cVar1 == '\x03') {
      _Draw3DCloudLayer(2);
    }
    else if (cVar1 == '\x01') {
      _DrawHLineScrollLayer(2);
    }
  }
  _DrawObjectList(3);
  _DrawObjectList(4);
  if (DAT_007f9003 < 9) {
    cVar1 = (&DAT_0062a5ec)[(uint)DAT_007f9003 * 0x28020];
    if (cVar1 == '\x02') {
      _DrawVLineScrollLayer(3);
    }
    else if (cVar1 == '\x03') {
      _Draw3DCloudLayer(3);
    }
    else if (cVar1 == '\x01') {
      _DrawHLineScrollLayer(3);
    }
  }
  _DrawObjectList(5);
  _DrawObjectList(6);
  return;
}
