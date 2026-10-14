// sub_08023698 at 0x08023698 (thumb)

ulonglong sub_08023698(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  sub_0801F57C(param_1 + 0x54,param_1 + 0xbc,(undefined4 *)(param_1 + 0xd8),
               *(undefined4 *)(param_1 + 0xd8),*(undefined4 *)(param_1 + 0xdc),
               *(byte *)(param_1 + 10) >> 4 & 1,0x800,0,1,1);
  uVar1 = sub_080EF118(param_1,*(undefined4 *)(&DAT_08333dd4 + (uint)*(byte *)(param_1 + 0xe) * 4));
  return CONCAT44(in_lr,uVar1) & 0xffffffff000000ff;
}

