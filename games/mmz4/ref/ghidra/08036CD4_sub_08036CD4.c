// sub_08036CD4 at 0x08036CD4 (thumb)

undefined4 sub_08036CD4(int param_1)

{
  undefined4 in_lr;
  
  sub_0801CF00(param_1,0x1903);
  sub_0803A3A8(param_1,1);
  *(undefined *)(param_1 + 0x101) = 1;
  sub_08036D04(param_1);
  return in_lr;
}

