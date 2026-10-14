// sub_0806CDF0 at 0x0806CDF0 (thumb)

undefined4 sub_0806CDF0(int param_1)

{
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  sub_0801749C(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  if (*(char *)(param_1 + 0x10) == '\0') {
    sub_0806CF10(param_1);
  }
  else {
    sub_0806CFBC(param_1);
  }
  sub_0806CE40(param_1);
  return in_lr;
}

