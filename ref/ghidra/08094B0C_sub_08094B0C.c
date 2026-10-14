// sub_08094B0C at 0x08094B0C (thumb)

undefined4 sub_08094B0C(int param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x20);
  sub_0800DEB4(param_1,iVar2);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
  sub_080033F0(param_1 + 0x6c,7);
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  uVar3 = DAT_02022890 * 0x343fd + 0x269ec3;
  uVar6 = uVar3 & 0x7fffffff;
  DAT_02022890 = uVar6;
  iVar4 = sub_080C8CB0(uVar3 * 2 >> 0x11,0x18);
  iVar5 = (0xc - iVar4) * 0x100;
  *(int *)(param_1 + 0x74) = iVar5;
  uVar3 = uVar6 * 0x343fd + 0x269ec3;
  DAT_02022890 = uVar3 & 0x7fffffff;
  *(uint *)(param_1 + 0x78) = ((uVar3 * 2 >> 0x11 & 0x14) + 4) * -0x100;
  if ((*(byte *)(DAT_0202286c + 10) & 0x10) == 0) {
    iVar5 = *(int *)(DAT_0202286c + 0x4c) + (0xc - iVar4) * -0x100;
  }
  else {
    iVar5 = *(int *)(DAT_0202286c + 0x4c) + iVar5;
  }
  *(int *)(param_1 + 0x4c) = iVar5;
  *(int *)(param_1 + 0x50) = *(int *)(DAT_0202286c + 0x50) + *(int *)(param_1 + 0x78);
  bVar1 = *(byte *)(iVar2 + 10) >> 4;
  *(byte *)(param_1 + 0x44) = bVar1 & 1;
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  sub_0801D4FC(DAT_0202286c,8);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b31bc)[*(byte *)(param_1 + 9)] + 4);
  sub_08094C44(param_1);
  return in_lr;
}

