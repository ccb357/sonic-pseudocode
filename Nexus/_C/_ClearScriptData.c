void _ClearScriptData(void)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  puVar1 = &_ScriptData;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  } while (puVar1 != &_ScriptDataOffset);
  puVar1 = &_JumpTableData;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  } while (puVar1 != &_JumpTableOffset);
  _ScriptDataPos = 0;
  _JumpTableDataPos = 0;
  _ScriptFramesNo = 0;
  puVar1 = &DAT_004e2294;
  do {
    *puVar1 = &DAT_005e644c;
    puVar1[4] = &DAT_004c8d7c;
    puVar1[1] = &DAT_005e644c;
    puVar1[5] = &DAT_004c8d7c;
    puVar1[2] = &DAT_005e644c;
    puVar1[6] = &DAT_004c8d7c;
    puVar1[3] = &DAT_005e644c;
    puVar1[7] = &DAT_004c8d7c;
    puVar1[8] = &_ScriptFrames;
    *(undefined1 *)((int)puVar1 + -3) = 0;
    *(undefined1 *)(puVar1 + -1) = 0;
    puVar1 = puVar1 + 10;
  } while (puVar1 != (undefined4 *)0x4e4a94);
  iVar5 = 0;
  iVar4 = 0;
  do {
    puVar2 = &_PlayerScriptList + iVar4;
    iVar3 = 0x100;
    do {
      *(undefined **)(puVar2 + 0x4c) = &DAT_005e644c;
      *(undefined **)(puVar2 + 0x44c) = &DAT_004c8d7c;
      puVar2 = puVar2 + 4;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    iVar5 = iVar5 + 1;
    iVar4 = iVar4 + 0xa54;
  } while (iVar5 != 2);
  return;
}