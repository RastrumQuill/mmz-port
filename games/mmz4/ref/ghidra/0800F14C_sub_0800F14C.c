// sub_0800F14C at 0x0800F14C (thumb)

undefined4 sub_0800F14C(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_08128954(*(int *)(DAT_0202dbf0 + 0x54) + -0xf000,0x3c000);
  if (*(char *)(param_1 + 0xe) == '\0') {
    DAT_02000a40 = 0x3b44;
    DAT_02000a42 = 0xc04;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  if (iVar1 + 0xf000 < 0x20001) {
    DAT_0202cabc = 0x280000;
  }
  else {
    DAT_0202cabc = 0xd7000;
  }
  return in_lr;
}

