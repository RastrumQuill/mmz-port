// sub_08099644 at 0x08099644 (thumb)

undefined4 sub_08099644(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 0x20);
  sub_0800DEB4(param_1,iVar1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
  sub_080033F0(param_1 + 0x6c,*(undefined *)(param_1 + 0x10));
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  uVar2 = DAT_02022890 * 0x343fd + 0x269ec3;
  DAT_02022890 = uVar2 & 0x7fffffff;
  iVar1 = *(int *)(iVar1 + 0x4c) + (0x10 - (uVar2 * 2 >> 0x11 & 0x1f)) * 0x100;
  *(int *)(param_1 + 0x4c) = iVar1;
  uVar3 = sub_08008360(iVar1,*(undefined4 *)(param_1 + 0x50));
  *(undefined4 *)(param_1 + 0x50) = uVar3;
  *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_1 + 0x4c);
  uVar2 = DAT_02022890 * 0x343fd + 0x269ec3;
  DAT_02022890 = uVar2 & 0x7fffffff;
  *(uint *)(param_1 + 0x58) = -(uVar2 * 2 >> 0x11 & 0xff);
  *(undefined *)(param_1 + 0x12) = 0;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b31bc)[*(byte *)(param_1 + 9)] + 4);
  *(undefined *)(param_1 + 0xd) = 0;
  return in_lr;
}

