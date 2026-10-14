// sub_08019E00 at 0x08019E00 (thumb)

undefined4 sub_08019E00(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    DAT_02000a40 = 0x3b44;
    DAT_02000a42 = 0xc04;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  if (*(int *)(param_1 + 0x34) - 0x1041U < 0x68f) {
    DAT_0202cabc = 0x5f000;
  }
  else {
    DAT_0202cabc = 0x280000;
  }
  return in_lr;
}

