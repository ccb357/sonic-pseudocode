void _CalculateTrigAngles(void)

{
  astruct_3 *iVar1;
  astruct_6 *iVar2;
  astruct_5 *piVar3;
  astruct_8 *piVar1;
  astruct_4 *piVar4;
  astruct_7 *piVar2;
  longdouble lVar1;
  float fVar2;
  
  iVar2 = (astruct_6 *)0x0;
  piVar2 = (astruct_7 *)&_SinValue512;
  piVar1 = (astruct_8 *)&_CosValue512;
  do {
    fVar2 = (float)(int)iVar2 * 0.00390625 * 3.1415927;
    lVar1 = (longdouble)_sinf(fVar2);
    piVar2->field0_0x0 = (int)((float)lVar1 * 512.0);
    lVar1 = (longdouble)_cosf(fVar2);
    piVar1->field0_0x0 = (int)((float)lVar1 * 512.0);
    iVar2 = iVar2 + 1;
    piVar2 = piVar2 + 1;
    piVar1 = piVar1 + 1;
  } while (iVar2 != (astruct_6 *)0x200);
  _SinValue512 = 0;
  _CosValue512 = 0x200;
  DAT_0045def0 = 0x200;
  DAT_000377b0 = 0;
  DAT_0045e0f0 = 0;
  DAT_000379b0 = 0xfffffe00;
  DAT_0045e2f0 = 0xfffffe00;
  DAT_00037bb0 = 0;
  iVar1 = (astruct_3 *)0x0;
  piVar4 = (astruct_4 *)&_SinValue256;
  piVar3 = (astruct_5 *)&_CosValue256;
  do {
    piVar4->field0_0x0 = (int)(&_SinValue512)[(int)iVar1 * 2] >> 1;
    piVar3->field0_0x0 = (int)(&_CosValue512)[(int)iVar1 * 2] >> 1;
    iVar1 = iVar1 + 1;
    piVar4 = piVar4 + 1;
    piVar3 = piVar3 + 1;
  } while (iVar1 != (astruct_3 *)0x100);
  return;
}
