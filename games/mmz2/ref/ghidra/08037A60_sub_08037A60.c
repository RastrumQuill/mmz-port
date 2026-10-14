// sub_08037A60 at 0x08037A60 (thumb)

ulonglong sub_08037A60(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  uVar1 = sub_0803126C(param_1 + 0x1fc);
  return CONCAT44(in_lr,uVar1) & 0xffffffff000000ff;
}

