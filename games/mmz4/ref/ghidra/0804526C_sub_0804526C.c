// sub_0804526C at 0x0804526C (thumb)

undefined4 sub_0804526C(int param_1)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x2c);
  sub_0801CFF0(param_1);
  if (*(char *)(param_1 + 0xd) == '\0') {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    iVar4 = *(int *)(param_1 + 0x5c) + *(int *)(param_1 + 100);
    *(int *)(param_1 + 0x5c) = iVar4;
    if (iVar4 < 0) {
      iVar4 = -iVar4;
    }
    if (iVar4 < 0x180) {
      uVar6 = *(undefined4 *)(param_1 + 0x2c);
      sub_0801CF00(param_1,0x820f);
      sub_0801CFF0(param_1);
      iVar4 = param_1 + 0x54;
      sub_08044FF4(uVar6,iVar4,0,*(byte *)(param_1 + 10) >> 4 & 1);
      sub_08044FF4(uVar6,iVar4,1,*(byte *)(param_1 + 10) >> 4 & 1);
      sub_08044FF4(uVar6,iVar4,2,*(byte *)(param_1 + 10) >> 4 & 1);
      sub_08044FF4(uVar6,iVar4,3,*(byte *)(param_1 + 10) >> 4 & 1);
      sub_08002B10(0x36);
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    }
  }
  else {
    iVar5 = *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar5;
    iVar4 = iVar5;
    if (iVar5 < 0) {
      iVar4 = -iVar5;
    }
    if (iVar4 < 0x400) {
      *(int *)(param_1 + 0x5c) = iVar5 + *(int *)(param_1 + 100) * -4;
    }
  }
  cVar1 = sub_0803A9A8(param_1,3);
  if (*(char *)(iVar3 + 0xfa) == '\x02') {
    cVar1 = '\x01';
  }
  if (((cVar1 != '\0') ||
      (cVar2 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar2, cVar2 == -1)) ||
     ((*(uint *)(param_1 + 0x8c) & 4) != 0)) {
    if (cVar1 != -1) {
      sub_080D0894(1,param_1 + 0x54);
      sub_08002B10(0x35);
    }
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) - *(int *)(param_1 + 0x5c);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088504bc)[*(byte *)(param_1 + 9)] + 8);
    sub_08045254(param_1);
  }
  return in_lr;
}

