// sub_0809B8D0 at 0x0809B8D0 (thumb)

undefined4 sub_0809B8D0(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  uVar1 = DAT_02022890 * 0x343fd + 0x269ec3;
  DAT_02022890 = uVar1 & 0x7fffffff;
  uVar1 = uVar1 * 2 >> 0x11;
  sub_08088120(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
  sub_080033F0(param_1 + 0x6c,*(char *)(param_1 + 0x11) + '\x0f');
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  *(uint *)(param_1 + 0x54) = (uVar1 & 0xff) + 0x180;
  *(uint *)(param_1 + 0x58) = -0x200 - (uVar1 & 0x1ff);
  *(undefined *)(param_1 + 0x12) = 0x20;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b31bc)[*(byte *)(param_1 + 9)] + 4);
  sub_0809B3B8(param_1);
  return in_lr;
}

