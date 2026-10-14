// sub_0803F214 at 0x0803F214 (thumb)

undefined4 sub_0803F214(int param_1)

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

