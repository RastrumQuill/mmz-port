// sub_08096ED4 at 0x08096ED4 (thumb)

undefined4 sub_08096ED4(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x11) == '\0') {
    sub_0800DEB4(param_1,*(undefined4 *)(param_1 + 0x20));
  }
  else {
    sub_0800DEB4(param_1,*(undefined4 *)(param_1 + 0x20));
  }
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
  sub_080033F0(param_1 + 0x6c,5);
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  uVar1 = DAT_02022890 * 0x343fd + 0x269ec3;
  DAT_02022890 = uVar1 & 0x7fffffff;
  iVar2 = *(int *)(param_1 + 0x4c) + (uVar1 * 2 >> 0x11 & 7) * 0x100 + -0x400;
  *(int *)(param_1 + 0x4c) = iVar2;
  *(int *)(param_1 + 0x74) = iVar2;
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_1 + 0x50);
  *(int *)(param_1 + 0x7c) = iVar2;
  *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_1 + 0x50);
  *(undefined *)(param_1 + 0x12) = 0;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b31bc)[*(byte *)(param_1 + 9)] + 4);
  *(undefined *)(param_1 + 0xd) = 0;
  sub_08096E9C(param_1);
  return in_lr;
}

