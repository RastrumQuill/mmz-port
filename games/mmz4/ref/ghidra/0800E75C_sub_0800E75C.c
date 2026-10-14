// sub_0800E75C at 0x0800E75C (thumb)

undefined4 sub_0800E75C(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    DAT_0202ea54 = 0xa5000;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  return in_lr;
}

