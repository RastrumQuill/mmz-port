// sub_0801BAC0 at 0x0801BAC0 (thumb)

undefined4 sub_0801BAC0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    iVar2 = 0x3c0000;
    iVar3 = 0x280000;
    iVar4 = 0;
    iVar5 = 0;
    if ('\x03' < DAT_0202ed30) {
      iVar2 = DAT_0202ed78;
      iVar3 = DAT_0202ed80;
      iVar4 = DAT_0202ed74;
      iVar5 = DAT_0202ed7c;
    }
    if (iVar4 < DAT_0202d00c) {
      iVar4 = DAT_0202d00c;
    }
    if (iVar5 < DAT_0202d010) {
      iVar5 = DAT_0202d010;
    }
    if (DAT_0202d014 < iVar2) {
      iVar2 = DAT_0202d014;
    }
    if (DAT_0202d018 < iVar3) {
      iVar3 = DAT_0202d018;
    }
    sub_080231B4(*(int *)(param_1 + 0x10),iVar4,iVar5,iVar2,iVar3);
    iVar1 = *(int *)(param_1 + 0x20);
    if ((iVar1 != 0) && (*(char *)(iVar1 + 8) == '\0')) {
      sub_080231B4(iVar1,iVar4,iVar5,iVar2,iVar3);
    }
  }
  return in_lr;
}

