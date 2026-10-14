// sub_080966F8 at 0x080966F8 (thumb)

undefined4 sub_080966F8(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 in_lr;
  
  sub_0800DEB4(param_1,*(undefined4 *)(param_1 + 0x20));
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
  sub_080033F0(param_1 + 0x6c,10);
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  *(undefined *)(param_1 + 0x44) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + -0x2000;
  if (*(int *)(DAT_0202286c + 0x4c) < *(int *)(param_1 + 0x4c)) {
    uVar1 = DAT_02022890 * 0x343fd + 0x269ec3;
    iVar2 = (uVar1 * 2 >> 0x11 & 0xff) + 0x80;
  }
  else {
    uVar1 = DAT_02022890 * 0x343fd + 0x269ec3;
    iVar2 = -((uVar1 * 2 >> 0x11 & 0xff) + 0x80);
  }
  DAT_02022890 = uVar1 & 0x7fffffff;
  *(int *)(param_1 + 0x54) = iVar2;
  *(undefined4 *)(param_1 + 0x58) = 0xfffffe00;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b31bc)[*(byte *)(param_1 + 9)] + 4);
  *(undefined *)(param_1 + 0xd) = 0;
  return in_lr;
}

