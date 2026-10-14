// sub_080BC914 at 0x080BC914 (thumb)

undefined4 sub_080BC914(int param_1)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 == 1) {
LAB_080bc972:
    cVar3 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar3;
    if (cVar3 == '\0') {
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    sub_080177F4(param_1);
    return in_lr;
  }
  if (bVar1 < 2) {
    if (bVar1 != 0) {
      return in_lr;
    }
    *(undefined *)(param_1 + 0x25) = 0x19;
    *(undefined *)(param_1 + 0x22) = *(undefined *)(param_1 + 0x12);
    uVar4 = DAT_0202f608 * 0x343fd + 0x269ec3;
    DAT_0202f608 = uVar4 & 0x7fffffff;
    iVar5 = sub_080FE4D8(uVar4 * 2 >> 0x11,3);
    sub_08017700(param_1,*(undefined2 *)(&DAT_0836b5d2 + iVar5 * 2));
    *(undefined *)(param_1 + 0x12) = 0x12;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    goto LAB_080bc972;
  }
  if (bVar1 == 2) {
    *(undefined *)(param_1 + 0x12) = 0x10;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (bVar1 != 3) {
    return in_lr;
  }
  bVar1 = *(byte *)(param_1 + 0x12);
  if (bVar1 < 9) {
    cVar3 = sub_080FE4D8(*(undefined *)(param_1 + 0x12),3);
    if (cVar3 == '\0') {
      bVar2 = *(byte *)(param_1 + 10) | 1;
      goto LAB_080bc9ea;
    }
  }
  else if ((bVar1 & 1) != 0) {
    bVar2 = *(byte *)(param_1 + 10) | 1;
    goto LAB_080bc9ea;
  }
  bVar2 = *(byte *)(param_1 + 10) & 0xfe;
LAB_080bc9ea:
  *(byte *)(param_1 + 10) = bVar2;
  *(byte *)(param_1 + 0x12) = bVar1 - 1;
  if ((byte)(bVar1 - 1) == '\0') {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0836a0c8)[*(byte *)(param_1 + 9)] + 0xc)
    ;
  }
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  sub_080177F4(param_1);
  return in_lr;
}

