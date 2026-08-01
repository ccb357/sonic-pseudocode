void _ConvertFunctionText(int param_1)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int *piVar7;
  int iVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  undefined1 *puVar11;
  undefined *puVar12;
  int local_140;
  int local_13c;
  int local_138;
  char local_120 [128];
  char local_a0 [128];
  int local_20 [4];
  
  for (iVar4 = 0; (cVar1 = *(char *)(param_1 + iVar4), cVar1 != '(' && (cVar1 != '\0'));
      iVar4 = iVar4 + 1) {
    local_a0[iVar4] = cVar1;
  }
  local_a0[iVar4] = '\0';
  ppuVar9 = &_ScriptOpcodeNames;
  iVar4 = 0;
  iVar8 = 0;
  do {
    cVar1 = _StringComp(local_a0,ppuVar9);
    if (cVar1 == '\x01') {
      local_13c = (int)(char)(&_ScriptOpcodeSizes)[iVar8];
      local_138 = _StringLength(ppuVar9);
      iVar4 = iVar8;
    }
    iVar8 = iVar8 + 1;
    ppuVar9 = ppuVar9 + 8;
  } while (iVar8 != 0x5e);
  if (0 < iVar4) {
    (&_ScriptData)[_ScriptDataPos] = iVar4;
    _ScriptDataPos = _ScriptDataPos + 1;
    ppuVar9 = &_ScriptOpcodeNames + iVar4 * 8;
    cVar1 = _StringComp("else",ppuVar9);
    if (cVar1 == '\x01') {
      (&_JumpTableData)[(&_JumpTableStack)[_JumpTableStackPos]] = _ScriptDataPos - _ScriptDataOff set
      ;
    }
    cVar1 = _StringComp("endif",ppuVar9);
    if (cVar1 == '\x01') {
      iVar4 = (&_JumpTableStack)[_JumpTableStackPos];
      iVar8 = _ScriptDataPos - _ScriptDataOffset;
      (&DAT_004b8d84)[iVar4] = iVar8;
      if ((&_JumpTableData)[iVar4] == -1) {
        (&_JumpTableData)[iVar4] = iVar8 + -1;
      }
      _JumpTableStackPos = _JumpTableStackPos + -1;
    }
    cVar1 = _StringComp("endswitch",ppuVar9);
    if (cVar1 == '\x01') {
      iVar8 = (&_JumpTableStack)[_JumpTableStackPos];
      iVar5 = _ScriptDataPos - _ScriptDataOffset;
      *(int *)(&DAT_004b8d8c + iVar8 * 4) = iVar5;
      iVar4 = iVar8 + 2;
      if ((&_JumpTableData)[iVar4] == -1) {
        (&_JumpTableData)[iVar4] = iVar5 + -1;
        iVar5 = (&DAT_004b8d84)[iVar8] - (&_JumpTableData)[iVar8];
        if (iVar5 < 0) {
          iVar5 = -iVar5;
        }
        puVar6 = &_JumpTableData + iVar8;
        for (iVar8 = 0; iVar8 < iVar5 + 1; iVar8 = iVar8 + 1) {
          if ((int)puVar6[4] < 0) {
            puVar6[4] = (&_JumpTableData)[iVar4];
          }
          puVar6 = puVar6 + 1;
        }
      }
      _JumpTableStackPos = _JumpTableStackPos + -1;
    }
    cVar1 = _StringComp("loop",ppuVar9);
    if (cVar1 == '\x01') {
      (&DAT_004b8d84)[(&_JumpTableStack)[_JumpTableStackPos]] = _ScriptDataPos - _ScriptDataOffse t;
      _JumpTableStackPos = _JumpTableStackPos + -1;
    }
    for (local_140 = 0; local_140 < local_13c; local_140 = local_140 + 1) {
      iVar5 = 0;
      iVar4 = 0;
      iVar8 = 0;
      while( true ) {
        local_138 = local_138 + 1;
        cVar1 = *(char *)(param_1 + local_138);
        if (((cVar1 == ',') || (cVar1 == ')')) || (cVar1 == '\0')) break;
        if (iVar8 == 0) {
          if (cVar1 == '[') {
            iVar8 = 1;
          }
          else {
            local_a0[iVar4] = cVar1;
            iVar4 = iVar4 + 1;
          }
        }
        else if (cVar1 == ']') {
          iVar8 = 0;
        }
        else {
          local_120[iVar5] = cVar1;
          iVar5 = iVar5 + 1;
        }
      }
      local_20[0] = iVar8;
      local_a0[iVar4] = '\0';
      local_120[iVar5] = '\0';
      puVar12 = &_AliasVariables;
      puVar10 = &_AliasNames;
      for (iVar4 = 0; iVar4 < (int)(uint)_NO_ALIASES; iVar4 = iVar4 + 1) {
        cVar1 = _StringComp(local_a0,puVar10);
        if (cVar1 == '\x01') {
          _StrCopy(local_a0,puVar12);
        }
        puVar12 = puVar12 + 0x20;
        puVar10 = puVar10 + 0x20;
      }
      puVar11 = &_GlobalVariableNames;
      for (iVar4 = 0; iVar4 < (int)(uint)_NO_GLOBALVARIABLES; iVar4 = iVar4 + 1) {
        cVar1 = _StringComp(local_a0,puVar11);
        if (cVar1 == '\x01') {
          _StrCopy(local_a0,"Global");
          local_120[0] = '\0';
          _AppendIntegerToString(local_120,iVar4);
        }
        puVar11 = puVar11 + 0x20;
      }
      cVar1 = _ConvertStringToInteger(local_a0,local_20);
      if (cVar1 == '\x01') {
        (&_ScriptData)[_ScriptDataPos] = 2;
        (&DAT_004e6454)[_ScriptDataPos] = local_20[0];
        _ScriptDataPos = _ScriptDataPos + 2;
      }
      else {
        if (local_a0[0] == '\"') {
          (&_ScriptData)[_ScriptDataPos] = 3;
          iVar8 = _ScriptDataPos + 1;
          _ScriptDataPos = iVar8;
          iVar4 = _StringLength(local_a0);
          (&_ScriptData)[iVar8] = iVar4 + -2;
          _ScriptDataPos = _ScriptDataPos + 1;
          iVar4 = 1;
LAB_0000b45d:
          (&_ScriptData)[_ScriptDataPos] = (int)local_a0[iVar4] << 0x18;
          pcVar3 = local_a0 + iVar4;
          uVar2 = 1;
          piVar7 = &_ScriptData + _ScriptDataPos;
          do {
            if (*pcVar3 == '\"') {
              if (uVar2 != 0) {
                _ScriptDataPos = _ScriptDataPos + 1;
              }
              goto LAB_0000b69a;
            }
            iVar4 = iVar4 + 1;
            if (iVar4 < 0) goto LAB_0000b69a;
            if (uVar2 == 1) {
              *piVar7 = *piVar7 + pcVar3[1] * 0x10000;
              uVar2 = 2;
            }
            else if (uVar2 < 2) {
              if (uVar2 == 0) goto LAB_0000b45d;
            }
            else if (uVar2 == 2) {
              *piVar7 = *piVar7 + pcVar3[1] * 0x100;
              uVar2 = 3;
            }
            else if (uVar2 == 3) {
              *piVar7 = *piVar7 + (int)pcVar3[1];
              _ScriptDataPos = _ScriptDataPos + 1;
              piVar7 = piVar7 + 1;
              uVar2 = 0;
            }
            pcVar3 = pcVar3 + 1;
          } while( true );
        }
        (&_ScriptData)[_ScriptDataPos] = 1;
        iVar4 = _ScriptDataPos + 1;
        if (local_120[0] == '\0') {
          (&_ScriptData)[iVar4] = 0;
        }
        else {
          (&_ScriptData)[iVar4] = 1;
          if (local_120[0] == '+') {
            (&_ScriptData)[iVar4] = 2;
          }
          else if (local_120[0] == '-') {
            (&_ScriptData)[iVar4] = 3;
          }
          _ScriptDataPos = _ScriptDataPos + 2;
          if (local_120[0] == '+' || local_120[0] == '-') {
            for (iVar4 = 0; iVar8 = _StringLength(local_120), iVar4 < iVar8; iVar4 = iVar4 + 1) {
              local_120[iVar4] = local_120[iVar4 + 1];
            }
          }
          cVar1 = _ConvertStringToInteger(local_120,local_20);
          if (cVar1 == '\x01') {
            (&_ScriptData)[_ScriptDataPos] = 0;
            (&DAT_004e6454)[_ScriptDataPos] = local_20[0];
          }
          else {
            cVar1 = _StringComp(local_120,"ArrayPos0");
            iVar4 = 0;
            if (cVar1 != '\x01') {
              iVar4 = local_20[0];
            }
            local_20[0] = iVar4;
            cVar1 = _StringComp(local_120,"ArrayPos1");
            iVar4 = 1;
            if (cVar1 != '\x01') {
              iVar4 = local_20[0];
            }
            local_20[0] = iVar4;
            cVar1 = _StringComp(local_120,"TempObjectPos");
            iVar4 = 2;
            if (cVar1 != '\x01') {
              iVar4 = local_20[0];
            }
            (&_ScriptData)[_ScriptDataPos] = 1;
            (&DAT_004e6454)[_ScriptDataPos] = iVar4;
          }
        }
        _ScriptDataPos = _ScriptDataPos + 2;
        local_20[0] = 0;
        pcVar3 = "Object.Type";
        iVar4 = 0;
        do {
          cVar1 = _StringComp(local_a0,pcVar3);
          if (cVar1 == '\x01') {
            local_20[0] = iVar4;
          }
          iVar4 = iVar4 + 1;
          pcVar3 = pcVar3 + 0x20;
        } while (iVar4 != 0x83);
        (&_ScriptData)[_ScriptDataPos] = local_20[0];
        _ScriptDataPos = _ScriptDataPos + 1;
      }
LAB_0000b69a:
    }
  }
  return;
}
