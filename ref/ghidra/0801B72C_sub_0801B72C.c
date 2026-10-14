// sub_0801B72C at 0x0801B72C (thumb)

ulonglong sub_0801B72C(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  uVar1 = sub_080C8A98(param_1,*(undefined4 *)(&DAT_082a97b4 + ((uint)(param_2 << 0x18) >> 0x16)));
  return CONCAT44(in_lr,uVar1) & 0xffffffff000000ff;
}

