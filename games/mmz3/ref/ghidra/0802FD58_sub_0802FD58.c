// sub_0802FD58 at 0x0802FD58 (thumb)

undefined4 sub_0802FD58(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xee) == '\0') {
    sub_08017700(param_1,0x1b00);
    if (*(char *)(param_1 + 0xc2) == '\x01') {
      sub_08038394(param_1,0x17);
    }
    else {
      sub_08038394(param_1,0x16);
    }
    *(undefined *)(param_1 + 0xe) = 2;
    *(undefined *)(param_1 + 0xf) = 2;
    if (*(int *)(param_1 + 0x60) < 0x200) {
      *(undefined4 *)(param_1 + 0x60) = 0x200;
    }
    *(char *)(param_1 + 0xee) = *(char *)(param_1 + 0xee) + '\x01';
  }
  else {
    sub_08034558(param_1,0x1b00);
  }
  return in_lr;
}

