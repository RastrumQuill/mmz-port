// sub_080DC910 at 0x080DC910 (thumb)

undefined4 sub_080DC910(int param_1)

{
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0834b8b4)[*(byte *)(param_1 + 9)] + 4);
  sub_080EF118(param_1,*(undefined4 *)(&DAT_0834c074 + (uint)*(byte *)(param_1 + 0x10) * 4));
  return in_lr;
}

