
void _LoadStageFiles(void)

{
  char cVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  undefined *puVar7;
  undefined1 local_b0 [81];
  undefined1 local_5f [64];
  byte local_1f;
  byte local_1e;
  undefined1 local_1d;
  
  _StopAllSFX();
  cVar1 = _CheckCurrentStageFolder(_StageListPosition);
  if (cVar1 != '\0') goto LAB_00018aad;
  _ReleaseStageSFX();
  _LoadPalette("Data/Palettes/MasterPalette.act",0,0x100);
  _ClearScriptData();
  iVar4 = 0xf;
  while (iVar4 = iVar4 + -1, iVar4 != -2) {
    _RemoveGraphicsFile("",iVar4);
  }
  cVar1 = _LoadStageFile("StageConfig.bin",_StageListPosition,local_b0);
  if (cVar1 == '\x01') {
    _FileRead(&local_1f,1);
    _CloseFile();
  }
  if (local_1f == 1) {
    cVar1 = _LoadFile("Data/Game/GameConfig.bin",local_b0);
    if (cVar1 != '\x01') goto LAB_000188ba;
    _FileRead(&local_1f,1);
    for (iVar4 = 0; iVar4 < (int)(uint)local_1f; iVar4 = iVar4 + 1) {
      _FileRead(&local_1e,1);
    }
    _FileRead(&local_1f,1);
    for (iVar4 = 0; iVar4 < (int)(uint)local_1f; iVar4 = iVar4 + 1) {
      _FileRead(&local_1e,1);
    }
    _FileRead(&local_1f,1);
    for (iVar4 = 0; iVar4 < (int)(uint)local_1f; iVar4 = iVar4 + 1) {
      _FileRead(&local_1e,1);
    }
    _FileRead(&local_1f,1);
    for (iVar4 = 0; uVar5 = iVar4 + 2, iVar4 < (int)(uint)local_1f; iVar4 = iVar4 + 1) {
      _FileRead(&local_1e,1);
      _FileRead(local_5f,local_1e);
      local_5f[local_1e] = 0;
      _GetFileInfo(local_b0);
      _CloseFile();
      _ParseScriptFile(local_5f,uVar5 & 0xff);
      _SetFileInfo(local_b0);
    }
    _CloseFile();
  }
  else {
LAB_000188ba:
    uVar5 = 2;
  }
  cVar1 = _LoadStageFile("StageConfig.bin",_StageListPosition,local_b0);
  if (cVar1 == '\x01') {
    _FileRead(&local_1f,1);
    iVar4 = 0x60;
    do {
      _FileRead(&local_1f,3);
      _SetPaletteEntry(iVar4,local_1f,local_1e,local_1d);
      iVar4 = iVar4 + 1;
    } while (iVar4 != 0x80);
    _FileRead(&local_1f,1);
    for (iVar4 = 0; iVar4 < (int)(uint)local_1f; iVar4 = iVar4 + 1) {
      _FileRead(&local_1e,1);
      _FileRead(local_5f,local_1e);
      local_5f[local_1e] = 0;
      _GetFileInfo(local_b0);
      _CloseFile();
      _ParseScriptFile(local_5f,(uVar5 & 0xff) + iVar4);
      _SetFileInfo(local_b0);
    }
    _FileRead(&local_1f,1);
    *(uint *)PTR__NoStageSFX_007fe158 = (uint)local_1f;
    for (iVar4 = 0; iVar4 < (int)(uint)local_1f; iVar4 = iVar4 + 1) {
      _FileRead(&local_1e,1);
      _FileRead(local_5f,local_1e);
      local_5f[local_1e] = 0;
      _GetFileInfo(local_b0);
      _CloseFile();
      _LoadSfx(local_5f,iVar4 + *(int *)PTR__NoGlobalSFX_007fe06c);
      _SetFileInfo(local_b0);
    }
    _CloseFile();
  }
  iVar4 = 0;
  pcVar6 = PTR__PlayerScriptList_007fe10c;
  puVar7 = PTR__PlayerScriptList_007fe10c;
  do {
    if (*pcVar6 != '\0') {
      _ParseScriptFile(puVar7,iVar4);
    }
    iVar4 = iVar4 + 1;
    puVar7 = puVar7 + 0xa54;
    pcVar6 = pcVar6 + 0xa54;
  } while (iVar4 != 2);
  _LoadStageGIFFile(_StageListPosition);
  _Load128x128Mappings();
  _LoadStageCollisions();
  _LoadStageBackground();
LAB_00018aad:
  iVar4 = 0;
  do {
    _SetMusicTrack("",iVar4,0);
    iVar4 = iVar4 + 1;
  } while (iVar4 != 0x10);
  puVar2 = PTR__ObjectEntityList_007fe150 + 0x30;
  puVar3 = PTR__ObjectEntityList_007fe150 + 0x10330;
  do {
    *puVar2 = 0;
    puVar2[5] = 0;
    puVar2[7] = 0;
    puVar2[3] = 0;
    *(undefined4 *)(puVar2 + -4) = 0;
    puVar2[2] = 0;
    puVar2[1] = 0;
    *(undefined4 *)(puVar2 + -0x30) = 0;
    *(undefined4 *)(puVar2 + -0x2c) = 0;
    puVar2[4] = 3;
    *(undefined4 *)(puVar2 + -8) = 0x200;
    puVar2[6] = 0;
    *(undefined4 *)(puVar2 + -0x28) = 0;
    *(undefined4 *)(puVar2 + -0x24) = 0;
    *(undefined4 *)(puVar2 + -0x20) = 0;
    *(undefined4 *)(puVar2 + -0x1c) = 0;
    *(undefined4 *)(puVar2 + -0x18) = 0;
    *(undefined4 *)(puVar2 + -0x14) = 0;
    *(undefined4 *)(puVar2 + -0x10) = 0;
    *(undefined4 *)(puVar2 + -0xc) = 0;
    puVar2 = puVar2 + 0x38;
  } while (puVar3 != puVar2);
  _LoadActLayout();
  _ProcessStartupScripts();
  _XScrollA = (*(int *)PTR__PlayerList_007fe09c >> 0x10) + -0xa0;
  _XScrollB = (*(int *)PTR__PlayerList_007fe09c >> 0x10) + 0xa0;
  _YScrollA = *(short *)(PTR__PlayerList_007fe09c + 6) + -0x68;
  _YScrollB = *(short *)(PTR__PlayerList_007fe09c + 6) + 0x88;
  return;
}

