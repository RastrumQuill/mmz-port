// sub_08086368 at 0x08086368 (thumb)

undefined8 sub_08086368(int param_1,short param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xd) != '\x1b') {
    *(undefined *)(param_1 + 0xd) = 0x1b;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + param_3;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + param_4;
  if (param_2 == 0) {
    if (*(int *)(param_1 + 0x2c) == 0) {
      *(undefined *)(param_1 + 0xd) = 0x1a;
      *(undefined *)(param_1 + 0xe) = 0;
      uVar1 = 0;
    }
    else {
      *(undefined *)(param_1 + 0xd) = 0x1c;
      *(undefined *)(param_1 + 0xe) = 0;
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 1;
  }
  return CONCAT44(in_lr,uVar1);
}

