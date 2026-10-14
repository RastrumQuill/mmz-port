// sub_080CE510 at 0x080CE510 (thumb)

undefined4 sub_080CE510(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  sub_0800471C(0x3f);
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined *)(param_1 + 0x94) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
  iVar1 = 0;
  if ((&DAT_0836cd02)[*(byte *)(param_1 + 0x12)] != '\0') {
    do {
      sub_080C09F8(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + 0x1000,
                   (uint)*(byte *)(param_1 + 0xbc) * -0x300);
      iVar1 = iVar1 + 1;
    } while (iVar1 < (int)(uint)(byte)(&DAT_0836cd02)[*(byte *)(param_1 + 0x12)]);
  }
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
  if (*(char *)(param_1 + 0x10) == '\0') {
    if (*(byte *)(*(int *)(param_1 + 0x28) + 0xc) < 2) {
      sub_080CE320(*(int *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0xb4),
                   *(undefined4 *)(param_1 + 0xb8));
    }
    *(undefined4 *)(param_1 + 0xc) = 4;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0836c2ec + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  }
  else {
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 0xb4);
    *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0xb8);
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined4 *)(param_1 + 0x14) =
         **(undefined4 **)(&DAT_0836c2ec + (uint)*(byte *)(param_1 + 9) * 4);
    *(undefined *)(param_1 + 0x10) = 2;
  }
  return in_lr;
}

