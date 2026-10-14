// sub_08037C20 at 0x08037C20 (thumb)

ulonglong sub_08037C20(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  uVar1 = sub_08031650(param_1 + 0x210);
  return CONCAT44(in_lr,uVar1) & 0xffffffff000000ff;
}

