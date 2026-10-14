// sub_08034AB4 at 0x08034AB4 (thumb)

ulonglong sub_08034AB4(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  uVar1 = sub_080EF118(param_1,*(undefined4 *)(&DAT_0833460c + (uint)*(byte *)(param_1 + 0x2b6) * 4)
                      );
  return CONCAT44(in_lr,uVar1) & 0xffffffff000000ff;
}

