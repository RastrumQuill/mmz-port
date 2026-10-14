// sub_08081584 at 0x08081584 (thumb)

undefined8 sub_08081584(int param_1,short param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xd) != '\x03') {
    *(undefined *)(param_1 + 0xd) = 3;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + param_3;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + param_4;
  if (param_2 == 0) {
    if (*(int *)(param_1 + 0x2c) == 0) {
      *(undefined *)(param_1 + 0xd) = 2;
      *(undefined *)(param_1 + 0xe) = 0;
      uVar1 = 0;
    }
    else {
      *(undefined *)(param_1 + 0xd) = 4;
      *(undefined *)(param_1 + 0xe) = 0;
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 1;
  }
  return CONCAT44(in_lr,uVar1);
}

