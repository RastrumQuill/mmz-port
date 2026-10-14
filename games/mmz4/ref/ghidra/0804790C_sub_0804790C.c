// sub_0804790C at 0x0804790C (thumb)

undefined4 sub_0804790C(int param_1)

{
  undefined4 in_lr;
  
  sub_0801CD28();
  sub_0801CEEC(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_0801CF00(param_1,0x8218);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_08005760(param_1 + 0x74,&DAT_08853944,param_1 + 0x54,8);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0x8047cbd;
  sub_08002B10(0x45);
  *(undefined *)(param_1 + 0x12) = 0;
  return in_lr;
}

