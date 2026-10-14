// sub_08016028 at 0x08016028 (thumb)

ulonglong sub_08016028(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  uVar1 = sub_080C8A98(param_1,*(undefined4 *)(&DAT_082a800c + (uint)*(byte *)(param_1 + 0xbc) * 4))
  ;
  return CONCAT44(in_lr,uVar1) & 0xffffffff000000ff;
}

