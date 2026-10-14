// sub_080453A8 at 0x080453A8 (thumb)

undefined4 sub_080453A8(int param_1)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  
  iVar5 = *(int *)(param_1 + 0x2c);
  sub_0801CFF0();
  if (*(char *)(param_1 + 0xd) == '\0') {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + *(int *)(param_1 + 100);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    iVar3 = *(int *)(param_1 + 0x60) + *(int *)(param_1 + 0x68);
    *(int *)(param_1 + 0x60) = iVar3;
    if (iVar3 == 0) {
      *(undefined *)(param_1 + 0xd) = 1;
    }
  }
  else {
    iVar4 = *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar4;
    iVar3 = iVar4;
    if (iVar4 < 0) {
      iVar3 = -iVar4;
    }
    if (iVar3 < 0x800) {
      *(int *)(param_1 + 0x5c) = iVar4 + *(int *)(param_1 + 100) * 2;
    }
  }
  cVar1 = sub_0803A9A8(param_1,3);
  if (*(char *)(iVar5 + 0xfa) == '\x02') {
    cVar1 = '\x01';
  }
  if (((cVar1 != '\0') ||
      (cVar2 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar2, cVar2 == -1)) ||
     ((*(uint *)(param_1 + 0x8c) & 4) != 0)) {
    if (cVar1 != -1) {
      sub_080D0894(2,param_1 + 0x54);
      sub_08002B10(0x35);
    }
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088504bc)[*(byte *)(param_1 + 9)] + 8);
    sub_08045254(param_1);
  }
  return in_lr;
}

