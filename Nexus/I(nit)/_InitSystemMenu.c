void _InitSystemMenu(void)

{
  undefined1 *puVar1;
  undefined *puVar2;
  
  _XScrollOffset = 0;
  _YScrollOffset = 0;
  _StopMusic();
  _StopAllSFX();
  _ReleaseStageSFX();
  *PTR__PaletteMode_007fe130 = 0;
  if (*PTR__UseBinFile_007fe03c == '\0') {
    *PTR__GameMode_007fe014 = 0;
    _ClearGraphicsData();
    _LoadPalette("Data/Palettes/MasterPalette.act",0,0x100);
    *PTR__TextMenuSurfaceNo_007fe0a4 = 0;
    _LoadGIFFile("Data/Game/SystemText.gif",0);
    _StageMode = 0;
    _SetupTextMenu(&_GameMenu,0);
    _AddTextMenuEntry(&_GameMenu,"RETRO SONIC DEFAULT MENU");
    _AddTextMenuEntry(&_GameMenu," ");
    _AddTextMenuEntry(&_GameMenu," ");
    _AddTextMenuEntry(&_GameMenu," ");
    _AddTextMenuEntry(&_GameMenu," ");
    _AddTextMenuEntry(&_GameMenu," ");
    _AddTextMenuEntry(&_GameMenu," ");
    _AddTextMenuEntry(&_GameMenu,"1 PLAYER");
    _AddTextMenuEntry(&_GameMenu," ");
    _AddTextMenuEntry(&_GameMenu,"QUIT");
    DAT_004b78e5 = 2;
    DAT_004b78e6 = 2;
    DAT_004b78e7 = 0;
    DAT_004b78e8 = 7;
  }
  else {
    _ClearGraphicsData();
    puVar1 = PTR__PlayerScriptList_007fe10c + 0x14a8;
    puVar2 = PTR__PlayerScriptList_007fe10c;
    do {
      *puVar2 = 0;
      puVar2 = puVar2 + 0xa54;
    } while (puVar2 != puVar1);
    _LoadPalette("Data/Palettes/MasterPalette.act",0,0x100);
    _LoadPlayerFromList(0,0);
    *PTR__ActiveStageList_007fe0d4 = 0;
    _StageMode = 0;
    *PTR__GameMode_007fe014 = 1;
    _StageListPosition = 0;
  }
  return;
}
