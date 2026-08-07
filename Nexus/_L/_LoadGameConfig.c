void _LoadGameConfig(undefined4 param_1)

{
  undefined *puVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  int *piVar6;
  undefined1 *puVar7;
  int local_d4;
  int local_d0;
  int local_cc;
  int local_c8;
  int local_bc;
  undefined *local_b8;
  int local_b4;
  int local_b0;
  int local_ac;
  int local_a8;
  int local_a4;
  int local_a0;
  undefined1 local_90 [81];
  byte local_3f [32];
  byte local_1f;
  byte local_1e;
  byte local_1d [13];
  
  cVar2 = _LoadFile(param_1,local_90);
  if (cVar2 == '\x01') {
    _FileRead(&local_1e,1);
    puVar1 = PTR__GameWindowText_007fe01c;
    _FileRead(PTR__GameWindowText_007fe01c,local_1e);
    puVar1[local_1e] = 0;
    _FileRead(&local_1e,1);
    for (iVar3 = 0; iVar3 < (int)(uint)local_1e; iVar3 = iVar3 + 1) {
      _FileRead(&local_1f,1);
    }
    _FileRead(&local_1e,1);
    puVar1 = PTR__GameDescriptionText_007fe020;
    _FileRead(PTR__GameDescriptionText_007fe020,local_1e);
    puVar1[local_1e] = 0;
    _FileRead(local_1d,1);
    for (local_bc = 0; local_bc < (int)(uint)local_1d[0]; local_bc = local_bc + 1) {
      _FileRead(&local_1e,1);
      for (iVar3 = 0; iVar3 < (int)(uint)local_1e; iVar3 = iVar3 + 1) {
        _FileRead(&local_1f,1);
        local_3f[iVar3] = local_1f;
      }
      local_3f[iVar3] = 0;
    }
    _FileRead(local_1d,1);
    puVar1 = PTR__NO_GLOBALVARIABLES_007fe02c;
    *PTR__NO_GLOBALVARIABLES_007fe02c = 0;
    local_b8 = PTR__GlobalVariableNames_007fe028;
    piVar6 = (int *)PTR__GlobalVariables_007fe024;
    for (local_b4 = 0; local_b4 < (int)(uint)local_1d[0]; local_b4 = local_b4 + 1) {
      *puVar1 = *puVar1 + '\x01';
      _FileRead(&local_1e,1);
      for (iVar3 = 0; iVar3 < (int)(uint)local_1e; iVar3 = iVar3 + 1) {
        _FileRead(&local_1f,1);
        local_3f[iVar3] = local_1f;
      }
      local_3f[iVar3] = 0;
      for (iVar3 = 0; local_3f[iVar3] != 0; iVar3 = iVar3 + 1) {
        local_b8[iVar3] = local_3f[iVar3];
      }
      local_b8[iVar3] = 0;
      _FileRead(&local_1f,1);
      *piVar6 = (uint)local_1f << 0x18;
      _FileRead(&local_1f,1);
      *piVar6 = *piVar6 + (uint)local_1f * 0x10000;
      _FileRead(&local_1f,1);
      *piVar6 = *piVar6 + (uint)local_1f * 0x100;
      _FileRead(&local_1f,1);
      *piVar6 = *piVar6 + (uint)local_1f;
      local_b8 = local_b8 + 0x20;
      piVar6 = piVar6 + 1;
    }
    _FileRead(local_1d,1);
    for (iVar3 = 0; iVar3 < (int)(uint)local_1d[0]; iVar3 = iVar3 + 1) {
      _FileRead(&local_1e,1);
      for (iVar4 = 0; iVar4 < (int)(uint)local_1e; iVar4 = iVar4 + 1) {
        _FileRead(&local_1f,1);
        local_3f[iVar4] = local_1f;
      }
      local_3f[iVar4] = 0;
    }
    _FileRead(&_NoPresentationStages,1);
    for (local_b0 = 0; local_b0 < (int)(uint)_NoPresentationStages; local_b0 = local_b0 + 1) {
      _FileRead(&local_1e,1);
      for (iVar3 = 0; iVar3 < (int)(uint)local_1e; iVar3 = iVar3 + 1) {
        _FileRead(&local_1f,1);
      }
      _FileRead(&local_1e,1);
      for (iVar3 = 0; iVar3 < (int)(uint)local_1e; iVar3 = iVar3 + 1) {
        _FileRead(&local_1f,1);
      }
      _FileRead(&local_1e,1);
      for (iVar3 = 0; iVar3 < (int)(uint)local_1e; iVar3 = iVar3 + 1) {
        _FileRead(&local_1f,1);
      }
    }
    _FileRead(&_NoPresentationStages,1);
    puVar7 = &_PStageList;
    local_d4 = 0;
    for (local_ac = 0; local_ac < (int)(uint)_NoPresentationStages; local_ac = local_ac + 1) {
      _FileRead(&local_1e,1);
      pbVar5 = &_PStageList + local_d4;
      for (iVar3 = 0; iVar3 < (int)(uint)local_1e; iVar3 = iVar3 + 1) {
        _FileRead(&local_1f,1);
        *pbVar5 = local_1f;
        pbVar5 = pbVar5 + 1;
      }
      puVar7[iVar3] = 0;
      _FileRead(&local_1e,1);
      pbVar5 = puVar7 + 8;
      for (iVar3 = 0; iVar3 < (int)(uint)local_1e; iVar3 = iVar3 + 1) {
        _FileRead(&local_1f,1);
        *pbVar5 = local_1f;
        pbVar5 = pbVar5 + 1;
      }
      puVar7[iVar3 + 8] = 0;
      _FileRead(&local_1e,1);
      for (iVar3 = 0; iVar3 < (int)(uint)local_1e; iVar3 = iVar3 + 1) {
        _FileRead(&local_1f,1);
      }
      _FileRead(&local_1e,1);
      local_d4 = local_d4 + 0xc;
      puVar7 = puVar7 + 0xc;
    }
    _FileRead(&_NoZoneStages,1);
    puVar7 = &_ZStageList;
    local_d0 = 0;
    for (local_a8 = 0; local_a8 < (int)(uint)_NoZoneStages; local_a8 = local_a8 + 1) {
      _FileRead(&local_1e,1);
      pbVar5 = &_ZStageList + local_d0;
      for (iVar3 = 0; iVar3 < (int)(uint)local_1e; iVar3 = iVar3 + 1) {
        _FileRead(&local_1f,1);
        *pbVar5 = local_1f;
        pbVar5 = pbVar5 + 1;
      }
      puVar7[iVar3] = 0;
      _FileRead(&local_1e,1);
      pbVar5 = puVar7 + 8;
      for (iVar3 = 0; iVar3 < (int)(uint)local_1e; iVar3 = iVar3 + 1) {
        _FileRead(&local_1f,1);
        *pbVar5 = local_1f;
        pbVar5 = pbVar5 + 1;
      }
      puVar7[iVar3 + 8] = 0;
      _FileRead(&local_1e,1);
      for (iVar3 = 0; iVar3 < (int)(uint)local_1e; iVar3 = iVar3 + 1) {
        _FileRead(&local_1f,1);
      }
      _FileRead(&local_1e,1);
      local_d0 = local_d0 + 0xc;
      puVar7 = puVar7 + 0xc;
    }
    _FileRead(&_NoSpecialStages,1);
    puVar7 = &_SStageList;
    local_cc = 0;
    for (local_a4 = 0; local_a4 < (int)(uint)_NoSpecialStages; local_a4 = local_a4 + 1) {
      _FileRead(&local_1e,1);
      pbVar5 = &_SStageList + local_cc;
      for (iVar3 = 0; iVar3 < (int)(uint)local_1e; iVar3 = iVar3 + 1) {
        _FileRead(&local_1f,1);
        *pbVar5 = local_1f;
        pbVar5 = pbVar5 + 1;
      }
      puVar7[iVar3] = 0;
      _FileRead(&local_1e,1);
      pbVar5 = puVar7 + 8;
      for (iVar3 = 0; iVar3 < (int)(uint)local_1e; iVar3 = iVar3 + 1) {
        _FileRead(&local_1f,1);
        *pbVar5 = local_1f;
        pbVar5 = pbVar5 + 1;
      }
      puVar7[iVar3 + 8] = 0;
      _FileRead(&local_1e,1);
      for (iVar3 = 0; iVar3 < (int)(uint)local_1e; iVar3 = iVar3 + 1) {
        _FileRead(&local_1f,1);
      }
      _FileRead(&local_1e,1);
      local_cc = local_cc + 0xc;
      puVar7 = puVar7 + 0xc;
    }
    _FileRead(&_NoBonusStages,1);
    puVar7 = &_BStageList;
    local_c8 = 0;
    for (local_a0 = 0; local_a0 < (int)(uint)_NoBonusStages; local_a0 = local_a0 + 1) {
      _FileRead(&local_1e,1);
      pbVar5 = &_BStageList + local_c8;
      for (iVar3 = 0; iVar3 < (int)(uint)local_1e; iVar3 = iVar3 + 1) {
        _FileRead(&local_1f,1);
        *pbVar5 = local_1f;
        pbVar5 = pbVar5 + 1;
      }
      puVar7[iVar3] = 0;
      _FileRead(&local_1e,1);
      pbVar5 = puVar7 + 8;
      for (iVar3 = 0; iVar3 < (int)(uint)local_1e; iVar3 = iVar3 + 1) {
        _FileRead(&local_1f,1);
        *pbVar5 = local_1f;
        pbVar5 = pbVar5 + 1;
      }
      puVar7[iVar3 + 8] = 0;
      _FileRead(&local_1e,1);
      for (iVar3 = 0; iVar3 < (int)(uint)local_1e; iVar3 = iVar3 + 1) {
        _FileRead(&local_1f,1);
      }
      _FileRead(&local_1e,1);
      local_c8 = local_c8 + 0xc;
      puVar7 = puVar7 + 0xc;
    }
    if (_CFileHandle != (FILE *)0x0) {
      _fclose(_CFileHandle);
    }
  }
  return;
}
