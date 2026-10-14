// sub_08091728 at 0x08091728 (thumb)

undefined4 sub_08091728(int param_1)

{
  byte bVar1;
  undefined uVar2;
  uint uVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x20);
  sub_0800DEFC(param_1,iVar4);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  sub_080033F0(param_1 + 0x6c,(&DAT_082b39c4)[*(byte *)(param_1 + 0x11)]);
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  bVar1 = *(byte *)(iVar4 + 10) >> 4;
  *(byte *)(param_1 + 0x44) = bVar1 & 1;
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  if (*(byte *)(param_1 + 0x11) < 2) {
    uVar3 = DAT_02022890 * 0x343fd + 0x269ec3;
    DAT_02022890 = uVar3 & 0x7fffffff;
    iVar4 = (uVar3 * 0x80 >> 0x17) + 0x100;
    *(int *)(param_1 + 0x54) = iVar4;
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) goto LAB_08091804;
    iVar4 = -iVar4;
  }
  else {
    uVar3 = DAT_02022890 * 0x343fd + 0x269ec3;
    DAT_02022890 = uVar3 & 0x7fffffff;
    iVar4 = (uVar3 * 0x40 >> 0x16) - 0x200;
  }
  *(int *)(param_1 + 0x54) = iVar4;
LAB_08091804:
  uVar3 = DAT_02022890 * 0x343fd + 0x269ec3;
  DAT_02022890 = uVar3 & 0x7fffffff;
  *(uint *)(param_1 + 0x58) = -((uVar3 * 0x40 >> 0x16) + 0x200);
  if (*(int *)(param_1 + 0x54) < 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 2;
  }
  *(undefined *)(param_1 + 0x13) = uVar2;
  uVar3 = DAT_02022890 * 0x343fd + 0x269ec3;
  DAT_02022890 = uVar3 & 0x7fffffff;
  uVar2 = (undefined)(uVar3 * 2 >> 0x11);
  *(undefined *)(param_1 + 0x12) = uVar2;
  *(undefined *)(param_1 + 0x1f) = uVar2;
  *(char *)(param_1 + 0x75) = (char)((*(byte *)(param_1 + 0x11) & 1) << 1);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b31bc)[*(byte *)(param_1 + 9)] + 4);
  sub_0809154C(param_1);
  return in_lr;
}

