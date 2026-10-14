// sub_08068800 at 0x08068800 (thumb)

undefined8 sub_08068800(int param_1,uint param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 in_lr;
  
  param_2 = param_2 & 0xff;
  uVar4 = *(undefined4 *)(param_1 + 0x54);
  iVar2 = *(int *)(param_1 + 0x60);
  iVar3 = *(int *)(param_1 + 0x58) + iVar2;
  if (iVar2 < 1) {
    if (-1 < iVar2) {
      iVar3 = (param_2 + 1) * 0x100 + iVar3;
      sVar1 = sub_08008CFC(uVar4,iVar3);
      if (sVar1 != 0) {
        iVar2 = sub_080093C4(uVar4,iVar3);
        *(uint *)(param_1 + 0x58) = iVar2 + param_2 * -0x100;
        uVar4 = 1;
        goto LAB_080688ae;
      }
      iVar2 = *(int *)(param_1 + 0x60) + 0x40;
      *(int *)(param_1 + 0x60) = iVar2;
      if (0x700 < iVar2) {
        *(undefined4 *)(param_1 + 0x60) = 0x700;
      }
      goto LAB_080688ac;
    }
    iVar3 = iVar3 + param_2 * -0x100;
    sVar1 = sub_08008CFC(uVar4,iVar3);
    if (sVar1 == 0) goto LAB_08068834;
    iVar2 = sub_0800958C(uVar4,iVar3);
    iVar2 = iVar2 + param_2 * 0x100;
  }
  else {
    iVar3 = param_2 * 0x100 + iVar3;
    sVar1 = sub_08008CFC(uVar4,iVar3);
    if (sVar1 == 0) {
LAB_08068834:
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
      iVar2 = *(int *)(param_1 + 0x60) + 0x40;
      *(int *)(param_1 + 0x60) = iVar2;
      if (0x700 < iVar2) {
        *(undefined4 *)(param_1 + 0x60) = 0x700;
      }
LAB_080688ac:
      uVar4 = 0;
      goto LAB_080688ae;
    }
    iVar2 = sub_080093C4(uVar4,iVar3);
    iVar2 = iVar2 + param_2 * -0x100;
  }
  *(int *)(param_1 + 0x58) = iVar2;
  *(undefined4 *)(param_1 + 0x60) = 0;
  uVar4 = 1;
LAB_080688ae:
  return CONCAT44(in_lr,uVar4);
}

