// sub_080464F8 at 0x080464F8 (thumb)

undefined4 sub_080464F8(int param_1)

{
  undefined4 in_lr;
  byte abStack_10 [8];
  
  sub_08128B5C(abStack_10,&DAT_08128e88,5);
  sub_0801CC9C(param_1);
  sub_0801CEEC(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_0801CF00(param_1,abStack_10[*(byte *)(param_1 + 0x11)] + 0x8306);
  sub_0801D134(param_1);
  sub_0804636C(param_1);
  return in_lr;
}

