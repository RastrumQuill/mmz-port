// sub_080DA824 at 0x080DA824 (thumb)

undefined4 sub_080DA824(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  int local_24;
  int local_20;
  uint local_1c;
  
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
  uVar1 = DAT_0202dc38 * 0x343fd + 0x269ec3;
  local_24 = *(int *)(param_1 + 0x54) + ((uVar1 * 2 >> 0x11 & 7) - 3) * 0x100;
  uVar1 = (uVar1 & 0x7fffffff) * 0x343fd + 0x269ec3;
  DAT_0202dc38 = uVar1 & 0x7fffffff;
  local_20 = *(int *)(param_1 + 0x58) + ((uVar1 * 2 >> 0x11 & 7) - 3) * 0x100;
  sub_080D0894(1,&local_24);
  local_1c = *(byte *)(param_1 + 10) >> 4 & 1;
  local_24 = *(int *)(param_1 + 0x54);
  local_20 = *(undefined4 *)(param_1 + 0x58);
  uVar1 = DAT_0202dc38 * 0x343fd + 0x269ec3;
  iVar4 = (uVar1 * 2 >> 0x11 & 1) + 1;
  uVar1 = (uVar1 & 0x7fffffff) * 0x343fd + 0x269ec3;
  DAT_0202dc38 = uVar1 & 0x7fffffff;
  iVar2 = sub_08128A9C(uVar1 * 2 >> 0x11,3);
  if (iVar4 != 0) {
    uVar1 = local_1c | local_1c << 4;
    do {
      iVar3 = sub_08128954(iVar4 + iVar2,3);
      sub_080D4898(&local_24,&UNK_08864fbc + iVar3 * 0x1c,0,uVar1 & 0xff);
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08863a28)[*(byte *)(param_1 + 9)] + 0x10);
  return in_lr;
}

