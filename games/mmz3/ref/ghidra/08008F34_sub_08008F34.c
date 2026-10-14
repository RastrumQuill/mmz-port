// sub_08008F34 at 0x08008F34 (thumb)

undefined4 sub_08008F34(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  int local_18;
  int local_14;
  
  local_18 = ((DAT_02002648 >> 8) + -0x78) * 0x100;
  local_14 = ((DAT_0200264c >> 8) + -0x50) * 0x100;
  iVar3 = *(int *)(&DAT_08336ac0 + (DAT_02002650 & 0x7f) * 4);
  sub_080FE2C0(&local_18,*(undefined4 *)(*(int *)(iVar3 + 4) + 0xc));
  iVar2 = 0;
  iVar1 = 2;
  do {
    if (*(int *)((int)&DAT_020024a8 + iVar2) != 0) {
      sub_080FE2C4((int)&DAT_020024a0 + iVar2,iVar3);
    }
    iVar2 = iVar2 + 0x88;
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  DAT_020023c0 = DAT_020023c0 & 0xc1ff;
  return in_lr;
}

