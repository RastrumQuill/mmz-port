// sub_08022374 at 0x08022374 (thumb)

undefined4 sub_08022374(int param_1)

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
    if ('\x03' < DAT_020302a0) {
      iVar2 = DAT_020302e8;
      iVar3 = DAT_020302f0;
      iVar4 = DAT_020302e4;
      iVar5 = DAT_020302ec;
    }
    if (iVar4 < DAT_0202e494) {
      iVar4 = DAT_0202e494;
    }
    if (iVar5 < DAT_0202e498) {
      iVar5 = DAT_0202e498;
    }
    if (DAT_0202e49c < iVar2) {
      iVar2 = DAT_0202e49c;
    }
    if (DAT_0202e4a0 < iVar3) {
      iVar3 = DAT_0202e4a0;
    }
    sub_08026F8C(*(int *)(param_1 + 0x10),iVar4,iVar5,iVar2,iVar3);
    iVar1 = *(int *)(param_1 + 0x20);
    if ((iVar1 != 0) && (*(char *)(iVar1 + 8) == '\0')) {
      sub_08026F8C(iVar1,iVar4,iVar5,iVar2,iVar3);
    }
  }
  return in_lr;
}

