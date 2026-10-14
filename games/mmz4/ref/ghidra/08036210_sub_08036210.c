// sub_08036210 at 0x08036210 (thumb)

undefined4 sub_08036210(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x102) == '\0') {
    sub_0801CF00(param_1,0x1b00);
    if (*(char *)(param_1 + 0xc2) == '\x01') {
      sub_0803C490(param_1,0x17);
    }
    else {
      sub_0803C490(param_1,0x16);
    }
    *(undefined *)(param_1 + 0xe) = 2;
    *(undefined *)(param_1 + 0xf) = 3;
    if (*(int *)(param_1 + 0x60) < 0x200) {
      *(undefined4 *)(param_1 + 0x60) = 0x200;
    }
    *(char *)(param_1 + 0x102) = *(char *)(param_1 + 0x102) + '\x01';
  }
  else {
    sub_0803A3BC(param_1,0x1b00);
  }
  return in_lr;
}

