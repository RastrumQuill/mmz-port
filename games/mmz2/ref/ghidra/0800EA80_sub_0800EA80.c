// sub_0800EA80 at 0x0800EA80 (thumb)

undefined4 sub_0800EA80(int param_1)

{
  undefined4 in_lr;
  
  if ((*(int *)(param_1 + 0x38) < 0x1e1) || (*(int *)(param_1 + 0x34) < 0x1b31)) {
    DAT_0202ed74 = 0;
  }
  else {
    DAT_0202ed74 = 0x1c0000;
  }
  return in_lr;
}

