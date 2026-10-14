// sub_080EB130 at 0x080EB130 (thumb)

undefined4 sub_080EB130(int param_1)

{
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 2) = 1;
  *(undefined *)(param_1 + 3) = 0;
  *(undefined2 *)(param_1 + 4) = 0;
  *(undefined *)(param_1 + 0xdd8) = 0;
  *(undefined *)(param_1 + 0xdd9) = 0;
  *(undefined4 *)(param_1 + 0xddc) = 0x4400;
  *(undefined4 *)(param_1 + 0xde0) = 0x3a00;
  sub_080D5790(*(undefined4 *)(param_1 + 0x75b8));
  sub_080EB908(param_1);
  sub_080EB994(param_1);
  sub_080EBA50(param_1);
  sub_08012004(DAT_0202f094);
  *(undefined2 *)(param_1 + 6) = 0x10;
  sub_080EB1A8(param_1);
  return in_lr;
}

