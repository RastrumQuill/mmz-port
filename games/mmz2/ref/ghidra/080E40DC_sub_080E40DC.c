// sub_080E40DC at 0x080E40DC (thumb)

undefined4 sub_080E40DC(int param_1)

{
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0x7254) = 0;
  if (DAT_02000ca4 == '\0') {
    DAT_02036e98 = &DAT_02037cf0;
  }
  else {
    DAT_02036e98 = &DAT_02037ff4;
  }
  DAT_02036ea0 = &DAT_02037ff4;
  DAT_02036e9c = &DAT_02037cf0;
  sub_080148B4(*(undefined *)(param_1 + 0x7254),*(undefined *)(param_1 + 0xc));
  sub_080E0E64(param_1,0x300);
  return in_lr;
}

