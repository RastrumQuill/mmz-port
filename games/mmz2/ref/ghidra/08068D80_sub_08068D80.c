// sub_08068D80 at 0x08068D80 (thumb)

undefined4 sub_08068D80(int param_1)

{
  undefined4 in_lr;
  
  if (*(byte *)(*(int *)(param_1 + 0xb8) + 0xc) < 2) {
    *(byte *)(param_1 + 0x49) =
         *(byte *)(param_1 + 0x49) & 0xf3 |
         (byte)((*(byte *)(*(int *)(param_1 + 0xb8) + 0xbd) & 3) << 2);
    sub_080EF118(param_1,*(undefined4 *)(&DAT_0833df50 + (uint)*(byte *)(param_1 + 0xd) * 4));
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_08068DE4(param_1);
  }
  return in_lr;
}

