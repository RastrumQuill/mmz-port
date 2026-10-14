// sub_0803175C at 0x0803175C (thumb)

ulonglong sub_0803175C(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  uVar1 = sub_080EF118(param_1,*(undefined4 *)(&DAT_08334468 + (uint)*(byte *)(param_1 + 0x174) * 4)
                      );
  return CONCAT44(in_lr,uVar1) & 0xffffffff000000ff;
}

