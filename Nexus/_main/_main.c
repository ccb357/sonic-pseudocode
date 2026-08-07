undefined4 _main(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  bool bVar8;
  
  bVar8 = param_1 == 1;
  if (1 < param_1) {
    iVar3 = 4;
    pcVar4 = (char *)param_2[1];
    pcVar6 = "-psn";
    do {
      pcVar5 = pcVar4;
      pcVar7 = pcVar6;
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      pcVar7 = pcVar6 + 1;
      pcVar5 = pcVar4 + 1;
      bVar8 = *pcVar4 == *pcVar6;
      pcVar4 = pcVar5;
      pcVar6 = pcVar7;
    } while (bVar8);
    iVar3 = 0;
    if (!bVar8) {
      iVar3 = (uint)(byte)pcVar5[-1] - (uint)(byte)pcVar7[-1];
    }
    if (iVar3 == 0) {
      puVar1 = _malloc(8);
      _gArgv = puVar1;
      *puVar1 = *param_2;
      puVar1[1] = 0;
      _gArgc = 1;
      _gFinderLaunch = 1;
      goto LAB_0000314e;
    }
  }
  _gArgc = param_1;
  puVar1 = _malloc(param_1 * 4 + 4);
  _gArgv = puVar1;
  for (iVar3 = 0; iVar3 <= param_1; iVar3 = iVar3 + 1) {
    puVar1[iVar3] = param_2[iVar3];
  }
  _gFinderLaunch = 0;
LAB_0000314e:
  uVar2 = _objc_msgSend("NSApplication","class");
  _objc_msgSend("SDLApplication","poseAsClass:",uVar2);
  _NSApplicationMain(param_1,param_2);
  return 0;
}
