// sub_0806A3A0 at 0x0806A3A0 (thumb)

undefined4 sub_0806A3A0(int param_1)

{
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined *)(param_1 + 0x94) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  if (*(char *)(param_1 + 0x11) == '\0') {
    sub_0800471C(0x3f);
  }
  else {
    sub_0800471C(0x122);
  }
  sub_080B8958(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58),
               *(undefined *)(param_1 + 0x11));
  return in_lr;
}

