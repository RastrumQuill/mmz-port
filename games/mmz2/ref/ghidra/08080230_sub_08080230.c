// sub_08080230 at 0x08080230 (thumb)

undefined8 sub_08080230(int param_1,short param_2,int param_3,int param_4)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xd) != '\n') {
    *(undefined *)(param_1 + 0xd) = 10;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + param_3;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + param_4;
  if (param_2 == 0) {
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return CONCAT44(in_lr,(uint)(param_2 != 0));
}

