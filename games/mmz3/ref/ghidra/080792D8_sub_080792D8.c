// sub_080792D8 at 0x080792D8 (thumb)

undefined8 sub_080792D8(int param_1)

{
  undefined4 in_lr;
  
  if (*(int *)(param_1 + 0x58) + -0xc00 < DAT_0202e48c) {
    *(undefined *)(param_1 + 0xc1) = 0x3c;
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined *)(param_1 + 0xd) = 0;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return CONCAT44(in_lr,1);
}

