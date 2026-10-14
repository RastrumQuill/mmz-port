// sub_080EBD20 at 0x080EBD20 (thumb)

undefined4 sub_080EBD20(int param_1)

{
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 2) = 1;
  *(undefined *)(param_1 + 3) = 0;
  *(undefined2 *)(param_1 + 4) = 0;
  *(undefined *)(param_1 + 0xdd8) = 0;
  sub_080EC890(param_1);
  sub_080EC91C(param_1);
  sub_080ECA0C(param_1);
  sub_08012004(DAT_0202f094);
  *(undefined2 *)(param_1 + 6) = 0x10;
  sub_080EBD68(param_1);
  return in_lr;
}

