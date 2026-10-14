// sub_08049558 at 0x08049558 (thumb)

undefined4 sub_08049558(int param_1)

{
  byte bVar1;
  char cVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 in_lr;
  
  iVar5 = *(int *)(param_1 + 0x2c);
  sub_0801CFF0();
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + *(int *)(param_1 + 0x68);
  if (*(byte *)(iVar5 + 199) < 4) {
    cVar2 = sub_0803A9A8(param_1,1);
    if ((*(char *)(param_1 + 0x10) != '\0') || (*(char *)(iVar5 + 0xfa) != '\x02'))
    goto LAB_080495b8;
    bVar1 = *(byte *)(param_1 + 10);
  }
  else {
    cVar3 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar3;
    cVar2 = '\0';
    if (cVar3 == -1) {
      cVar2 = -1;
    }
LAB_080495b8:
    if ((cVar2 == '\0') && ((*(uint *)(param_1 + 0x8c) & 4) == 0)) {
      return in_lr;
    }
    if (cVar2 != -1) {
      *(undefined4 *)(param_1 + 0xc) = 2;
      uVar4 = *(undefined4 *)((&DAT_088504bc)[*(byte *)(param_1 + 9)] + 8);
      goto LAB_08049618;
    }
    bVar1 = *(byte *)(param_1 + 10);
  }
  *(byte *)(param_1 + 10) = bVar1 & 0xfc;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined *)(param_1 + 0x94) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
  *(undefined4 *)(param_1 + 0xc) = 3;
  uVar4 = *(undefined4 *)((&DAT_088504bc)[*(byte *)(param_1 + 9)] + 0xc);
LAB_08049618:
  *(undefined4 *)(param_1 + 0x14) = uVar4;
  return in_lr;
}

