// sub_0802C370 at 0x0802C370 (thumb)

undefined4 sub_0802C370(int param_1)

{
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0x142) = 1;
  sub_0800471C(0xb);
  sub_080B3008(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + -0x1000,1);
  *(undefined *)(param_1 + 0xf) = 3;
  return in_lr;
}

