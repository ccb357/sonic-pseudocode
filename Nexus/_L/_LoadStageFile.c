
undefined1 _LoadStageFile(int param_1,int param_2,undefined4 param_3)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  char local_5c [76];
  
  iVar4 = 0;
  pcVar5 = "Data/Stages/";
  while( true ) {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    if (cVar1 == '\0') break;
    local_5c[iVar4] = cVar1;
    iVar4 = iVar4 + 1;
  }
  local_5c[iVar4] = '\0';
  if (_ActiveStageList == '\x01') {
    for (iVar4 = 0; local_5c[iVar4] != '\0'; iVar4 = iVar4 + 1) {
    }
    pcVar5 = local_5c + iVar4;
    for (iVar3 = 0; (&_ZStageList)[iVar3 + param_2 * 0xc] != '\0'; iVar3 = iVar3 + 1) {
      *pcVar5 = (&_ZStageList)[iVar3 + param_2 * 0xc];
      pcVar5 = pcVar5 + 1;
    }
  }
  else if (_ActiveStageList == '\0') {
    for (iVar3 = 0; local_5c[iVar3] != '\0'; iVar3 = iVar3 + 1) {
    }
    pcVar5 = local_5c + iVar3;
    for (iVar4 = 0; (&_PStageList)[iVar4 + param_2 * 0xc] != '\0'; iVar4 = iVar4 + 1) {
      *pcVar5 = (&_PStageList)[iVar4 + param_2 * 0xc];
      pcVar5 = pcVar5 + 1;
    }
  }
  else if (_ActiveStageList == '\x02') {
    for (iVar4 = 0; local_5c[iVar4] != '\0'; iVar4 = iVar4 + 1) {
    }
    pcVar5 = local_5c + iVar4;
    for (iVar3 = 0; (&_BStageList)[iVar3 + param_2 * 0xc] != '\0'; iVar3 = iVar3 + 1) {
      *pcVar5 = (&_BStageList)[iVar3 + param_2 * 0xc];
      pcVar5 = pcVar5 + 1;
    }
  }
  else {
    if (_ActiveStageList != '\x03') goto LAB_0000453d;
    for (iVar4 = 0; local_5c[iVar4] != '\0'; iVar4 = iVar4 + 1) {
    }
    pcVar5 = local_5c + iVar4;
    for (iVar3 = 0; (&_SStageList)[iVar3 + param_2 * 0xc] != '\0'; iVar3 = iVar3 + 1) {
      *pcVar5 = (&_SStageList)[iVar3 + param_2 * 0xc];
      pcVar5 = pcVar5 + 1;
    }
  }
  local_5c[iVar4 + iVar3] = '\0';
LAB_0000453d:
  for (iVar4 = 0; local_5c[iVar4] != '\0'; iVar4 = iVar4 + 1) {
  }
  pcVar6 = "/";
  pcVar5 = local_5c + iVar4;
  while( true ) {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    if (cVar1 == '\0') break;
    *pcVar5 = cVar1;
    iVar4 = iVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  local_5c[iVar4] = '\0';
  for (iVar4 = 0; local_5c[iVar4] != '\0'; iVar4 = iVar4 + 1) {
  }
  pcVar5 = local_5c + iVar4;
  for (iVar3 = 0; *(char *)(param_1 + iVar3) != '\0'; iVar3 = iVar3 + 1) {
    *pcVar5 = *(char *)(param_1 + iVar3);
    pcVar5 = pcVar5 + 1;
  }
  local_5c[iVar3 + iVar4] = '\0';
  uVar2 = _LoadFile(local_5c,param_3);
  return uVar2;
}

