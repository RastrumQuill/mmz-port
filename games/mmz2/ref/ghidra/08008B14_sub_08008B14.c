// sub_08008B14 at 0x08008B14 (thumb)

undefined4 sub_08008B14(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(&DAT_0831408c + (DAT_020011d0 & 0x7f) * 4);
  sub_080EF118(param_2,*(undefined4 *)(*(int *)(iVar3 + 4) + 8));
  iVar2 = 0;
  iVar1 = 2;
  do {
    *(undefined4 *)((int)&DAT_0200104c + iVar2) = *(undefined4 *)(param_2 + 0x10);
    *(undefined4 *)((int)&DAT_02001050 + iVar2) = *(undefined4 *)(param_2 + 0x14);
    if (*(int *)((int)&DAT_02001024 + iVar2) != 0) {
      sub_080EF11C((int)&DAT_02001020 + iVar2,iVar3);
    }
    iVar2 = iVar2 + 0x88;
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  sub_08002824(&DAT_0202d01c,((ushort)(&DAT_02000f94)[DAT_0200107c >> 4] & 0x1f00) << 3,0x1000);
  DAT_0202d002 = 0;
  return in_lr;
}

