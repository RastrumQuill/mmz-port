// sub_080BB650 at 0x080BB650 (thumb)

ulonglong sub_080BB650(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  uVar1 = sub_080C8A98(param_1,*(undefined4 *)(&DAT_082b8e78 + (uint)*(byte *)(param_1 + 0x11) * 4))
  ;
  return CONCAT44(in_lr,uVar1) & 0xffffffff000000ff;
}

