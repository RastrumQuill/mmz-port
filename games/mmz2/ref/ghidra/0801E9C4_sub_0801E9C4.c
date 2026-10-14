// sub_0801E9C4 at 0x0801E9C4 (thumb)

ulonglong sub_0801E9C4(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  uVar1 = sub_080EF118(param_1,*(undefined4 *)(&DAT_08333a40 + (uint)*(byte *)(param_1 + 9) * 4));
  return CONCAT44(in_lr,uVar1) & 0xffffffff000000ff;
}

