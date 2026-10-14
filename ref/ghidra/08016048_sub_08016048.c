// sub_08016048 at 0x08016048 (thumb)

ulonglong sub_08016048(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  uVar1 = sub_080C8A98(param_1,*(undefined4 *)(&DAT_082a8040 + (uint)*(byte *)(param_1 + 0xbd) * 4))
  ;
  return CONCAT44(in_lr,uVar1) & 0xffffffff000000ff;
}

