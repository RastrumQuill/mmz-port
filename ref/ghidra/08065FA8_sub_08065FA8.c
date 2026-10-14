// sub_08065FA8 at 0x08065FA8 (thumb)

undefined4 sub_08065FA8(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x10) == '\0') {
    sub_08066208(param_1);
  }
  else {
    sub_080667C4(param_1);
  }
  return in_lr;
}

