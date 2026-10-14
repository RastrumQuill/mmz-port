// sub_08008F34 at 0x08008F34 (thumb)

undefined8 sub_08008F34(int param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  ushort *puVar4;
  int *piVar5;
  ushort *puVar6;
  undefined4 in_lr;
  
  param_1 = param_1 + 1;
  if (param_1 < (int)(uint)DAT_0200520e) {
    puVar6 = &DAT_02005370 + param_1;
    piVar5 = &DAT_02005230 + param_1 * 2;
    puVar4 = &DAT_02005330 + param_1;
    piVar3 = &DAT_02005234 + param_1 * 2;
    do {
      uVar2 = (uint)*puVar4 * 2;
      uVar1 = (param_2 - *piVar5) + (uint)*puVar4;
      if ((uVar1 <= uVar2 && uVar2 - uVar1 != 0) &&
         (uVar2 = (uint)*puVar6 * 2, uVar1 = ((param_3 - *piVar3) + (uint)*puVar6) - 1,
         uVar1 <= uVar2 && uVar2 - uVar1 != 0)) goto LAB_08008fc0;
      puVar6 = puVar6 + 1;
      piVar5 = piVar5 + 2;
      puVar4 = puVar4 + 1;
      piVar3 = piVar3 + 2;
      param_1 = param_1 + 1;
    } while (param_1 < (int)(uint)DAT_0200520e);
  }
  param_1 = -1;
LAB_08008fc0:
  return CONCAT44(in_lr,param_1);
}

