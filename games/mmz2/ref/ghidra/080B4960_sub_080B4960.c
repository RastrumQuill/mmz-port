// sub_080B4960 at 0x080B4960 (thumb)

undefined4 sub_080B4960(int param_1)

{
  undefined4 in_lr;
  
  sub_08012580();
  sub_080127E4(param_1,*(undefined2 *)
                        (&DAT_08346c5c +
                        (uint)*(byte *)(param_1 + 0x10) * 2 + (uint)*(byte *)(param_1 + 0x11) * 4));
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  *(undefined *)(param_1 + 0x25) = 0x18;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08345998)[*(byte *)(param_1 + 9)] + 4);
  sub_080B49B4(param_1);
  return in_lr;
}

