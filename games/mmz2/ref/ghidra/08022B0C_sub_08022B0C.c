// sub_08022B0C at 0x08022B0C (thumb)

ulonglong sub_08022B0C(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  uVar1 = sub_080EF118(param_1,*(undefined4 *)(&DAT_08333b5c + (uint)*(byte *)(param_1 + 9) * 4));
  return CONCAT44(in_lr,uVar1) & 0xffffffff000000ff;
}

