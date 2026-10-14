// sub_08072594 at 0x08072594 (thumb)

undefined4 sub_08072594(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_08017700(param_1,0x2701);
    *(undefined *)(param_1 + 0x12) = 0x40;
    *(undefined *)(param_1 + 0x13) = 0;
    sub_08007390(param_1 + 0x74,&DAT_083633d8);
    iVar4 = *(int *)(DAT_0202f5c0 + 0x54) - *(int *)(param_1 + 0x54);
    iVar3 = *(int *)(DAT_0202f5c0 + 0x58) - (*(int *)(param_1 + 0x58) + -0x600);
    if ((iVar4 == 0) && (iVar3 == 0)) {
      iVar4 = 0x100;
      iVar3 = 0;
    }
    else {
      iVar2 = sub_080FE124((iVar4 >> 2) * (iVar4 >> 2) + (iVar3 >> 2) * (iVar3 >> 2));
      uVar5 = (uint)(iVar2 << 0x10) >> 0xe;
      iVar4 = FUN_080fe2f8(iVar4 * 0x100,uVar5);
      iVar3 = FUN_080fe2f8(iVar3 * 0x100,uVar5);
    }
    *(int *)(param_1 + 100) = iVar4 * 0xc0 >> 8;
    *(int *)(param_1 + 0x68) = iVar3 * 0xc0 >> 8;
    if (*(int *)(DAT_0202f5c0 + 0x54) < *(int *)(param_1 + 0x54)) {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
      *(undefined *)(param_1 + 0x4c) = 0;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
    }
    else {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
      *(undefined *)(param_1 + 0x4c) = 1;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | 0x10;
    }
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  iVar4 = *(int *)(param_1 + 0x5c) +
          ((*(int *)(param_1 + 100) - *(int *)(param_1 + 0x5c)) * 0x20 >> 8);
  *(int *)(param_1 + 0x5c) = iVar4;
  iVar3 = *(int *)(param_1 + 0x60) +
          ((*(int *)(param_1 + 0x68) - *(int *)(param_1 + 0x60)) * 0x20 >> 8);
  *(int *)(param_1 + 0x60) = iVar3;
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar4;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar3;
  sub_080733A0(param_1);
  cVar1 = *(char *)(param_1 + 0x13);
  *(char *)(param_1 + 0x13) = cVar1 + '\x01';
  cVar1 = sub_080FE4D8(cVar1,0xc);
  if (cVar1 == '\0') {
    sub_08073144(param_1,0);
  }
  sub_080177F4(param_1);
  cVar1 = *(char *)(param_1 + 0xba);
  if (((cVar1 == '\0') || (cVar1 = cVar1 + -1, *(char *)(param_1 + 0xba) = cVar1, cVar1 == '\0')) &&
     (iVar3 = sub_0807333C(param_1), iVar3 == 2)) {
    if (*(int *)(DAT_0202f5c0 + 0x54) < *(int *)(param_1 + 0x54)) {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
      *(undefined *)(param_1 + 0x4c) = 0;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
    }
    else {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
      *(undefined *)(param_1 + 0x4c) = 1;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | 0x10;
    }
    *(undefined *)(param_1 + 0xd) = 2;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  else {
    if (*(char *)(param_1 + 0x12) == '\0') goto LAB_0807276c;
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
  }
  if (*(char *)(param_1 + 0x12) != '\0') {
    return in_lr;
  }
LAB_0807276c:
  *(undefined *)(param_1 + 0xd) = 0;
  *(undefined *)(param_1 + 0xe) = 0;
  return in_lr;
}

