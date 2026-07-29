void _BasicCollision(int param_1,int param_2,int param_3,int param_4)

{
  char cVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  
  piVar6 = (int *)(PTR__PlayerList_007fe09c + (uint)_PlayerNo * 0x78);
  iVar5 = (uint)*(byte *)(piVar6 + 10) * 0xa54;
  iVar8 = *piVar6 >> 0x10;
  *(int *)PTR__CollisionLeft_007fe0b8 = iVar8;
  iVar7 = (int)*(short *)((int)piVar6 + 6);
  *(int *)PTR__CollisionTop_007fe0ac = iVar7;
  *(int *)PTR__CollisionRight_007fe098 = iVar8;
  *(int *)PTR__CollisionBottom_007fe0c4 = iVar7;
  cVar1 = PTR__PlayerCBoxes_007fe0b4
          [(uint)*(byte *)((uint)*(byte *)((int)piVar6 + 0x33) * 0x1c + 0x19 +
                          *(int *)(&DAT_004e57f4 + (uint)*(byte *)(piVar6 + 0xc) * 8 + iVar5)) *
           0x20];
  *(int *)PTR__CollisionLeft_007fe0b8 = iVar8 + cVar1;
  cVar2 = PTR__PlayerCBoxes_007fe0b4
          [(uint)*(byte *)((uint)*(byte *)((int)piVar6 + 0x33) * 0x1c + 0x19 +
                          *(int *)(&DAT_004e57f4 + (uint)*(byte *)(piVar6 + 0xc) * 8 + iVar5)) *
           0x20 + 8];
  *(int *)PTR__CollisionTop_007fe0ac = cVar2 + iVar7;
  cVar3 = PTR__PlayerCBoxes_007fe0b4
          [(uint)*(byte *)((uint)*(byte *)((int)piVar6 + 0x33) * 0x1c + 0x19 +
                          *(int *)(&DAT_004e57f4 + (uint)*(byte *)(piVar6 + 0xc) * 8 + iVar5)) *
           0x20 + 0x10];
  *(int *)PTR__CollisionRight_007fe098 = iVar8 + cVar3;
  cVar4 = PTR__PlayerCBoxes_007fe0b4
          [(uint)*(byte *)((uint)*(byte *)((int)piVar6 + 0x33) * 0x1c + 0x19 +
                          *(int *)(&DAT_004e57f4 + (uint)*(byte *)(piVar6 + 0xc) * 8 + iVar5)) *
           0x20 + 0x18];
  *(int *)PTR__CollisionBottom_007fe0c4 = cVar4 + iVar7;
  if ((((param_1 < iVar8 + cVar3) && (iVar8 + cVar1 < param_3)) && (param_2 < cVar4 + iVar7)) &&
     (cVar2 + iVar7 < param_4)) {
    *(undefined4 *)(PTR__ScriptEng_00021ec8 + 0x54) = 1;
  }
  else {
    *(undefined4 *)(PTR__ScriptEng_00021ec8 + 0x54) = 0;
  }
  return;
}
