void _LoadConfigListText(int param_1,char param_2)

{
  int *piVar1;
  char cVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_b0;
  int local_ac;
  int local_a8;
  int local_a4;
  int local_a0;
  undefined1 local_90 [81];
  char acStack_3f [32];
  char local_1f;
  byte local_1e;
  byte local_1d [13];
  
  cVar2 = _LoadFile("Data/Game/GameConfig.bin",local_90);
  if (cVar2 == '\x01') {
    _FileRead(&local_1e,1);
    for (iVar4 = 0; iVar4 < (int)(uint)local_1e; iVar4 = iVar4 + 1) {
      _FileRead(&local_1f,1);
    }
    _FileRead(&local_1e,1);
    for (iVar4 = 0; iVar4 < (int)(uint)local_1e; iVar4 = iVar4 + 1) {
      _FileRead(&local_1f,1);
    }
    _FileRead(&local_1e,1);
    for (iVar4 = 0; iVar4 < (int)(uint)local_1e; iVar4 = iVar4 + 1) {
      _FileRead(&local_1f,1);
    }
    _FileRead(local_1d,1);
    for (iVar4 = 0; iVar4 < (int)(uint)local_1d[0]; iVar4 = iVar4 + 1) {
      _FileRead(&local_1e,1);
      for (iVar5 = 0; iVar5 < (int)(uint)local_1e; iVar5 = iVar5 + 1) {
        _FileRead(&local_1f,1);
      }
    }
    _FileRead(local_1d,1);
    for (iVar4 = 0; iVar4 < (int)(uint)local_1d[0]; iVar4 = iVar4 + 1) {
      _FileRead(&local_1e,1);
      for (iVar5 = 0; iVar5 < (int)(uint)local_1e; iVar5 = iVar5 + 1) {
        _FileRead(&local_1f,1);
      }
      _FileRead(&local_1f,1);
      _FileRead(&local_1f,1);
      _FileRead(&local_1f,1);
      _FileRead(&local_1f,1);
    }
    _FileRead(local_1d,1);
    for (iVar4 = 0; iVar4 < (int)(uint)local_1d[0]; iVar4 = iVar4 + 1) {
      _FileRead(&local_1e,1);
      for (iVar5 = 0; iVar5 < (int)(uint)local_1e; iVar5 = iVar5 + 1) {
        _FileRead(&local_1f,1);
      }
    }
    _FileRead(local_1d,1);
    for (local_a4 = 0; local_a4 < (int)(uint)local_1d[0]; local_a4 = local_a4 + 1) {
      _FileRead(&local_1e,1);
      for (iVar4 = 0; iVar4 < (int)(uint)local_1e; iVar4 = iVar4 + 1) {
        _FileRead(&local_1f,1);
      }
      _FileRead(&local_1e,1);
      for (iVar4 = 0; iVar4 < (int)(uint)local_1e; iVar4 = iVar4 + 1) {
        _FileRead(&local_1f,1);
      }
      _FileRead(&local_1e,1);
      for (iVar4 = 0; iVar4 < (int)(uint)local_1e; iVar4 = iVar4 + 1) {
        _FileRead(&local_1f,1);
        acStack_3f[iVar4] = local_1f;
      }
      acStack_3f[iVar4] = '\0';
      if (param_2 == '\0') {
        iVar5 = (int)section_00001470.segname[param_1 + 4];
        iVar4 = *(int *)(section_00001470.segname + param_1);
        *(int *)(param_1 + 0x1000 + iVar5 * 4) = iVar4;
        *(undefined4 *)(param_1 + 0x1200 + iVar5 * 4) = 0;
        pcVar3 = (char *)(iVar4 + param_1);
        for (iVar6 = 0; cVar2 = acStack_3f[iVar6], cVar2 != '\0'; iVar6 = iVar6 + 1) {
          *pcVar3 = cVar2;
          if (cVar2 == ' ') {
            *pcVar3 = '\0';
          }
          if ((byte)(*pcVar3 - 0x30U) < 10) {
            *pcVar3 = *pcVar3 + -0x15;
          }
          if ((byte)(*pcVar3 - 0x3aU) < 0x2c) {
            *pcVar3 = *pcVar3 + -0x40;
          }
          iVar4 = iVar4 + 1;
          pcVar3 = pcVar3 + 1;
          *(int *)(section_00001470.segname + param_1) = iVar4;
          piVar1 = (int *)(param_1 + 0x1200 + iVar5 * 4);
          *piVar1 = *piVar1 + 1;
        }
        section_00001470.segname[param_1 + 4] = section_00001470.segname[param_1 + 4] + '\x01';
      }
    }
    local_b0 = 1;
    do {
      _FileRead(local_1d,1);
      local_a8 = param_1;
      for (local_a0 = 0; local_a0 < (int)(uint)local_1d[0]; local_a0 = local_a0 + 1) {
        _FileRead(&local_1e,1);
        for (iVar4 = 0; iVar4 < (int)(uint)local_1e; iVar4 = iVar4 + 1) {
          _FileRead(&local_1f,1);
        }
        _FileRead(&local_1e,1);
        for (iVar4 = 0; iVar4 < (int)(uint)local_1e; iVar4 = iVar4 + 1) {
          _FileRead(&local_1f,1);
        }
        _FileRead(&local_1e,1);
        for (iVar4 = 0; iVar4 < (int)(uint)local_1e; iVar4 = iVar4 + 1) {
          _FileRead(&local_1f,1);
          acStack_3f[iVar4] = local_1f;
        }
        acStack_3f[iVar4] = '\0';
        _FileRead(&local_1f,1);
        if (param_2 == local_b0) {
          segment_command_000013f4.segname[local_a8 + 4] = local_1f;
          iVar5 = (int)section_00001470.segname[param_1 + 4];
          iVar4 = *(int *)(section_00001470.segname + param_1);
          *(int *)(param_1 + 0x1000 + iVar5 * 4) = iVar4;
          *(undefined4 *)(param_1 + 0x1200 + iVar5 * 4) = 0;
          local_ac = 0;
          while( true ) {
            cVar2 = acStack_3f[local_ac];
            if (cVar2 == '\0') break;
            *(char *)(iVar4 + param_1) = cVar2;
            if (cVar2 == ' ') {
              *(undefined1 *)(iVar4 + param_1) = 0;
            }
            if ((byte)(*(char *)(iVar4 + param_1) - 0x30U) < 10) {
              *(char *)(iVar4 + param_1) = *(char *)(iVar4 + param_1) + -0x15;
            }
            if ((byte)(*(char *)(iVar4 + param_1) - 0x3aU) < 0x2c) {
              *(char *)(iVar4 + param_1) = *(char *)(iVar4 + param_1) + -0x40;
            }
            *(int *)(section_00001470.segname + param_1) = iVar4 + 1;
            piVar1 = (int *)(param_1 + 0x1200 + iVar5 * 4);
            *piVar1 = *piVar1 + 1;
            local_ac = local_ac + 1;
            iVar4 = iVar4 + 1;
          }
          section_00001470.segname[param_1 + 4] = section_00001470.segname[param_1 + 4] + '\x01';
        }
        local_a8 = local_a8 + 1;
      }
      local_b0 = local_b0 + 1;
    } while (local_b0 != 5);
    _CloseFile();
  }
  return;
}
