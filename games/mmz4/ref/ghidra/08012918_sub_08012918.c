// sub_08012918 at 0x08012918 (thumb)

undefined4 sub_08012918(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    DAT_0202ea58 = 0x78000;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  return in_lr;
}

