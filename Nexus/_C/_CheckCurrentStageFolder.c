undefined4 _CheckCurrentStageFolder(int param_1)

{
  char cVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  char *pcVar5;
  undefined1 *local_20;
  undefined1 *local_1c;
  undefined1 *local_18;
  undefined1 *local_14;
  
  if (_ActiveStageList == '\x01') {
    local_1c = &DAT_0001c021;
    pcVar5 = &_ZStageList + param_1 * 0xc;
    while( true ) {
      cVar1 = local_1c[-1];
      cVar2 = *pcVar5;
      if (cVar1 != cVar2) {
        if (((int)cVar1 != cVar2 + 0x20) && ((int)cVar1 != cVar2 + -0x20)) {
          bVar3 = false;
          goto LAB_000038f5;
        }
      }
      local_1c = local_1c + 1;
      if (cVar1 == '\0') break;
      pcVar5 = pcVar5 + 1;
    }
    bVar3 = true;
LAB_000038f5:
    if (bVar3) {
      return 1;
    }
    for (iVar4 = 0; cVar1 = (&_ZStageList + param_1 * 0xc)[iVar4], cVar1 != '\0'; iVar4 = iVar4 + 1)
    {
      (&_CurrentStageFolder)[iVar4] = cVar1;
    }
  }
  else if (_ActiveStageList == '\0') {
    local_20 = &DAT_0001c021;
    pcVar5 = &_PStageList + param_1 * 0xc;
    while( true ) {
      cVar1 = local_20[-1];
      cVar2 = *pcVar5;
      if (cVar1 != cVar2) {
        if (((int)cVar1 != cVar2 + 0x20) && ((int)cVar1 != cVar2 + -0x20)) {
          bVar3 = false;
          goto LAB_000038e1;
        }
      }
      local_20 = local_20 + 1;
      if (cVar1 == '\0') break;
      pcVar5 = pcVar5 + 1;
    }
    bVar3 = true;
LAB_000038e1:
    if (bVar3) {
      return 1;
    }
    for (iVar4 = 0; cVar1 = (&_PStageList + param_1 * 0xc)[iVar4], cVar1 != '\0'; iVar4 = iVar4 + 1)
    {
      (&_CurrentStageFolder)[iVar4] = cVar1;
    }
  }
  else if (_ActiveStageList == '\x02') {
    local_18 = &DAT_0001c021;
    pcVar5 = &_BStageList + param_1 * 0xc;
    while( true ) {
      cVar1 = local_18[-1];
      cVar2 = *pcVar5;
      if (cVar1 != cVar2) {
        if (((int)cVar1 != cVar2 + 0x20) && ((int)cVar1 != cVar2 + -0x20)) {
          bVar3 = false;
          goto LAB_00003909;
        }
      }
      local_18 = local_18 + 1;
      if (cVar1 == '\0') break;
      pcVar5 = pcVar5 + 1;
    }
    bVar3 = true;
LAB_00003909:
    if (bVar3) {
      return 1;
    }
    for (iVar4 = 0; cVar1 = (&_BStageList + param_1 * 0xc)[iVar4], cVar1 != '\0'; iVar4 = iVar4 + 1)
    {
      (&_CurrentStageFolder)[iVar4] = cVar1;
    }
  }
  else {
    if (_ActiveStageList != '\x03') {
      return 0;
    }
    local_14 = &DAT_0001c021;
    pcVar5 = &_SStageList + param_1 * 0xc;
    while( true ) {
      cVar1 = local_14[-1];
      cVar2 = *pcVar5;
      if (cVar1 != cVar2) {
        if (((int)cVar1 != cVar2 + 0x20) && ((int)cVar1 != cVar2 + -0x20)) {
          bVar3 = false;
          goto LAB_0000391d;
        }
      }
      local_14 = local_14 + 1;
      if (cVar1 == '\0') break;
      pcVar5 = pcVar5 + 1;
    }
    bVar3 = true;
LAB_0000391d:
    if (bVar3) {
      return 1;
    }
    for (iVar4 = 0; cVar1 = (&_SStageList + param_1 * 0xc)[iVar4], cVar1 != '\0'; iVar4 = iVar4 + 1)
    {
      (&_CurrentStageFolder)[iVar4] = cVar1;
    }
  }
  (&_CurrentStageFolder)[iVar4] = 0;
  return 0;
}
