// sub_080D56C4 at 0x080D56C4 (thumb)

undefined4 sub_080D56C4(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xd) == '\0') {
    DAT_0202fd76 = 0x200;
    DAT_0202f776 = 4;
    sub_08017700(param_1,0xb31d);
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  else if (*(char *)(param_1 + 0xd) != '\x01') {
    return in_lr;
  }
  sub_080177F4(param_1);
  return in_lr;
}

