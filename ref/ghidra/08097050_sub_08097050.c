// sub_08097050 at 0x08097050 (thumb)

undefined4 sub_08097050(int param_1)

{
  short sVar1;
  undefined4 in_lr;
  
  sub_0800DEB4(param_1,*(undefined4 *)(param_1 + 0x20));
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
  sub_080033F0(param_1 + 0x6c,6);
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  sVar1 = (&DAT_080c8e24)[*(byte *)(param_1 + 0x11) + 0x40];
  *(int *)(param_1 + 0x54) = (int)sVar1 << 1;
  *(int *)(param_1 + 0x58) = (int)(short)(&DAT_080c8e24)[*(byte *)(param_1 + 0x11)] << 1;
  *(short *)(param_1 + 0x7c) = (short)(((int)sVar1 << 1) >> 5);
  *(short *)(param_1 + 0x7e) = (short)(*(int *)(param_1 + 0x58) >> 5);
  *(undefined *)(param_1 + 0x12) = 0x20;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b31bc)[*(byte *)(param_1 + 9)] + 4);
  *(undefined *)(param_1 + 0xd) = 0;
  sub_08096E9C(param_1);
  return in_lr;
}

