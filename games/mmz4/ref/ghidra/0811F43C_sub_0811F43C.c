// sub_0811F43C at 0x0811F43C (thumb)

undefined4 sub_0811F43C(int param_1)

{
  undefined4 in_lr;
  
  sub_08002624(0x2f);
  sub_08002B5C(0x95);
  DAT_02000a50 = DAT_02000a50 & 0xdfff;
  DAT_03002ac0 = 0;
  *(undefined *)(param_1 + 0xdd1) = 1;
  sub_08001354();
  return in_lr;
}

