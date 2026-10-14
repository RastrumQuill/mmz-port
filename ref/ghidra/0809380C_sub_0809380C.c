// sub_0809380C at 0x0809380C (thumb)

undefined4 sub_0809380C(int param_1)

{
  undefined uVar1;
  uint uVar2;
  undefined4 in_lr;
  
  sub_0800DEFC(param_1,*(undefined4 *)(param_1 + 0x20));
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  sub_080033F0(param_1 + 0x6c,1);
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    uVar2 = DAT_02022890 * 0x343fd + 0x269ec3;
    DAT_02022890 = uVar2 & 0x7fffffff;
    *(uint *)(param_1 + 0x54) = -((uVar2 * 2 >> 0x11 & 0xff) + 0x100);
    uVar1 = 0xfd;
  }
  else {
    uVar2 = DAT_02022890 * 0x343fd + 0x269ec3;
    DAT_02022890 = uVar2 & 0x7fffffff;
    *(uint *)(param_1 + 0x54) = (uVar2 * 2 >> 0x11 & 0xff) + 0x100;
    uVar1 = 3;
  }
  *(undefined *)(param_1 + 0x13) = uVar1;
  uVar2 = DAT_02022890 * 0x343fd + 0x269ec3;
  *(uint *)(param_1 + 0x58) = ((uVar2 * 2 >> 0x11 & 7) + 0x10) * -0x40;
  uVar2 = (uVar2 & 0x7fffffff) * 0x343fd + 0x269ec3;
  DAT_02022890 = uVar2 & 0x7fffffff;
  uVar1 = (undefined)(uVar2 * 2 >> 0x11);
  *(undefined *)(param_1 + 0x12) = uVar1;
  *(undefined *)(param_1 + 0x1f) = uVar1;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b31bc)[*(byte *)(param_1 + 9)] + 4);
  sub_08093708(param_1);
  return in_lr;
}

