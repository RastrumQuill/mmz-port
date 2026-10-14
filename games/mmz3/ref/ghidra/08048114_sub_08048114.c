// sub_08048114 at 0x08048114 (thumb)

undefined4 sub_08048114(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    *(undefined4 *)(param_1 + 0x5c) = 0x300;
    *(uint *)(param_1 + 0x5c) = (uint)*(byte *)(param_1 + 199) * -0x600 + 0x300;
    sub_08007390(param_1 + 0x74,&DAT_0835ee3c);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 1:
    iVar3 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x54) = iVar3;
    if ((*(char *)(param_1 + 199) == '\0') &&
       (iVar2 = *(int *)(param_1 + 0xb4) + -0x5000, iVar2 < iVar3)) {
      *(int *)(param_1 + 0x54) = iVar2;
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    if ((*(char *)(param_1 + 199) == '\x01') &&
       (iVar3 = *(int *)(param_1 + 0xb4) + 0x5000, *(int *)(param_1 + 0x54) < iVar3)) {
      *(int *)(param_1 + 0x54) = iVar3;
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    break;
  case 2:
    *(undefined *)(param_1 + 0x13) = 0x40;
    *(undefined4 *)(param_1 + 100) = 0x2a;
    *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_1 + 0x54);
    *(int *)(param_1 + 0xc0) = *(int *)(param_1 + 0x58) + -0x1000;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 3:
    iVar3 = *(int *)(param_1 + 100) + -1;
    *(int *)(param_1 + 100) = iVar3;
    if (iVar3 == 0) {
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    if (*(char *)(param_1 + 199) == '\0') {
      cVar1 = *(char *)(param_1 + 0x13) + -6;
    }
    else {
      cVar1 = *(char *)(param_1 + 0x13) + '\x06';
    }
    *(char *)(param_1 + 0x13) = cVar1;
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0xbc);
    *(int *)(param_1 + 0x54) =
         *(int *)(param_1 + 0xbc) +
         *(short *)((int)&DAT_080fe64c + ((*(byte *)(param_1 + 0x13) + 0x40) * 0x1000000 >> 0x17)) *
         0x10;
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0xc0);
    *(int *)(param_1 + 0x58) =
         *(int *)(param_1 + 0xc0) + (short)(&DAT_080fe64c)[*(byte *)(param_1 + 0x13)] * 0x10;
    break;
  case 4:
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 5:
    iVar3 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x54) = iVar3;
    if ((*(char *)(param_1 + 199) == '\0') &&
       (iVar2 = *(int *)(param_1 + 0xb4) + -0x1000, iVar2 < iVar3)) {
      *(int *)(param_1 + 0x54) = iVar2;
      *(undefined *)(param_1 + 0xd) = 0xf;
      *(undefined *)(param_1 + 0xe) = 0;
    }
    if ((*(char *)(param_1 + 199) == '\x01') &&
       (iVar3 = *(int *)(param_1 + 0xb4) + 0x1000, *(int *)(param_1 + 0x54) < iVar3)) {
      *(int *)(param_1 + 0x54) = iVar3;
      *(undefined *)(param_1 + 0xd) = 0xf;
      *(undefined *)(param_1 + 0xe) = 0;
    }
  }
  *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x01';
  cVar1 = sub_080FE4D8(*(undefined *)(param_1 + 0x12),7);
  if (cVar1 == '\0') {
    uVar4 = DAT_0202f608 * 0x343fd + 0x269ec3;
    uVar5 = (uVar4 & 0x7fffffff) * 0x343fd + 0x269ec3;
    DAT_0202f608 = uVar5 & 0x7fffffff;
    sub_080BC060(*(int *)(param_1 + 0x54) + ((uVar4 * 0x20 >> 0x15) - 0x400),
                 *(int *)(param_1 + 0x58) + (uVar5 * 0x40 >> 0x16) + 0x800,0,0,
                 *(undefined *)(param_1 + 0x10));
  }
  sub_080041E4(*(undefined *)(param_1 + 0xc6));
  sub_080177F4(param_1);
  return in_lr;
}

