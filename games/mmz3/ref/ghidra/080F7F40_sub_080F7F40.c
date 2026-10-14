// sub_080F7F40 at 0x080F7F40 (thumb)

undefined4 sub_080F7F40(int param_1)

{
  undefined4 in_lr;
  
  sub_08004230(0x40);
  DAT_02002410 = DAT_02002410 & 0xdfff;
  DAT_03002ac0 = 0;
  *(undefined *)(param_1 + 0xdd9) = 1;
  sub_080EDB10(param_1,0x5030400);
  return in_lr;
}

