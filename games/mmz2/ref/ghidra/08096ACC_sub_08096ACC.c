// sub_08096ACC at 0x08096ACC (thumb)

undefined4 sub_08096ACC(int param_1)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  sub_08065A4C();
  if (*(char *)(param_1 + 0xe) == '\0') {
    uVar1 = sub_08038E6C(*(int *)(param_1 + 0xbc) - *(int *)(param_1 + 0x54),
                         *(int *)(param_1 + 0xc0) - *(int *)(param_1 + 0x58));
    *(int *)(param_1 + 0x5c) = (int)(short)(&DAT_080ef450)[(uVar1 & 0xff) + 0x40 & 0xff] / 2;
    *(int *)(param_1 + 0x60) = (int)(short)(&DAT_080ef450)[uVar1 & 0xff] / 2;
    *(undefined *)(param_1 + 0x12) = 0x3c;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  if ((*(byte *)(param_1 + 0x12) & 3) == 0) {
    sub_080128D4(param_1);
  }
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  iVar4 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x54) = iVar4;
  iVar3 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x58) = iVar3;
  if (cVar2 == '\0') {
    if (((*(int *)(param_1 + 0xbc) - iVar4) + 0x1000U < 0x2001) ||
       ((*(int *)(param_1 + 0xc0) - iVar3) + 0x1000U < 0x2001)) {
      *(undefined *)(param_1 + 0xd) = 1;
      *(undefined *)(param_1 + 0xe) = 0;
    }
    iVar4 = *(int *)(param_1 + 0xbc);
    iVar3 = *(int *)(param_1 + 0xc0);
    uVar1 = sub_08038E6C(iVar4 - *(int *)(param_1 + 0x54),iVar3 - *(int *)(param_1 + 0x58),iVar3,
                         iVar4,iVar4,iVar3);
    *(int *)(param_1 + 0x5c) = (int)(short)(&DAT_080ef450)[(uVar1 & 0xff) + 0x40 & 0xff] / 2;
    *(int *)(param_1 + 0x60) = (int)(short)(&DAT_080ef450)[uVar1 & 0xff] / 2;
    *(undefined *)(param_1 + 0x12) = 0x3c;
  }
  return in_lr;
}

