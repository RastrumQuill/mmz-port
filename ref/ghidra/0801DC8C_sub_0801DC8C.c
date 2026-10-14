// sub_0801DC8C at 0x0801DC8C (thumb)

ulonglong sub_0801DC8C(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  sub_0801AC0C(param_1 + 0x4c,param_1 + 0xc4,*(undefined4 *)(param_1 + 0x108),
               *(byte *)(param_1 + 10) >> 4 & 1,0x800,1);
  uVar1 = sub_080C8A98(param_1,*(undefined4 *)(&DAT_082a99a0 + (uint)*(byte *)(param_1 + 0xe) * 4));
  return CONCAT44(in_lr,uVar1) & 0xffffffff000000ff;
}

