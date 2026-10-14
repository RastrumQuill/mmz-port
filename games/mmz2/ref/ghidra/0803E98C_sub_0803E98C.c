// sub_0803E98C at 0x0803E98C (thumb)

undefined4 sub_0803E98C(int param_1)

{
  undefined4 in_lr;
  
  if (*(int *)(param_1 + 0x2c) == 0) {
    *(undefined4 *)(param_1 + 0xc) = 4;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)((&DAT_08336060)[*(byte *)(param_1 + 9)] + 0x10);
    sub_08035878(param_1);
  }
  return in_lr;
}

