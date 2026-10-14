// sub_08011998 at 0x08011998 (thumb)

undefined4 sub_08011998(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    DAT_02002400 = 0x2844;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  return in_lr;
}

