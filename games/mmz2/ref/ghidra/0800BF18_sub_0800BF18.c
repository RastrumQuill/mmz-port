// sub_0800BF18 at 0x0800BF18 (thumb)

undefined4 sub_0800BF18(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    DAT_0202d004 = 0x4e000;
    DAT_02000fd0 = 0x3b44;
    DAT_02000fd2 = 0xc04;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  return in_lr;
}

