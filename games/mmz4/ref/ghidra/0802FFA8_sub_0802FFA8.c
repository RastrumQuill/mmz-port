// sub_0802FFA8 at 0x0802FFA8 (thumb)

undefined4 sub_0802FFA8(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = (int)*(short *)(param_1 + 0x10e);
  if (iVar1 != -1) {
    sub_08002B5C(iVar1);
    *(short *)(param_1 + 0x10e) = -1;
  }
  sub_0802B50C(param_1);
  return in_lr;
}

