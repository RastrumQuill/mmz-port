// sub_080BCD00 at 0x080BCD00 (thumb)

undefined4 sub_080BCD00(int param_1)

{
  undefined4 in_lr;
  
  sub_080EF118(param_1,*(undefined4 *)(&DAT_0834842c + (uint)*(byte *)(param_1 + 0x10) * 4));
  return in_lr;
}

