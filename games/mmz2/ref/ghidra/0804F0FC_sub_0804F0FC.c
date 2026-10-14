// sub_0804F0FC at 0x0804F0FC (thumb)

undefined4 sub_0804F0FC(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = (int)*(short *)(param_1 + 0xd0);
  if (iVar1 != -1) {
    sub_08003338(iVar1);
    *(short *)(param_1 + 0xd0) = -1;
  }
  sub_0803F984(param_1);
  return in_lr;
}

