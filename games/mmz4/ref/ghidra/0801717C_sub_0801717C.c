// sub_0801717C at 0x0801717C (thumb)

undefined4 sub_0801717C(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    DAT_02000a40 = 0x3b44;
    DAT_02000a42 = 0xc07;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  if (*(int *)(param_1 + 0x34) < 0xf80) {
    DAT_0202cabc = 0x25000;
  }
  else {
    DAT_0202cabc = 0x280000;
  }
  return in_lr;
}

