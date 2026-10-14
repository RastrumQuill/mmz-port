// sub_080D89D8 at 0x080D89D8 (thumb)

undefined8 sub_080D89D8(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if ((*(char *)(param_1 + 9) == '\b') && (*(short *)(param_1 + 0xc) == 1)) {
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0xe) = 0;
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return CONCAT44(in_lr,uVar1);
}

