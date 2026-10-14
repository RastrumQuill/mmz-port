// sub_080DD0C4 at 0x080DD0C4 (thumb)

ulonglong sub_080DD0C4(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  uVar1 = sub_080EF118(param_1,*(undefined4 *)(&DAT_0834c314 + (uint)*(byte *)(param_1 + 0x11) * 4))
  ;
  return CONCAT44(in_lr,uVar1) & 0xffffffff000000ff;
}

