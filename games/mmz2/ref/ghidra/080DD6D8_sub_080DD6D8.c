// sub_080DD6D8 at 0x080DD6D8 (thumb)

undefined4 sub_080DD6D8(int param_1)

{
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0x54) = 0x9700;
  *(undefined4 *)(param_1 + 0x58) = 0x2800;
  sub_080EF118(param_1,*(undefined4 *)(&DAT_0834c3a8 + (uint)*(byte *)(param_1 + 0x10) * 4));
  return in_lr;
}

