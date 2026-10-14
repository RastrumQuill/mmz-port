// sub_080859F4 at 0x080859F4 (thumb)

undefined4 sub_080859F4(int param_1)

{
  undefined4 in_lr;
  
  if (((byte)(*(char *)(param_1 + 0x10) - 2U) < 3) &&
     (1 < *(byte *)(*(int *)(param_1 + 0xbc) + 0xc))) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b17b0)[*(byte *)(param_1 + 9)] + 8);
    sub_08085F84(param_1);
  }
  else {
    sub_080C8A98(param_1,*(undefined4 *)(&DAT_082b2eb4 + (uint)*(byte *)(param_1 + 0xd) * 4));
  }
  return in_lr;
}

