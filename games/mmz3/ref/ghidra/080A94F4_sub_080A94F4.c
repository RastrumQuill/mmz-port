// sub_080A94F4 at 0x080A94F4 (thumb)

undefined4 sub_080A94F4(int param_1)

{
  undefined4 in_lr;
  
  sub_080177F4();
  sub_080C08C8(param_1,*(undefined *)(param_1 + 0x11));
  *(undefined4 *)(param_1 + 0xc) = 2;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_083670d4)[*(byte *)(param_1 + 9)] + 8);
  return in_lr;
}

