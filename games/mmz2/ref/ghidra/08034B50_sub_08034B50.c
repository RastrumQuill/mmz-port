// sub_08034B50 at 0x08034B50 (thumb)

ulonglong sub_08034B50(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  uVar1 = sub_080EF118(param_1,*(undefined4 *)(&DAT_0833461c + (uint)*(byte *)(param_1 + 0x2b6) * 4)
                      );
  return CONCAT44(in_lr,uVar1) & 0xffffffff000000ff;
}

