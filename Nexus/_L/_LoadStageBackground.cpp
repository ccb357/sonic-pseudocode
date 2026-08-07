void _LoadStageBackground(void)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  uint *puVar5;
  ushort *puVar6;
  int iVar7;
  char *pcVar8;
  byte *pbVar9;
  int local_90;
  int local_8c;
  undefined *local_88;
  undefined1 local_74 [83];
  char local_21;
  char local_20;
  char local_1f;
  byte local_1e;
  byte local_1d [13];
  
  local_1d[0] = 0;
  local_1e = 0;
  puVar2 = (undefined4 *)&_StageLayouts;
  do {
    *(undefined1 *)(puVar2 + 0xa007) = 0;
    puVar2 = puVar2 + 0xa008;
  } while (puVar2 != &_StageListPosition);
  puVar2 = &_HParallax;
  puVar4 = &_VParallax;
  do {
    puVar2[0x200] = 0;
    puVar4[0x200] = 0;
    puVar2 = puVar2 + 1;
    puVar4 = puVar4 + 1;
  } while (puVar2 != &DAT_007fb850);
  _memset(&DAT_006225d0,0,0x7fff);
  cVar1 = _LoadStageFile("Backgrounds.bin",_StageListPosition,local_74);
  if (cVar1 == '\x01') {
    _FileRead(local_1d,1);
    _FileRead(&local_1e,1);
    DAT_007fc550 = local_1e;
    local_90 = 0;
    puVar5 = &_HParallax;
    pbVar9 = &DAT_007fc450;
    while( true ) {
      if ((int)(uint)DAT_007fc550 <= local_90) break;
      _FileRead(&local_1e,1);
      *puVar5 = (uint)local_1e;
      _FileRead(&local_1e,1);
      puVar5[0x100] = (uint)local_1e << 10;
      puVar5[0x200] = 0;
      _FileRead(&local_1e,1);
      *pbVar9 = local_1e;
      local_90 = local_90 + 1;
      puVar5 = puVar5 + 1;
      pbVar9 = pbVar9 + 1;
    }
    _FileRead(&local_1e,1);
    DAT_007fd690 = local_1e;
    iVar7 = 0;
    puVar5 = &_VParallax;
    pbVar9 = &DAT_007fd590;
    while( true ) {
      if ((int)(uint)DAT_007fd690 <= iVar7) break;
      _FileRead(&local_1e,1);
      *puVar5 = (uint)local_1e;
      _FileRead(&local_1e,1);
      puVar5[0x100] = (uint)local_1e << 10;
      puVar5[0x200] = 0;
      _FileRead(&local_1e,1);
      *pbVar9 = local_1e;
      iVar7 = iVar7 + 1;
      puVar5 = puVar5 + 1;
      pbVar9 = pbVar9 + 1;
    }
    local_88 = &_StageLayouts;
    for (iVar7 = 1; iVar7 < (int)(local_1d[0] + 1); iVar7 = iVar7 + 1) {
      _FileRead(&local_1e,1);
      local_88[0x5003d] = local_1e;
      _FileRead(&local_1e,1);
      local_88[0x5003e] = local_1e;
      _FileRead(&local_1e,1);
      local_88[0x5003c] = local_1e;
      _FileRead(&local_1e,1);
      *(uint *)(local_88 + 0x50020) = (uint)local_1e;
      _FileRead(&local_1e,1);
      *(uint *)(local_88 + 0x50024) = (uint)local_1e << 10;
      *(undefined4 *)(local_88 + 0x50028) = 0;
      puVar6 = (ushort *)(&_StageLayouts + iVar7 * 0x28020);
      iVar3 = 1;
      do {
        *(undefined2 *)(iVar7 * 0x28020 + 0x6025ce + iVar3 * 2) = 0;
        iVar3 = iVar3 + 1;
      } while (iVar3 != 0x10001);
      pcVar8 = &DAT_006225d0 + iVar7 * 0x28020;
      _memset(pcVar8,0,0x7fff);
      while( true ) {
        while (_FileRead(&local_21,1), local_21 != -1) {
          *pcVar8 = local_21;
          pcVar8 = pcVar8 + 1;
        }
        _FileRead(&local_20,1);
        if (local_20 == -1) break;
        _FileRead(&local_1f,1);
        for (iVar3 = 0; iVar3 < (int)(uint)(byte)(local_1f - 1); iVar3 = iVar3 + 1) {
          *pcVar8 = local_20;
          pcVar8 = pcVar8 + 1;
        }
      }
      for (local_8c = 0; local_8c < (int)(uint)(byte)local_88[0x5003e]; local_8c = local_8c + 1) {
        for (iVar3 = 0; iVar3 < (int)(uint)(byte)local_88[0x5003d]; iVar3 = iVar3 + 1) {
          _FileRead(&local_1e,1);
          *puVar6 = (ushort)local_1e;
          puVar6 = puVar6 + 1;
        }
        puVar6 = puVar6 + (0x100 - (uint)(byte)local_88[0x5003d]);
      }
      local_88 = local_88 + 0x28020;
    }
    _CloseFile();
  }
  return;
}
