// sub_08039E20 at 0x08039E20 (thumb)

undefined4 sub_08039E20(int param_1)

{
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0835b5d0)[*(byte *)(param_1 + 9)] + 4);
  sub_0801749C(param_1);
  sub_080176EC(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_08017700(param_1,*(undefined2 *)
                        (&DAT_0835da34 +
                        (uint)*(byte *)(param_1 + 0x10) * 2 + (uint)*(byte *)(param_1 + 0x11) * 8));
  sub_0800471C(0x1b);
  *(undefined *)(param_1 + 0xc2) = 1;
  sub_08039E84(param_1);
  return in_lr;
}

