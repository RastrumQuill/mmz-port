// sub_0801B78C at 0x0801B78C (thumb)

undefined4 sub_0801B78C(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    DAT_02000a40 = 0x3b44;
    DAT_02000a42 = 0xc04;
    DAT_0202cabc = 0x55000;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  return in_lr;
}

