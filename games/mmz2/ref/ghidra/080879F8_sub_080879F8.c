// sub_080879F8 at 0x080879F8 (thumb)

undefined4 sub_080879F8(int param_1)

{
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  *(undefined *)(param_1 + 0xd) = (&DAT_08341718)[*(byte *)(param_1 + 0x10)];
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_08012580(param_1);
  *(undefined2 *)(param_1 + 0xb6) = 0;
  *(undefined2 *)(param_1 + 0xbc) = 0;
  sub_08087A4C(param_1);
  return in_lr;
}

