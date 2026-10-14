// sub_08033AE8 at 0x08033AE8 (thumb)

ulonglong sub_08033AE8(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  uVar1 = sub_080EF118(param_1,*(undefined4 *)(&DAT_083345a4 + (uint)*(byte *)(param_1 + 0x2b6) * 4)
                      );
  return CONCAT44(in_lr,uVar1) & 0xffffffff000000ff;
}

