// sub_0811E324 at 0x0811E324 (thumb)

undefined4 sub_0811E324(int param_1)

{
  undefined4 in_lr;
  
  sub_08002624(0x3f);
  sub_08002624(0x40);
  *(undefined *)(param_1 + 0xdd1) = 2;
  DAT_03002ac0 = 0;
  if (*(char *)(param_1 + 0xdd3) == '\x01') {
    sub_08112080(param_1,0x70a0400);
  }
  else {
    sub_08112080(param_1,0x6020400);
  }
  return in_lr;
}

