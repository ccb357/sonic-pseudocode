void _DrawTextMenu(int param_1,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  int local_74;
  int local_70;
  int local_6c;
  int local_64;
  int local_60;
  int local_28;
  int local_24;
  int local_20;
  
  if (section_00001470.segname[param_1 + 6] == '\x03') {
    section_00001470.segname[param_1 + 8] = -1;
    cVar1 = section_00001470.segname[param_1 + 7];
    iVar3 = param_1;
    for (iVar2 = 0; iVar2 < cVar1 + 1; iVar2 = iVar2 + 1) {
      if (segment_command_000013f4.segname[iVar3 + 4] == '\x01') {
        section_00001470.segname[param_1 + 8] = (char)iVar2;
      }
      iVar3 = iVar3 + 1;
    }
  }
  cVar1 = section_00001470.segname[param_1 + 5];
  if (cVar1 == '\x01') {
    local_64 = param_1;
    local_24 = 0;
    iVar3 = (int)section_00001470.segname[param_1 + 4];
    for (; local_24 < iVar3; local_24 = local_24 + 1) {
      iVar2 = param_2 + *(int *)(section_000011e0.segname + local_64 + 0x10) * -8;
      cVar1 = section_00001470.segname[param_1 + 6];
      if (cVar1 == '\x02') {
        if (local_24 == section_00001470.segname[param_1 + 7] ||
            local_24 == section_00001470.segname[param_1 + 8]) {
          pcVar4 = (char *)(param_1 + *(int *)(param_1 + 0x1000 + (char)local_24 * 4));
          for (iVar3 = 0; iVar3 < *(int *)(param_1 + 0x1200 + (char)local_24 * 4); iVar3 = iVar3 + 1
              ) {
            if ('\0' < *pcVar4) {
              _DrawSprite(iVar2,param_3,8,8,8,*pcVar4 * 8 + -8,(int)_TextMenuSurfaceNo);
            }
            iVar2 = iVar2 + 8;
            pcVar4 = pcVar4 + 1;
          }
        }
        else {
          pcVar4 = (char *)(param_1 + *(int *)(param_1 + 0x1000 + (char)local_24 * 4));
          for (iVar3 = 0; iVar3 < *(int *)(param_1 + 0x1200 + (char)local_24 * 4); iVar3 = iVar3 + 1
              ) {
            if ('\0' < *pcVar4) {
              _DrawSprite(iVar2,param_3,8,8,0,*pcVar4 * 8 + -8,(int)_TextMenuSurfaceNo);
            }
            iVar2 = iVar2 + 8;
            pcVar4 = pcVar4 + 1;
          }
        }
LAB_00009e70:
        iVar3 = (int)section_00001470.segname[param_1 + 4];
      }
      else if (cVar1 == '\x03') {
        if (local_24 == section_00001470.segname[param_1 + 7]) {
          pcVar4 = (char *)(param_1 + *(int *)(param_1 + 0x1000 + (char)local_24 * 4));
          iVar3 = iVar2;
          for (iVar5 = 0; iVar5 < *(int *)(param_1 + 0x1200 + (char)local_24 * 4); iVar5 = iVar5 + 1
              ) {
            if ('\0' < *pcVar4) {
              _DrawSprite(iVar3,param_3,8,8,8,*pcVar4 * 8 + -8,(int)_TextMenuSurfaceNo);
            }
            iVar3 = iVar3 + 8;
            pcVar4 = pcVar4 + 1;
          }
        }
        else {
          pcVar4 = (char *)(param_1 + *(int *)(param_1 + 0x1000 + (char)local_24 * 4));
          iVar3 = iVar2;
          for (iVar5 = 0; iVar5 < *(int *)(param_1 + 0x1200 + (char)local_24 * 4); iVar5 = iVar5 + 1
              ) {
            if ('\0' < *pcVar4) {
              _DrawSprite(iVar3,param_3,8,8,0,*pcVar4 * 8 + -8,(int)_TextMenuSurfaceNo);
            }
            iVar3 = iVar3 + 8;
            pcVar4 = pcVar4 + 1;
          }
        }
        local_70 = (int)(char)local_24;
        if (local_24 == section_00001470.segname[param_1 + 8]) {
          if (local_24 == section_00001470.segname[param_1 + 7]) {
            iVar3 = (int)section_00001470.segname[param_1 + 4];
            goto LAB_00009fd7;
          }
          _DrawStageTextEntry(param_1,local_70,iVar2,param_3,8);
        }
        iVar3 = (int)section_00001470.segname[param_1 + 4];
      }
      else if (cVar1 == '\x01') {
        if (local_24 == section_00001470.segname[param_1 + 7]) {
          pcVar4 = (char *)(param_1 + *(int *)(param_1 + 0x1000 + (char)local_24 * 4));
          for (iVar3 = 0; iVar3 < *(int *)(param_1 + 0x1200 + (char)local_24 * 4); iVar3 = iVar3 + 1
              ) {
            if ('\0' < *pcVar4) {
              _DrawSprite(iVar2,param_3,8,8,8,*pcVar4 * 8 + -8,(int)_TextMenuSurfaceNo);
            }
            iVar2 = iVar2 + 8;
            pcVar4 = pcVar4 + 1;
          }
        }
        else {
          pcVar4 = (char *)(param_1 + *(int *)(param_1 + 0x1000 + (char)local_24 * 4));
          for (iVar3 = 0; iVar3 < *(int *)(param_1 + 0x1200 + (char)local_24 * 4); iVar3 = iVar3 + 1
              ) {
            if ('\0' < *pcVar4) {
              _DrawSprite(iVar2,param_3,8,8,0,*pcVar4 * 8 + -8,(int)_TextMenuSurfaceNo);
            }
            iVar2 = iVar2 + 8;
            pcVar4 = pcVar4 + 1;
          }
        }
        goto LAB_00009e70;
      }
LAB_00009fd7:
      param_3 = param_3 + 8;
      local_64 = local_64 + 4;
    }
  }
  else if (cVar1 == '\x02') {
    local_60 = param_1;
    local_20 = 0;
    iVar3 = (int)section_00001470.segname[param_1 + 4];
    for (; local_20 < iVar3; local_20 = local_20 + 1) {
      iVar2 = param_2 + (*(int *)(section_000011e0.segname + local_60 + 0x10) >> 1) * -8;
      cVar1 = section_00001470.segname[param_1 + 6];
      if (cVar1 == '\x02') {
        if (local_20 == section_00001470.segname[param_1 + 7] ||
            local_20 == section_00001470.segname[param_1 + 8]) {
          pcVar4 = (char *)(param_1 + *(int *)(param_1 + 0x1000 + (char)local_20 * 4));
          for (iVar3 = 0; iVar3 < *(int *)(param_1 + 0x1200 + (char)local_20 * 4); iVar3 = iVar3 + 1
              ) {
            if ('\0' < *pcVar4) {
              _DrawSprite(iVar2,param_3,8,8,8,*pcVar4 * 8 + -8,(int)_TextMenuSurfaceNo);
            }
            iVar2 = iVar2 + 8;
            pcVar4 = pcVar4 + 1;
          }
        }
        else {
          pcVar4 = (char *)(param_1 + *(int *)(param_1 + 0x1000 + (char)local_20 * 4));
          for (iVar3 = 0; iVar3 < *(int *)(param_1 + 0x1200 + (char)local_20 * 4); iVar3 = iVar3 + 1
              ) {
            if ('\0' < *pcVar4) {
              _DrawSprite(iVar2,param_3,8,8,0,*pcVar4 * 8 + -8,(int)_TextMenuSurfaceNo);
            }
            iVar2 = iVar2 + 8;
            pcVar4 = pcVar4 + 1;
          }
        }
LAB_0000a24f:
        iVar3 = (int)section_00001470.segname[param_1 + 4];
      }
      else if (cVar1 == '\x03') {
        if (local_20 == section_00001470.segname[param_1 + 7]) {
          pcVar4 = (char *)(param_1 + *(int *)(param_1 + 0x1000 + (char)local_20 * 4));
          iVar3 = iVar2;
          for (iVar5 = 0; iVar5 < *(int *)(param_1 + 0x1200 + (char)local_20 * 4); iVar5 = iVar5 + 1
              ) {
            if ('\0' < *pcVar4) {
              _DrawSprite(iVar3,param_3,8,8,8,*pcVar4 * 8 + -8,(int)_TextMenuSurfaceNo);
            }
            iVar3 = iVar3 + 8;
            pcVar4 = pcVar4 + 1;
          }
        }
        else {
          pcVar4 = (char *)(param_1 + *(int *)(param_1 + 0x1000 + (char)local_20 * 4));
          iVar3 = iVar2;
          for (iVar5 = 0; iVar5 < *(int *)(param_1 + 0x1200 + (char)local_20 * 4); iVar5 = iVar5 + 1
              ) {
            if ('\0' < *pcVar4) {
              _DrawSprite(iVar3,param_3,8,8,0,*pcVar4 * 8 + -8,(int)_TextMenuSurfaceNo);
            }
            iVar3 = iVar3 + 8;
            pcVar4 = pcVar4 + 1;
          }
        }
        local_6c = (int)(char)local_20;
        if (local_20 == section_00001470.segname[param_1 + 8]) {
          if (local_20 == section_00001470.segname[param_1 + 7]) {
            iVar3 = (int)section_00001470.segname[param_1 + 4];
            goto LAB_0000a3b6;
          }
          _DrawStageTextEntry(param_1,local_6c,iVar2,param_3,8);
        }
        iVar3 = (int)section_00001470.segname[param_1 + 4];
      }
      else if (cVar1 == '\x01') {
        if (local_20 == section_00001470.segname[param_1 + 7]) {
          pcVar4 = (char *)(param_1 + *(int *)(param_1 + 0x1000 + (char)local_20 * 4));
          for (iVar3 = 0; iVar3 < *(int *)(param_1 + 0x1200 + (char)local_20 * 4); iVar3 = iVar3 + 1
              ) {
            if ('\0' < *pcVar4) {
              _DrawSprite(iVar2,param_3,8,8,8,*pcVar4 * 8 + -8,(int)_TextMenuSurfaceNo);
            }
            iVar2 = iVar2 + 8;
            pcVar4 = pcVar4 + 1;
          }
        }
        else {
          pcVar4 = (char *)(param_1 + *(int *)(param_1 + 0x1000 + (char)local_20 * 4));
          for (iVar3 = 0; iVar3 < *(int *)(param_1 + 0x1200 + (char)local_20 * 4); iVar3 = iVar3 + 1
              ) {
            if ('\0' < *pcVar4) {
              _DrawSprite(iVar2,param_3,8,8,0,*pcVar4 * 8 + -8,(int)_TextMenuSurfaceNo);
            }
            iVar2 = iVar2 + 8;
            pcVar4 = pcVar4 + 1;
          }
        }
        goto LAB_0000a24f;
      }
LAB_0000a3b6:
      param_3 = param_3 + 8;
      local_60 = local_60 + 4;
    }
  }
  else if (cVar1 == '\0') {
    local_28 = 0;
    iVar3 = (int)section_00001470.segname[param_1 + 4];
    for (; local_28 < iVar3; local_28 = local_28 + 1) {
      cVar1 = section_00001470.segname[param_1 + 6];
      if (cVar1 == '\x02') {
        if (local_28 == section_00001470.segname[param_1 + 7] ||
            local_28 == section_00001470.segname[param_1 + 8]) {
          pcVar4 = (char *)(param_1 + *(int *)(param_1 + 0x1000 + (char)local_28 * 4));
          iVar3 = param_2;
          for (iVar2 = 0; iVar2 < *(int *)(param_1 + 0x1200 + (char)local_28 * 4); iVar2 = iVar2 + 1
              ) {
            if ('\0' < *pcVar4) {
              _DrawSprite(iVar3,param_3,8,8,8,*pcVar4 * 8 + -8,(int)_TextMenuSurfaceNo);
            }
            iVar3 = iVar3 + 8;
            pcVar4 = pcVar4 + 1;
          }
        }
        else {
          pcVar4 = (char *)(param_1 + *(int *)(param_1 + 0x1000 + (char)local_28 * 4));
          iVar3 = param_2;
          for (iVar2 = 0; iVar2 < *(int *)(param_1 + 0x1200 + (char)local_28 * 4); iVar2 = iVar2 + 1
              ) {
            if ('\0' < *pcVar4) {
              _DrawSprite(iVar3,param_3,8,8,0,*pcVar4 * 8 + -8,(int)_TextMenuSurfaceNo);
            }
            iVar3 = iVar3 + 8;
            pcVar4 = pcVar4 + 1;
          }
        }
LAB_00009a97:
        iVar3 = (int)section_00001470.segname[param_1 + 4];
      }
      else if (cVar1 == '\x03') {
        if (local_28 == section_00001470.segname[param_1 + 7]) {
          pcVar4 = (char *)(param_1 + *(int *)(param_1 + 0x1000 + (char)local_28 * 4));
          iVar3 = param_2;
          for (iVar2 = 0; iVar2 < *(int *)(param_1 + 0x1200 + (char)local_28 * 4); iVar2 = iVar2 + 1
              ) {
            if ('\0' < *pcVar4) {
              _DrawSprite(iVar3,param_3,8,8,8,*pcVar4 * 8 + -8,(int)_TextMenuSurfaceNo);
            }
            iVar3 = iVar3 + 8;
            pcVar4 = pcVar4 + 1;
          }
        }
        else {
          pcVar4 = (char *)(param_1 + *(int *)(param_1 + 0x1000 + (char)local_28 * 4));
          iVar3 = param_2;
          for (iVar2 = 0; iVar2 < *(int *)(param_1 + 0x1200 + (char)local_28 * 4); iVar2 = iVar2 + 1
              ) {
            if ('\0' < *pcVar4) {
              _DrawSprite(iVar3,param_3,8,8,0,*pcVar4 * 8 + -8,(int)_TextMenuSurfaceNo);
            }
            iVar3 = iVar3 + 8;
            pcVar4 = pcVar4 + 1;
          }
        }
        local_74 = (int)(char)local_28;
        if (local_28 == section_00001470.segname[param_1 + 8]) {
          if (local_28 == section_00001470.segname[param_1 + 7]) {
            iVar3 = (int)section_00001470.segname[param_1 + 4];
            goto LAB_00009bfe;
          }
          _DrawStageTextEntry(param_1,local_74,param_2,param_3,8);
        }
        iVar3 = (int)section_00001470.segname[param_1 + 4];
      }
      else if (cVar1 == '\x01') {
        if (local_28 == section_00001470.segname[param_1 + 7]) {
          pcVar4 = (char *)(param_1 + *(int *)(param_1 + 0x1000 + (char)local_28 * 4));
          iVar3 = param_2;
          for (iVar2 = 0; iVar2 < *(int *)(param_1 + 0x1200 + (char)local_28 * 4); iVar2 = iVar2 + 1
              ) {
            if ('\0' < *pcVar4) {
              _DrawSprite(iVar3,param_3,8,8,8,*pcVar4 * 8 + -8,(int)_TextMenuSurfaceNo);
            }
            iVar3 = iVar3 + 8;
            pcVar4 = pcVar4 + 1;
          }
        }
        else {
          pcVar4 = (char *)(param_1 + *(int *)(param_1 + 0x1000 + (char)local_28 * 4));
          iVar3 = param_2;
          for (iVar2 = 0; iVar2 < *(int *)(param_1 + 0x1200 + (char)local_28 * 4); iVar2 = iVar2 + 1
              ) {
            if ('\0' < *pcVar4) {
              _DrawSprite(iVar3,param_3,8,8,0,*pcVar4 * 8 + -8,(int)_TextMenuSurfaceNo);
            }
            iVar3 = iVar3 + 8;
            pcVar4 = pcVar4 + 1;
          }
        }
        goto LAB_00009a97;
      }
LAB_00009bfe:
      param_3 = param_3 + 8;
    }
  }
  return;
}
