// sub_0807D890 at 0x0807D890 (thumb)

undefined8 sub_0807D890(int param_1,short param_2,int param_3)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xd) != '\a') {
    *(undefined *)(param_1 + 0xd) = 7;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + param_3;
  if (param_2 == 0) {
    *(undefined *)(param_1 + 0xd) = 5;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return CONCAT44(in_lr,(uint)(param_2 != 0));
}

