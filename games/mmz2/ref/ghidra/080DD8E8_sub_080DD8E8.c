// sub_080DD8E8 at 0x080DD8E8 (thumb)

undefined4 sub_080DD8E8(int param_1)

{
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0834b8b4)[*(byte *)(param_1 + 9)] + 4);
  *(undefined *)(param_1 + 0xd) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
  *(undefined4 *)(param_1 + 0x58) =
       *(undefined4 *)(&DAT_0834c3fc + (uint)*(byte *)(param_1 + 0x11) * 8);
  sub_08012580(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  sub_080DD93C(param_1);
  return in_lr;
}

