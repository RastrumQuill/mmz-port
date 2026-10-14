// sub_080695D0 at 0x080695D0 (thumb)

undefined4 sub_080695D0(int param_1)

{
  undefined4 in_lr;
  
  if (((*(uint *)(param_1 + 0x8c) & 0x200) == 0) &&
     (*(byte *)(param_1 + 0x49) =
           *(byte *)(param_1 + 0x49) & 0xf3 |
           (byte)((*(byte *)(*(int *)(param_1 + 0x28) + 0xbd) & 3) << 2),
     *(byte *)(*(int *)(param_1 + 0x28) + 0xc) < 2)) {
    sub_080EF118(param_1,*(undefined4 *)(&DAT_0833e0c4 + (uint)*(byte *)(param_1 + 0xd) * 4));
    return in_lr;
  }
  *(undefined4 *)(param_1 + 0xc) = 2;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
  sub_08069648(param_1);
  return in_lr;
}

