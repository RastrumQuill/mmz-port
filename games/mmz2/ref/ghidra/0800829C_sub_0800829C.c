// sub_0800829C at 0x0800829C (thumb)

undefined4 sub_0800829C(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  int local_18;
  int local_14;
  
  local_18 = ((DAT_020011c8 >> 8) + -0x78) * 0x100;
  local_14 = ((DAT_020011cc >> 8) + -0x50) * 0x100;
  iVar3 = *(int *)(&DAT_0831408c + (DAT_020011d0 & 0x7f) * 4);
  sub_080EF118(&local_18,*(undefined4 *)(*(int *)(iVar3 + 4) + 0xc));
  iVar2 = 0;
  iVar1 = 2;
  do {
    if (*(int *)((int)&DAT_02001028 + iVar2) != 0) {
      sub_080EF11C((int)&DAT_02001020 + iVar2,iVar3);
    }
    iVar2 = iVar2 + 0x88;
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  DAT_02000f90 = DAT_02000f90 & 0xc1ff;
  return in_lr;
}

