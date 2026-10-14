// sub_08063F80 at 0x08063F80 (thumb)

undefined4 sub_08063F80(int param_1)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  sVar1 = sub_08009A3C(*(int *)(param_1 + 0x54) + -0xa80,*(int *)(param_1 + 0x58) + -0x600);
  if (((sVar1 == 0) &&
      (sVar1 = sub_08009A3C(*(int *)(param_1 + 0x54) + -0xa80,*(int *)(param_1 + 0x58) + 0xa00),
      sVar1 != 0)) &&
     (iVar2 = sub_0800A5A4(*(int *)(param_1 + 0x54) + -0xa80,*(int *)(param_1 + 0x58) + 0xa00),
     iVar2 == 0)) {
    if (*(char *)(param_1 + 0xe) == '\0') {
      sub_08017700(param_1,0x1401);
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
      *(undefined *)(param_1 + 0x4c) = 0;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
      sub_08007390(param_1 + 0x74,&DAT_08362290);
      *(undefined4 *)(param_1 + 0x5c) = 0xffffff80;
      *(undefined4 *)(param_1 + 0x60) = 0;
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    else if (*(char *)(param_1 + 0xe) != '\x01') {
      return in_lr;
    }
    iVar2 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x54) = iVar2;
    if ((0x5fff < *(uint *)(param_1 + 0xbc)) && (0x2800 < *(int *)(param_1 + 0xb4) - iVar2)) {
      *(undefined *)(param_1 + 0xd) = 0;
      *(undefined *)(param_1 + 0xe) = 0;
    }
    uVar3 = sub_0800A104(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(undefined4 *)(param_1 + 0x58) = uVar3;
    sub_080177F4(param_1);
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
    *(undefined *)(param_1 + 0x4c) = 0;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
    *(undefined *)(param_1 + 0xd) = 0;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

