// sub_0811C054 at 0x0811C054 (thumb)

undefined4 sub_0811C054(int param_1)

{
  undefined4 in_lr;
  
  sub_08002624(0x2f);
  if (*(char *)(param_1 + 0xde6) == '1') {
    sub_08002624(0x31);
    sub_08002624(0x3a);
  }
  else {
    sub_08002624(0x30);
    sub_08002624(0x32);
  }
  DAT_02000a50 = DAT_02000a50 & 0xdfff;
  DAT_03002ac0 = 0;
  sub_0811D07C(param_1);
  *(undefined *)(param_1 + 0xdd1) = 1;
  sub_08112080(param_1,0x5010400);
  return in_lr;
}

