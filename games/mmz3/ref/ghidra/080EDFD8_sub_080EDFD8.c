// sub_080EDFD8 at 0x080EDFD8 (thumb)

undefined4 sub_080EDFD8(int param_1)

{
  byte *pbVar1;
  undefined4 in_lr;
  
  *(undefined2 *)(param_1 + 0x625e) = 0;
  DAT_02037350 = &DAT_02037fa0;
  DAT_0203734c = &DAT_02037fa0;
  *(undefined2 *)(param_1 + 0x6260) = 1;
  *(undefined2 *)(param_1 + 0x625c) = 0;
  pbVar1 = (byte *)(param_1 + 0x6270);
  sub_08019810(pbVar1);
  sub_0801987C(param_1 + 0x6410);
  sub_080F876C();
  sub_080E1664(param_1 + 0x6378);
  sub_080322B4(param_1 + 0x6460);
  if ((DAT_02002448 == '1') && ((DAT_02002130 & 0x200) != 0)) {
    *(undefined2 *)(param_1 + 0x625e) = 1;
    *pbVar1 = *pbVar1 | 1;
    sub_080F87AC(param_1 + 0x6318);
    sub_080E16A0(param_1 + 0x6378);
    sub_08032334(param_1 + 0x6460);
  }
  if ((DAT_02002449 == '8') && ((DAT_02002130 & 0x100) != 0)) {
    *(undefined2 *)(param_1 + 0x625e) = 2;
    *(byte *)(param_1 + 0x6270) = *(byte *)(param_1 + 0x6270) | 2;
    sub_080F87EC(param_1 + 0x6318);
    sub_080E16DC(param_1 + 0x6378);
    sub_080323B8(param_1 + 0x6460);
  }
  sub_0801A02C(*(undefined *)(param_1 + 0x6260));
  if (*(short *)(param_1 + 0x625e) == 0) {
    sub_080EDB10(param_1,0x300);
  }
  else {
    sub_080EDB10(param_1,0xd00);
  }
  return in_lr;
}

