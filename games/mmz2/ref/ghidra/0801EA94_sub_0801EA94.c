// sub_0801EA94 at 0x0801EA94 (thumb)

ulonglong sub_0801EA94(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  uVar1 = sub_080EF118(param_1,*(undefined4 *)(&DAT_08333a50 + (uint)*(byte *)(param_1 + 9) * 4));
  return CONCAT44(in_lr,uVar1) & 0xffffffff000000ff;
}

