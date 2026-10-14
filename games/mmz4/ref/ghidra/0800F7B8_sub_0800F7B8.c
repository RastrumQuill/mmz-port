// sub_0800F7B8 at 0x0800F7B8 (thumb)

undefined4 sub_0800F7B8(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    DAT_0202ea54 = 0x3c00f000;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  return in_lr;
}

