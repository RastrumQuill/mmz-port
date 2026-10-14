// sub_080B99F8 at 0x080B99F8 (thumb)

ulonglong sub_080B99F8(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  uVar1 = sub_080C8A98(param_1,*(undefined4 *)(&DAT_082b87c0 + (uint)*(byte *)(param_1 + 0x11) * 4))
  ;
  return CONCAT44(in_lr,uVar1) & 0xffffffff000000ff;
}

