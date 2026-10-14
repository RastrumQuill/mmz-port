// sub_08092718 at 0x08092718 (thumb)

undefined4 sub_08092718(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  sub_0800DEFC(param_1,*(undefined4 *)(param_1 + 0x20));
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  sub_080033F0(param_1 + 0x6c,10);
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  uVar1 = DAT_02022890 * 0x343fd + 0x269ec3;
  *(uint *)(param_1 + 0x54) = -((uVar1 * 0x80 >> 0x17) + 0x100);
  uVar1 = (uVar1 & 0x7fffffff) * 0x343fd + 0x269ec3;
  DAT_02022890 = uVar1 & 0x7fffffff;
  *(uint *)(param_1 + 0x58) = ((uVar1 * 2 >> 0x11 & 7) + 8) * -0x40;
  *(undefined *)(param_1 + 0x12) = 0;
  *(undefined *)(param_1 + 0x13) = 0xfc;
  *(undefined *)(param_1 + 0x1f) = 0;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b31bc)[*(byte *)(param_1 + 9)] + 4);
  sub_08092580(param_1);
  return in_lr;
}

