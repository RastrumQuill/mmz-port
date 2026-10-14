// sub_08033D50 at 0x08033D50 (thumb)

ulonglong sub_08033D50(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  uVar1 = sub_080EF118(param_1,*(undefined4 *)(&DAT_083345d4 + (uint)*(byte *)(param_1 + 0x175) * 4)
                      );
  return CONCAT44(in_lr,uVar1) & 0xffffffff000000ff;
}

