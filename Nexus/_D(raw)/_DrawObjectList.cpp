void _DrawObjectList(char param_1)

{
  byte bVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  
  puVar3 = PTR__PlayerList_007fe09c;
  iVar2 = (&DAT_004cb060)[param_1 * 0x4a1];
  for (iVar5 = 0; iVar5 < iVar2; iVar5 = iVar5 + 1) {
    _ObjectLoop = *(int *)(&_ObjectDrawOrderList + iVar5 * 4 + param_1 * 0x1284);
    bVar1 = (&DAT_004d1fb0)[_ObjectLoop * 0x38];
    if (bVar1 != 0) {
      if (bVar1 == 1) {
        _ProcessPlayerAnimationChange(puVar3 + _ObjectLoop * 0x78);
        puVar4 = puVar3 + _ObjectLoop * 0x78;
        if ((puVar4[100] == '\x01') &&
           (((byte)(&DAT_004d1fb1)[_ObjectLoop * 0x38] < 2 ||
            ((&DAT_004d1fb1)[_ObjectLoop * 0x38] == 2)))) {
          _DrawPlayer(puVar4,(uint)(byte)puVar4[0x33] * 0x1c +
                             *(int *)(&DAT_004e57f4 +
                                     (uint)(byte)puVar4[0x28] * 0xa54 + (uint)(byte)puVar4[0x30] *  8
                                     ));
        }
      }
      else {
        _PlayerNo = 0;
        if (0 < *(int *)(&DAT_004e229c)[(uint)bVar1 * 10]) {
          _ProcessScript((int *)(&DAT_004e229c)[(uint)bVar1 * 10],(&DAT_004e22ac)[(uint)bVar1 * 1 0],
                         2);
        }
      }
    }
  }
  return;
}
