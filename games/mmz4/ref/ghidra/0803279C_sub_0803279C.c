// sub_0803279C at 0x0803279C (thumb)

undefined4 sub_0803279C(int param_1)

{
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0x170) = 1;
  sub_08002B10(0xb);
  sub_080D15B4(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + -0x1000,1);
  *(undefined *)(param_1 + 0xf) = 3;
  return in_lr;
}

