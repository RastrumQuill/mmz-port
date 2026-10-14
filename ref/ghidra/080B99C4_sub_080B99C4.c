// sub_080B99C4 at 0x080B99C4 (thumb)

ulonglong sub_080B99C4(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  uVar1 = sub_080C8A98(param_1,*(undefined4 *)(&DAT_082b87a4 + (uint)*(byte *)(param_1 + 0x10) * 4))
  ;
  return CONCAT44(in_lr,uVar1) & 0xffffffff000000ff;
}

