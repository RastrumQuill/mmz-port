// sub_080D9AB8 at 0x080D9AB8 (thumb)

undefined4 sub_080D9AB8(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 in_lr;
  undefined4 local_14;
  undefined4 local_10;
  
  uVar4 = *(byte *)(param_1 + 10) >> 4 & 1;
  local_14 = *(undefined4 *)(param_1 + 0x54);
  local_10 = *(undefined4 *)(param_1 + 0x58);
  uVar1 = DAT_0202dc38 * 0x343fd + 0x269ec3;
  DAT_0202dc38 = uVar1 & 0x7fffffff;
  iVar3 = (uVar1 * 2 >> 0x11 & 1) + 2;
  if (iVar3 != 0) {
    do {
      iVar2 = sub_08128954(iVar3,3);
      sub_080D4898(&local_14,&UNK_08864de8 + iVar2 * 0x1c,0,uVar4 | uVar4 << 4);
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return in_lr;
}

