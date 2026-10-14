// sub_080E2134 at 0x080E2134 (thumb)

undefined4 sub_080E2134(int param_1)

{
  undefined4 in_lr;
  
  sub_08007C7C(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  if (*(int *)(param_1 + 0x58) + -0x1000 < DAT_0202cabc) {
    sub_08002B10(0x2a);
  }
  else {
    sub_08002B10(0x31);
  }
  return in_lr;
}

