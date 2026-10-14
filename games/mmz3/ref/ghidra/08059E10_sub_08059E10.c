// sub_08059E10 at 0x08059E10 (thumb)

undefined4 sub_08059E10(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_08017700(param_1,0xb401);
    *(undefined *)(*(int *)(param_1 + 0x2c) + 0xe) = 1;
    *(undefined2 *)(*(int *)(param_1 + 0x2c) + 0xbc) = 0x6401;
    *(undefined *)(param_1 + 0xe) = 0;
    sub_0800471C(0x42);
  }
  sub_080177F4(param_1);
  if ((*(char *)(param_1 + 0x73) == '\x03') && ((DAT_020301b2 & 1) == 0)) {
    *(undefined *)(param_1 + 0xd) = 2;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  return in_lr;
}

