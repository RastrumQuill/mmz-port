// sub_080C6FB8 at 0x080C6FB8 (thumb)

undefined4 sub_080C6FB8(int param_1)

{
  undefined4 in_lr;
  
  sub_080BF864(param_1 + 0x54,1,*(undefined *)(param_1 + 0x11));
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0836a0c8)[*(byte *)(param_1 + 9)] + 0x10);
  return in_lr;
}

