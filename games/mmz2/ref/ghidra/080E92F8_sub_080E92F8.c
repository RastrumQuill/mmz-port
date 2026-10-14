// sub_080E92F8 at 0x080E92F8 (thumb)

undefined4 sub_080E92F8(int param_1)

{
  undefined4 in_lr;
  
  if (-1 < *(char *)(param_1 + 7)) {
    *(undefined *)(*(int *)(param_1 + 0x10) + 0x20a + (int)*(char *)(param_1 + 7)) = 0;
    sub_080D5790();
  }
  return in_lr;
}

