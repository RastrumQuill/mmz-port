// sub_08044DC0 at 0x08044DC0 (thumb)

ulonglong sub_08044DC0(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  uVar1 = sub_08044CD4(param_1,*(undefined4 *)(param_1 + 0x54));
  return CONCAT44(in_lr,uVar1) & 0xffffffff000000ff;
}

