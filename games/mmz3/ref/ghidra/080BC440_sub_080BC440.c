// sub_080BC440 at 0x080BC440 (thumb)

undefined4 sub_080BC440(int param_1)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  byte bVar4;
  int iVar5;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined *)(param_1 + 0x25) = 0x19;
    *(undefined *)(param_1 + 0x22) = *(undefined *)(param_1 + 0x12);
    uVar3 = DAT_0202f608 * 0x343fd + 0x269ec3;
    DAT_0202f608 = uVar3 & 0x7fffffff;
    iVar5 = sub_080FE4D8(uVar3 * 2 >> 0x11,3);
    sub_08017700(param_1,*(undefined2 *)(&DAT_0836b5c0 + iVar5 * 2));
    *(undefined *)(param_1 + 0x12) = 0x28;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  sub_080177F4(param_1);
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  iVar5 = *(int *)(param_1 + 0x60) + 0xc;
  *(int *)(param_1 + 0x60) = iVar5;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar5;
  cVar1 = *(char *)(param_1 + 0x12);
  bVar4 = cVar1 - 1;
  *(byte *)(param_1 + 0x12) = bVar4;
  bVar2 = cVar1 - 1;
  if (bVar2 < 8) {
    if ((bVar4 & 2) == 0) {
      bVar2 = *(byte *)(param_1 + 10) | 1;
    }
    else {
LAB_080bc4f0:
      bVar2 = *(byte *)(param_1 + 10) & 0xfe;
    }
  }
  else {
    if (0xf < bVar2) goto LAB_080bc4f8;
    if ((bVar4 & 1) != 0) goto LAB_080bc4f0;
    bVar2 = *(byte *)(param_1 + 10) | 1;
  }
  *(byte *)(param_1 + 10) = bVar2;
LAB_080bc4f8:
  if (*(char *)(param_1 + 0x12) == '\0') {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0836a0c8)[*(byte *)(param_1 + 9)] + 0xc)
    ;
  }
  return in_lr;
}

