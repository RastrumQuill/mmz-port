// sub_0804A3FC at 0x0804A3FC (thumb)

undefined4 sub_0804A3FC(int param_1)

{
  char cVar1;
  byte bVar2;
  short sVar3;
  int iVar4;
  undefined4 uVar5;
  byte *pbVar6;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x28);
  sub_0801CFF0(param_1);
  if (*(char *)(param_1 + 0xd) == '\0') {
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != -1) {
      return in_lr;
    }
    cVar1 = sub_08041354(iVar4,param_1 + 0x54);
    if (cVar1 != '\0') {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
      *(undefined4 *)(param_1 + 0x8c) = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      *(undefined4 *)(param_1 + 0xc) = 3;
      uVar5 = *(undefined4 *)((&DAT_088504bc)[*(byte *)(param_1 + 9)] + 0xc);
      goto LAB_0804a630;
    }
    if (*(int *)(iVar4 + 0x54) < *(int *)(param_1 + 0x54)) {
      *(undefined4 *)(param_1 + 0x5c) = 0x400;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
      *(undefined *)(param_1 + 0x4c) = 1;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | 0x10;
      *(undefined *)(param_1 + 0xbd) = 0;
    }
    else {
      *(undefined4 *)(param_1 + 0x5c) = 0xfffffc00;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
      *(undefined *)(param_1 + 0x4c) = 0;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
      *(undefined *)(param_1 + 0xbd) = 0x80;
    }
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    sub_08005760(param_1 + 0x74,&DAT_08853de4,param_1 + 0x54,8);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0x804a6a5;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_1 + 0x54);
    *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0x58);
    sub_0803AA58(iVar4);
    *(undefined *)(param_1 + 0xbe) = 1;
    *(undefined *)(param_1 + 0xd) = 1;
  }
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    cVar1 = *(char *)(param_1 + 0x13) + -1;
    *(char *)(param_1 + 0x13) = cVar1;
    if (cVar1 == -1) {
      *(undefined *)(param_1 + 0x12) = 0x28;
      *(undefined *)(param_1 + 0xe) = 1;
    }
  }
  else if (*(char *)(param_1 + 0xe) == '\x01') {
    if (*(int *)(param_1 + 0xb4) < *(int *)(param_1 + 0x54)) {
      bVar2 = *(char *)(param_1 + 0xbd) - 4;
    }
    else {
      bVar2 = *(char *)(param_1 + 0xbd) + 4;
    }
    pbVar6 = (byte *)(param_1 + 0xbd);
    *pbVar6 = bVar2;
    iVar4 = *(short *)((int)&DAT_08128c10 + ((*pbVar6 + 0x40) * 0x1000000 >> 0x17)) * 4;
    *(int *)(param_1 + 0x5c) = iVar4;
    sVar3 = (&DAT_08128c10)[*pbVar6];
    *(int *)(param_1 + 0x60) = sVar3 * 4;
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar4;
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + sVar3 * 4;
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 == -1) {
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
  }
  else {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  }
  if ((*(uint *)(param_1 + 0x8c) & 4) != 0) {
    sub_08005784(param_1 + 0x74,&DAT_08853dfc);
  }
  if (((*(uint *)(param_1 + 0x8c) & 0x1000) == 0) &&
     (sVar3 = sub_0804A700(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58)),
     sVar3 == 0)) {
    return in_lr;
  }
  sub_080D0894(1,param_1 + 0x54);
  sub_08002B10(0x35);
  sub_08005784(param_1 + 0x74,&DAT_08853e14);
  *(undefined4 *)(param_1 + 0xc) = 2;
  uVar5 = *(undefined4 *)((&DAT_088504bc)[*(byte *)(param_1 + 9)] + 8);
LAB_0804a630:
  *(undefined4 *)(param_1 + 0x14) = uVar5;
  return in_lr;
}

