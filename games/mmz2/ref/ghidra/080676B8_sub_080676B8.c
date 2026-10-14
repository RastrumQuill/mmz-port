// sub_080676B8 at 0x080676B8 (thumb)

undefined8 sub_080676B8(int param_1,short param_2,int param_3,int param_4)

{
  undefined uVar1;
  short sVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0xd) = 3;
  *(undefined *)(param_1 + 0xe) = 0;
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + param_3;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + param_4;
  if (param_3 != 0) {
    *(int *)(param_1 + 0x5c) = param_3;
  }
  sVar2 = sub_08008CFC(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  if ((param_2 != 0) && ((sVar2 == 0 || (sVar2 == -0x7ff1)))) {
    uVar4 = 1;
    goto LAB_08067734;
  }
  if (*(int *)(param_1 + 0xc0) == 0) {
    uVar3 = sub_08008CFC(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + 0x800);
    if ((uVar3 & 0x1000) != 0) {
      uVar1 = 0xb;
      goto LAB_0806772a;
    }
    *(undefined *)(param_1 + 0xd) = 0;
  }
  else {
    uVar1 = 1;
LAB_0806772a:
    *(undefined *)(param_1 + 0xd) = uVar1;
  }
  uVar4 = 0;
  *(undefined *)(param_1 + 0xe) = 0;
LAB_08067734:
  return CONCAT44(in_lr,uVar4);
}

