// sub_08097820 at 0x08097820 (thumb)

undefined4 sub_08097820(int param_1)

{
  undefined4 in_lr;
  
  sub_08088204();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
  sub_080033F0(param_1 + 0x6c,0);
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  *(int *)(param_1 + 0x54) = (short)(&DAT_080c8e24)[*(byte *)(param_1 + 0x11) + 0x40] * 5;
  *(int *)(param_1 + 0x58) = (short)(&DAT_080c8e24)[*(byte *)(param_1 + 0x11)] * 5;
  *(undefined *)(param_1 + 0x12) = 0;
  *(undefined2 *)(param_1 + 0x7c) = 0x10;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b31bc)[*(byte *)(param_1 + 9)] + 4);
  sub_080977E8(param_1);
  return in_lr;
}

