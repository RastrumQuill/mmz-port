// sub_080E7810 at 0x080E7810 (thumb)

undefined4 sub_080E7810(int param_1)

{
  byte bVar1;
  undefined4 in_lr;
  
  sub_0801CD28();
  bVar1 = *(byte *)(param_1 + 10);
  *(byte *)(param_1 + 10) = bVar1 | 3;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08863a28)[*(byte *)(param_1 + 9)] + 4);
  if (*(char *)(param_1 + 0x11) == '\0') {
    if ((((byte)(*(char *)(param_1 + 0x10) - 1U) < 2) && ((bVar1 & 0x10) == 0)) &&
       (bVar1 = *(char *)(param_1 + 0x10) + 1, *(byte *)(param_1 + 0x10) = bVar1, 2 < bVar1)) {
      *(undefined *)(param_1 + 0x10) = 1;
    }
    if (*(char *)(param_1 + 0x11) == '\0') {
      sub_080E7784(param_1 + 0x54,(uint)*(byte *)(param_1 + 0x10) << 8 | 1,
                   *(byte *)(param_1 + 10) >> 4 & 1);
      *(undefined *)(param_1 + 0x25) = 0x18;
    }
  }
  sub_08128884(param_1,*(undefined4 *)(&DAT_08865c58 + (uint)*(byte *)(param_1 + 0x10) * 4));
  *(undefined *)(param_1 + 0xe) = 0;
  *(undefined *)(param_1 + 0x12) = 0;
  *(undefined *)(param_1 + 0x7c) = 0;
  *(undefined *)(param_1 + 0x7d) = 1;
  sub_080E78BC(param_1);
  return in_lr;
}

