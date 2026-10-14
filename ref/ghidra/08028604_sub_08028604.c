// sub_08028604 at 0x08028604 (thumb)

undefined4 sub_08028604(int param_1)

{
  undefined4 in_lr;
  
  if (*(byte *)(param_1 + 0x10) < 5) {
    sub_08028628(param_1);
  }
  else {
    sub_080286D4(param_1);
  }
  sub_08028788(param_1);
  return in_lr;
}

