// sub_08027C1C at 0x08027C1C (thumb)

undefined4 sub_08027C1C(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  
  iVar2 = 0x3c0000;
  if (*(int *)(param_1 + 0x10) != 0) {
    if ((DAT_02000c80 & 0x7f) == 4) {
      iVar2 = 0x78000000;
    }
    iVar3 = 0x280000;
    iVar4 = 0;
    iVar5 = 0;
    if ('\x03' < DAT_0202ea10) {
      iVar2 = DAT_0202ea58;
      iVar3 = DAT_0202ea60;
      iVar4 = DAT_0202ea54;
      iVar5 = DAT_0202ea5c;
    }
    if (iVar4 < DAT_0202cac4) {
      iVar4 = DAT_0202cac4;
    }
    if (iVar5 < DAT_0202cac8) {
      iVar5 = DAT_0202cac8;
    }
    if (DAT_0202cacc < iVar2) {
      iVar2 = DAT_0202cacc;
    }
    if (DAT_0202cad0 < iVar3) {
      iVar3 = DAT_0202cad0;
    }
    sub_0802CBD4(*(int *)(param_1 + 0x10),iVar4,iVar5,iVar2,iVar3);
    iVar1 = *(int *)(param_1 + 0x20);
    if ((iVar1 != 0) && (*(char *)(iVar1 + 8) == '\0')) {
      sub_0802CBD4(iVar1,iVar4,iVar5,iVar2,iVar3);
    }
  }
  return in_lr;
}

