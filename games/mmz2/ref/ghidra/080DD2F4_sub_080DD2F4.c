// sub_080DD2F4 at 0x080DD2F4 (thumb)

undefined4 sub_080DD2F4(int param_1)

{
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0x54) = 0x9700;
  *(undefined4 *)(param_1 + 0x58) = 0x2800;
  sub_080EF118(param_1,*(undefined4 *)(&DAT_0834c344 + (uint)*(byte *)(param_1 + 0x11) * 4));
  return in_lr;
}

