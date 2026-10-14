// sub_080095BC at 0x080095BC (thumb)

undefined8 sub_080095BC(int param_1,int param_2)

{
  ushort *puVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  ushort *puVar6;
  int *piVar7;
  undefined4 in_lr;
  
LAB_080095ce:
  iVar5 = 0;
  if (-1 < (int)-(uint)DAT_0200520e) {
LAB_08009654:
    return CONCAT44(in_lr,param_2);
  }
  piVar4 = &DAT_02005230;
  puVar1 = &DAT_02005330;
  piVar7 = &DAT_02005234;
  puVar6 = &DAT_02005370;
  do {
    uVar3 = (uint)*puVar1 * 2;
    uVar2 = (param_1 - *piVar4) + (uint)*puVar1;
    if (uVar2 <= uVar3 && uVar3 - uVar2 != 0) {
      uVar3 = (uint)*puVar6;
      uVar2 = ((param_2 - *piVar7) + uVar3) - 1;
      if ((uVar2 <= uVar3 * 2 && uVar3 * 2 - uVar2 != 0) && (((&DAT_02005210)[iVar5] & 0x80) == 0))
      break;
    }
    piVar4 = piVar4 + 2;
    puVar1 = puVar1 + 1;
    piVar7 = piVar7 + 2;
    puVar6 = puVar6 + 1;
    iVar5 = iVar5 + 1;
    if ((int)(uint)DAT_0200520e <= iVar5) goto LAB_08009654;
  } while( true );
  param_2 = *piVar7 + uVar3 + 1;
  goto LAB_080095ce;
}

