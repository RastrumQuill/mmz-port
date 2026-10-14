// sub_0800CC20 at 0x0800CC20 (thumb)

undefined4 sub_0800CC20(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    DAT_02000a40 = 0x3b44;
    DAT_02000a42 = 0xc0a;
    DAT_0202dad9 = '\0';
    *(undefined *)(param_1 + 0xe) = 1;
  }
  if (*(int *)(param_1 + 0x34) - 0x9e1U < 0x3f0) {
    DAT_0202cabc = 0x1a000;
  }
  else if (*(int *)(param_1 + 0x34) - 0xe81U < 0x170) {
    DAT_0202cabc = 0x37000;
  }
  else {
    DAT_0202cabc = 0x280000;
  }
  DAT_0202dad9 = DAT_0202dad9 + '\x01';
  return in_lr;
}

