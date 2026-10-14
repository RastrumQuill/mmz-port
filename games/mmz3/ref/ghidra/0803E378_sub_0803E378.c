// sub_0803E378 at 0x0803E378 (thumb)

undefined4 sub_0803E378(int param_1)

{
  undefined4 in_lr;
  
  sub_08004230(0xb);
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined *)(param_1 + 0x94) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfa;
  DAT_0202f4a5 = 0;
  sub_0803D374(param_1);
  return in_lr;
}

