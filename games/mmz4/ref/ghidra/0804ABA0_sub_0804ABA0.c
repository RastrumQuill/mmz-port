// sub_0804ABA0 at 0x0804ABA0 (thumb)

undefined4 sub_0804ABA0(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  sub_0801CFF0();
  if ((*(byte *)(param_1 + 0x11) < 3) &&
     (cVar1 = *(char *)(param_1 + 0x12) + '\x01', *(char *)(param_1 + 0x12) = cVar1, cVar1 == '\t'))
  {
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      iVar2 = *(int *)(param_1 + 0x54);
      iVar3 = -0x1000;
    }
    else {
      iVar2 = *(int *)(param_1 + 0x54);
      iVar3 = 0x1000;
    }
    *(int *)(param_1 + 100) = iVar2 + iVar3;
    iVar3 = sub_08008534(*(undefined4 *)(param_1 + 100),*(undefined4 *)(param_1 + 0x58));
    *(int *)(param_1 + 0x68) = iVar3;
    iVar2 = iVar3 - *(int *)(param_1 + 0x58);
    if (iVar2 < 0) {
      iVar2 = *(int *)(param_1 + 0x58) - iVar3;
    }
    if (iVar2 < 0xf00) {
      sub_0804A7CC(*(undefined4 *)(param_1 + 0x28),param_1,*(char *)(param_1 + 0x11) + '\x01');
    }
  }
  if (*(char *)(param_1 + 0xd) == '\0') {
    if ((byte)(*(char *)(param_1 + 0x71) - 1U) < 10) {
      sub_08005794(param_1 + 0x74,&DAT_08853eb8,0xffffffff,0xffffffff,0xffffffff,
                   *(byte *)(param_1 + 0x11) + 2);
    }
    else {
      sub_08005794(param_1 + 0x74,&DAT_08853e88,0xffffffff,0xffffffff,0xffffffff,
                   *(byte *)(param_1 + 0x11) + 2);
    }
    if ((*(uint *)(param_1 + 0x8c) & 0x1000) == 0) {
      if ((*(uint *)(param_1 + 0x8c) & 4) == 0) goto LAB_0804aca8;
    }
    else {
      sub_08002B10(0x2b);
    }
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  else {
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
  }
LAB_0804aca8:
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088504bc)[*(byte *)(param_1 + 9)] + 8);
  }
  return in_lr;
}

