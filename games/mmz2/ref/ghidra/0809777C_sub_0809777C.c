// sub_0809777C at 0x0809777C (thumb)

undefined8 sub_0809777C(int param_1,short param_2,int param_3,int param_4)

{
  undefined uVar1;
  short sVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0xd) = 3;
  *(undefined *)(param_1 + 0xe) = 0;
  param_3 = *(int *)(param_1 + 0x54) + param_3;
  *(int *)(param_1 + 0x54) = param_3;
  param_4 = *(int *)(param_1 + 0x58) + param_4;
  *(int *)(param_1 + 0x58) = param_4;
  if ((param_2 == 0) || (sVar2 = sub_08008CFC(param_3,param_4), sVar2 != 0)) {
    if (*(int *)(param_1 + 0xc0) == 0) {
      uVar1 = 6;
    }
    else {
      uVar1 = 2;
    }
    *(undefined *)(param_1 + 0xd) = uVar1;
    uVar3 = 0;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  else {
    uVar3 = 1;
  }
  return CONCAT44(in_lr,uVar3);
}

