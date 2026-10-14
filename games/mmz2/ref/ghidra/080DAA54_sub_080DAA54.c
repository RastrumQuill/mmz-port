// sub_080DAA54 at 0x080DAA54 (thumb)

ulonglong sub_080DAA54(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  uVar1 = sub_080EF118(param_1,*(undefined4 *)(&DAT_0834ba78 + (uint)*(byte *)(param_1 + 0x11) * 4))
  ;
  return CONCAT44(in_lr,uVar1) & 0xffffffff000000ff;
}

