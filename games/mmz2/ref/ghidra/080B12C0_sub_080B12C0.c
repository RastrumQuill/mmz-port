// sub_080B12C0 at 0x080B12C0 (thumb)

undefined8 sub_080B12C0(int param_1,uint param_2)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  param_2 = param_2 & 0xff;
  uVar2 = *(undefined4 *)(param_1 + 0x54);
  iVar3 = *(int *)(param_1 + 0x60);
  iVar4 = *(int *)(param_1 + 0x58) + iVar3;
  if (iVar3 < 1) {
    if (iVar3 < 0) {
      iVar4 = iVar4 + param_2 * -0x100;
      sVar1 = sub_08008CFC(uVar2,iVar4);
      if (sVar1 == 0) {
        *(uint *)(param_1 + 0x58) = param_2 * 0x100 + iVar4;
        iVar3 = *(int *)(param_1 + 0x60) + 0x40;
        *(int *)(param_1 + 0x60) = iVar3;
        if (0x700 < iVar3) {
          *(undefined4 *)(param_1 + 0x60) = 0x700;
        }
LAB_080b137e:
        uVar2 = 0;
        goto LAB_080b1392;
      }
      iVar3 = sub_0800958C(uVar2,iVar4);
      *(uint *)(param_1 + 0x58) = iVar3 + param_2 * 0x100;
      *(undefined4 *)(param_1 + 0x60) = 0;
    }
    else {
      iVar4 = (param_2 + 1) * 0x100 + iVar4;
      sVar1 = sub_08008CFC(uVar2,iVar4);
      if (sVar1 == 0) {
        *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x40;
        goto LAB_080b137e;
      }
      iVar3 = sub_080093C4(uVar2,iVar4);
      *(uint *)(param_1 + 0x58) = iVar3 + param_2 * -0x100;
    }
  }
  else {
    iVar4 = param_2 * 0x100 + iVar4;
    sVar1 = sub_08008CFC(uVar2,iVar4);
    if (sVar1 == 0) {
      *(uint *)(param_1 + 0x58) = iVar4 + param_2 * -0x100;
      iVar3 = *(int *)(param_1 + 0x60) + 0x40;
      *(int *)(param_1 + 0x60) = iVar3;
      if (0x700 < iVar3) {
        *(undefined4 *)(param_1 + 0x60) = 0x700;
      }
      goto LAB_080b137e;
    }
    iVar3 = sub_080093C4(uVar2,iVar4);
    *(uint *)(param_1 + 0x58) = iVar3 + param_2 * -0x100;
    *(undefined4 *)(param_1 + 0x60) = 0;
  }
  uVar2 = 1;
LAB_080b1392:
  return CONCAT44(in_lr,uVar2);
}

