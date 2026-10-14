// sub_08093168 at 0x08093168 (thumb)

undefined8 sub_08093168(int param_1,short param_2,int param_3,int param_4)

{
  undefined uVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xd) != '\b') {
    *(undefined *)(param_1 + 0xd) = 8;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + param_3;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + param_4;
  if (param_2 == 0) {
    if (*(char *)(param_1 + 0x10) == '\0') {
      uVar1 = 2;
    }
    else {
      uVar1 = 3;
    }
    *(undefined *)(param_1 + 0xd) = uVar1;
    *(undefined *)(param_1 + 0xe) = 1;
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return CONCAT44(in_lr,uVar2);
}

