// sub_080160EC at 0x080160EC (thumb)

ulonglong sub_080160EC(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  uVar1 = sub_080C8A98(param_1,*(undefined4 *)(&DAT_082a804c + (uint)*(byte *)(param_1 + 0xbc) * 4))
  ;
  return CONCAT44(in_lr,uVar1) & 0xffffffff000000ff;
}

