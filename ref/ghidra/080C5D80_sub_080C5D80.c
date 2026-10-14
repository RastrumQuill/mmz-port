// sub_080C5D80 at 0x080C5D80 (thumb)

undefined4 sub_080C5D80(int param_1)

{
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 2) = 1;
  *(undefined *)(param_1 + 3) = 0;
  *(undefined2 *)(param_1 + 4) = 0;
  *(undefined *)(param_1 + 0x9e4) = 0;
  *(undefined *)(param_1 + 0x9e5) = 0;
  *(undefined4 *)(param_1 + 0x9e8) = 0x4400;
  *(undefined4 *)(param_1 + 0x9ec) = 0x3a00;
  sub_080B4518(&DAT_0202b5a0);
  sub_080C64E4(param_1);
  sub_080C6574(param_1);
  sub_080C65C4(param_1);
  sub_0800DB7C(DAT_02023210);
  *(undefined2 *)(param_1 + 6) = 0x10;
  sub_080C5DF4(param_1);
  return in_lr;
}

