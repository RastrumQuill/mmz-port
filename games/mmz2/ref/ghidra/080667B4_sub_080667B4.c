// sub_080667B4 at 0x080667B4 (thumb)

undefined8 sub_080667B4(int param_1,short param_2,int param_3,int param_4)

{
  short sVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0xd) = 6;
  *(undefined *)(param_1 + 0xe) = 0;
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + param_3;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + param_4;
  if (param_3 != 0) {
    *(int *)(param_1 + 0x5c) = param_3;
  }
  sVar1 = sub_08008CFC(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  if ((param_2 == 0) || ((sVar1 != 0 && (sVar1 != -0x7ff1)))) {
    if (*(int *)(param_1 + 0xc0) == 0) {
      uVar2 = sub_08008CFC(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + 0x800);
      if ((uVar2 & 0x1000) == 0) {
        *(undefined *)(param_1 + 0xd) = 3;
      }
      else {
        *(undefined *)(param_1 + 0xd) = 7;
      }
    }
    else {
      *(undefined *)(param_1 + 0xd) = 0;
    }
    *(undefined *)(param_1 + 0xe) = 0;
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  return CONCAT44(in_lr,uVar3);
}

