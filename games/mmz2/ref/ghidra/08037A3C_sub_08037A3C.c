// sub_08037A3C at 0x08037A3C (thumb)

ulonglong sub_08037A3C(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  uVar1 = (uint)*(byte *)(param_1 + 0x1fd);
  if ((*(byte *)(param_1 + 0x202) & 1) != 0) {
    uVar1 = uVar1 << 1;
  }
  return CONCAT44(in_lr,uVar1) & 0xffffffff000000ff;
}

