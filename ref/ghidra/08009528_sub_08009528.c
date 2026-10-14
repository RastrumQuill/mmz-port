// sub_08009528 at 0x08009528 (thumb)

undefined8 sub_08009528(int param_1,int param_2)

{
  ushort *puVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  ushort *puVar7;
  undefined4 in_lr;
  
LAB_0800953c:
  iVar5 = 0;
  if (-1 < (int)-(uint)DAT_0200520e) {
LAB_080095aa:
    return CONCAT44(in_lr,param_2);
  }
  puVar1 = &DAT_02005370;
  piVar4 = &DAT_02005230;
  puVar7 = &DAT_02005330;
  piVar6 = &DAT_02005234;
  do {
    uVar3 = (uint)*puVar7 * 2;
    uVar2 = (param_1 - *piVar4) + (uint)*puVar7;
    if (uVar2 <= uVar3 && uVar3 - uVar2 != 0) {
      uVar3 = (uint)*puVar1;
      uVar2 = ((param_2 - *piVar6) + uVar3) - 1;
      if (uVar2 <= uVar3 * 2 && uVar3 * 2 - uVar2 != 0) break;
    }
    puVar1 = puVar1 + 1;
    piVar4 = piVar4 + 2;
    puVar7 = puVar7 + 1;
    piVar6 = piVar6 + 2;
    iVar5 = iVar5 + 1;
    if ((int)(uint)DAT_0200520e <= iVar5) goto LAB_080095aa;
  } while( true );
  param_2 = *piVar6 - uVar3;
  goto LAB_0800953c;
}

