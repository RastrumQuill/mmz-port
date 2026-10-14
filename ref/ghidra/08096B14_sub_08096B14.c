// sub_08096B14 at 0x08096B14 (thumb)

undefined4 sub_08096B14(int param_1)

{
  undefined uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  undefined4 in_lr;
  
  sub_0800DEFC(param_1,*(undefined4 *)(param_1 + 0x20));
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
  sub_080033F0(param_1 + 0x6c,*(char *)(param_1 + 0x10) + '\x01');
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  uVar3 = DAT_02022890 * 0x343fd + 0x269ec3;
  *(uint *)(param_1 + 0x50) = (*(int *)(param_1 + 0x50) + -0x1000) - (uVar3 * 8 >> 0x13);
  uVar3 = (uVar3 & 0x7fffffff) * 0x343fd + 0x269ec3;
  uVar4 = uVar3 & 0x7fffffff;
  uVar1 = (undefined)(uVar3 * 2 >> 0x11);
  *(undefined *)(param_1 + 0x13) = uVar1;
  *(undefined *)(param_1 + 0x1f) = uVar1;
  if (*(int *)(DAT_0202286c + 0x4c) < *(int *)(param_1 + 0x4c)) {
    uVar3 = uVar4 * 0x343fd + 0x269ec3;
    *(uint *)(param_1 + 0x54) = (uVar3 * 2 >> 0x11 & 0xff) + 0x180;
    uVar3 = (uVar3 & 0x7fffffff) * 0x343fd + 0x269ec3;
    cVar2 = ((byte)(uVar3 * 2 >> 0x11) & 3) + 2;
  }
  else {
    uVar3 = uVar4 * 0x343fd + 0x269ec3;
    *(uint *)(param_1 + 0x54) = -((uVar3 * 2 >> 0x11 & 0xff) + 0x180);
    uVar3 = (uVar3 & 0x7fffffff) * 0x343fd + 0x269ec3;
    cVar2 = -(((byte)(uVar3 * 2 >> 0x11) & 3) + 2);
  }
  DAT_02022890 = uVar3 & 0x7fffffff;
  *(char *)(param_1 + 0x12) = cVar2;
  uVar3 = DAT_02022890 * 0x343fd + 0x269ec3;
  DAT_02022890 = uVar3 & 0x7fffffff;
  *(uint *)(param_1 + 0x58) = (uVar3 * 2 >> 0x11 & 3) * -0x40;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b31bc)[*(byte *)(param_1 + 9)] + 4);
  *(undefined *)(param_1 + 0xd) = 0;
  return in_lr;
}

