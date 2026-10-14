// sub_080EE124 at 0x080EE124 (thumb)

undefined4 sub_080EE124(int param_1)

{
  undefined4 in_lr;
  
  *(undefined2 *)(param_1 + 0x6260) = 0x11;
  DAT_02037350 = &DAT_02037fa0;
  DAT_0203734c = &DAT_02037fa0;
  sub_08019810(param_1 + 0x6270);
  sub_0801987C(param_1 + 0x6410);
  sub_080F876C(param_1 + 0x6318);
  sub_080E1664(param_1 + 0x6378);
  sub_080322B4(param_1 + 0x6460);
  sub_0801A03C(*(undefined *)(undefined2 *)(param_1 + 0x6260),1);
  sub_080EDB10(param_1,0x60010300);
  return in_lr;
}

