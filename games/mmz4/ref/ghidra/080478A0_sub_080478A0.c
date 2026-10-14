// sub_080478A0 at 0x080478A0 (thumb)

undefined4 sub_080478A0(int param_1)

{
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088504bc)[*(byte *)(param_1 + 9)] + 4);
  sub_08128884(param_1,*(undefined4 *)(&DAT_0885392c + (uint)*(byte *)(param_1 + 0x10) * 4));
  sub_080478DC(param_1);
  return in_lr;
}

