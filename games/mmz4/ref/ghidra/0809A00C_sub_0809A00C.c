// sub_0809A00C at 0x0809A00C (thumb)

undefined4 sub_0809A00C(int param_1)

{
  undefined4 in_lr;
  
  sub_0801CC9C();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_0801CF00(param_1,0x6107);
  return in_lr;
}

