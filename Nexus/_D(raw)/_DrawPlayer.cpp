void _DrawPlayer(int param_1,undefined4 *param_2)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = *(char *)(param_1 + 0x30) - 5;
  if ((bVar1 < 0x1e) && ((1 << (bVar1 & 0x1f) & 0x2000000bU) != 0)) {
    iVar2 = *(int *)(param_1 + 0x20);
    if (iVar2 < 0x80) {
      iVar2 = (iVar2 + 10 >> 5) << 6;
    }
    else {
      iVar2 = (0x10a - iVar2 >> 5) * -0x40 + 0x200;
    }
  }
  else {
    iVar2 = 0;
  }
  _DrawRotatedSprite(*(undefined1 *)(param_1 + 0x34),*(undefined4 *)(param_1 + 0x14),
                     *(undefined4 *)(param_1 + 0x18),-param_2[4],-param_2[5],*param_2,param_2[1],
                     param_2[2],param_2[3],iVar2,*(undefined1 *)(param_2 + 6));
  return;
}
