// sub_080A3090 at 0x080A3090 (thumb)

undefined4 sub_080A3090(int param_1)

{
  undefined4 in_lr;
  
  sub_080EF118(param_1,*(undefined4 *)(&DAT_08344818 + (uint)*(byte *)(param_1 + 0x10) * 4));
  return in_lr;
}

