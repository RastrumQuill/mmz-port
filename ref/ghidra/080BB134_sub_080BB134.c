// sub_080BB134 at 0x080BB134 (thumb)

ulonglong sub_080BB134(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  uVar1 = sub_080C8A98(param_1,*(undefined4 *)(&DAT_082b8c38 + (uint)*(byte *)(param_1 + 0x10) * 4))
  ;
  return CONCAT44(in_lr,uVar1) & 0xffffffff000000ff;
}

