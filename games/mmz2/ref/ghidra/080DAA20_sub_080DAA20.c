// sub_080DAA20 at 0x080DAA20 (thumb)

ulonglong sub_080DAA20(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  uVar1 = sub_080EF118(param_1,*(undefined4 *)(&DAT_0834ba5c + (uint)*(byte *)(param_1 + 0x10) * 4))
  ;
  return CONCAT44(in_lr,uVar1) & 0xffffffff000000ff;
}

