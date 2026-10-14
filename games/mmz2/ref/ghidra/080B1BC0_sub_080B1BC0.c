// sub_080B1BC0 at 0x080B1BC0 (thumb)

undefined4 sub_080B1BC0(int param_1)

{
  char cVar1;
  short sVar2;
  int iVar3;
  undefined4 in_lr;
  
  sub_080128D4();
  if ((DAT_0202ebbb & 0x20) == 0) {
    iVar3 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x54) = iVar3;
    *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + *(int *)(param_1 + 100);
    sVar2 = sub_08008CFC(iVar3,*(int *)(param_1 + 0x58) + 0x400);
    if (sVar2 == 0) {
      iVar3 = *(int *)(param_1 + 0x60) + 0x40;
      *(int *)(param_1 + 0x60) = iVar3;
      iVar3 = *(int *)(param_1 + 0x58) + iVar3;
      *(int *)(param_1 + 0x58) = iVar3;
      sVar2 = sub_08008CFC(*(undefined4 *)(param_1 + 0x54),iVar3 + 0x400);
      if (sVar2 != 0) {
        *(undefined *)(param_1 + 0x12) = 0;
      }
    }
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 == -1) {
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08345998)[*(byte *)(param_1 + 9)] + 8)
      ;
      sub_080B1C70(param_1);
    }
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08345998)[*(byte *)(param_1 + 9)] + 0xc)
    ;
  }
  return in_lr;
}

