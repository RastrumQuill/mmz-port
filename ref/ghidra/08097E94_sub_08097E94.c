// sub_08097E94 at 0x08097E94 (thumb)

undefined4 sub_08097E94(int param_1)

{
  undefined4 in_lr;
  
  sub_08088190();
  *(undefined *)(param_1 + 0x1f) = *(undefined *)(param_1 + 0x11);
  sub_080033F0(param_1 + 0x6c,0);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b31bc)[*(byte *)(param_1 + 9)] + 4);
  sub_08097E5C(param_1);
  return in_lr;
}

