// sub_080E405C at 0x080E405C (thumb)

undefined4 sub_080E405C(int param_1)

{
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0x7254) = 0x11;
  DAT_02036e98 = &DAT_02037cf0;
  DAT_02036e9c = &DAT_02037cf0;
  DAT_02036ea0 = &DAT_02037ff4;
  sub_080140D0(param_1 + 0x7264);
  sub_08014130(param_1 + 0x72d4);
  sub_08030F20(param_1 + 0x7324,0,0);
  sub_080148B4(*(undefined *)(undefined4 *)(param_1 + 0x7254),1);
  sub_080E0E64(param_1,0x20030300);
  return in_lr;
}

