// sub_08069C34 at 0x08069C34 (thumb)

undefined4 sub_08069C34(int param_1)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  char cVar6;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    sub_08007390(param_1 + 0x74,&DAT_08362af0);
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(undefined *)(param_1 + 0x12) = 0;
    *(undefined *)(param_1 + 0x13) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  if ((*(byte *)(param_1 + 0x13) & 3) == 0) {
    sub_080B8A34(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58),
                 *(undefined *)(param_1 + 0x11));
  }
  *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + '\x01';
  bVar1 = *(char *)(param_1 + 0x12) + 1;
  *(byte *)(param_1 + 0x12) = bVar1;
  if (0x78 < bVar1) {
    *(undefined *)(param_1 + 0xd) = 3;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  iVar5 = *(int *)(DAT_0202f5c0 + 0x54) + -0x4000;
  if ((*(byte *)(DAT_0202f5c0 + 10) & 0x10) != 0) {
    iVar5 = *(int *)(DAT_0202f5c0 + 0x54) + 0x4000;
  }
  iVar3 = 0x500;
  *(undefined4 *)(param_1 + 100) = 0x500;
  if ((int)((iVar5 + 0x2000 + (*(byte *)(param_1 + 0x12) >> 4 & 1) * -0x4000) -
           *(int *)(param_1 + 0x54)) < 0) {
    iVar3 = -0x500;
  }
  *(int *)(param_1 + 100) = iVar3;
  iVar5 = (iVar3 - *(int *)(param_1 + 0x5c)) * 0x18;
  if (iVar5 < 0) {
    iVar5 = iVar5 + 0xff;
  }
  iVar5 = *(int *)(param_1 + 0x5c) + (iVar5 >> 8);
  *(int *)(param_1 + 0x5c) = iVar5;
  uVar4 = 0x300;
  if ((0x300 < iVar5) || (uVar4 = 0xfffffd00, iVar5 < -0x300)) {
    *(undefined4 *)(param_1 + 0x5c) = uVar4;
  }
  iVar3 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x54) = iVar3;
  iVar3 = iVar3 - *(int *)(param_1 + 0xb8);
  iVar5 = 0x16800;
  if ((0x16800 < iVar3) || (iVar5 = -0x16800, iVar3 < -0x16800)) {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0xb8) + iVar5;
  }
  cVar6 = '\0';
  if (*(int *)(param_1 + 0x5c) < 1) {
    iVar3 = -0xc00;
    iVar5 = sub_0800A04C(*(int *)(param_1 + 0x54) + -0xc00,*(int *)(param_1 + 0x58) + -0x800);
    if (iVar5 < 1) goto LAB_08069d76;
  }
  else {
    iVar3 = 0xc00;
    iVar5 = sub_08009ED0(*(int *)(param_1 + 0x54) + 0xc00,*(int *)(param_1 + 0x58) + -0x800);
    if (-1 < iVar5) goto LAB_08069d76;
  }
  cVar6 = '\x01';
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar5;
LAB_08069d76:
  iVar5 = sub_0800A1F4(*(int *)(param_1 + 0x54) + iVar3,*(undefined4 *)(param_1 + 0x58));
  if (0x1dff < (iVar5 - *(int *)(param_1 + 0x58)) + 0xf00U) {
    cVar6 = '\x01';
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) - *(int *)(param_1 + 0x5c);
  }
  *(char *)(param_1 + 0x12) = cVar6 + *(char *)(param_1 + 0x12);
  cVar6 = (char)(*(int *)(param_1 + 0x5c) >> 0x1f);
  if (*(int *)(param_1 + 0x5c) < 0) {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  *(byte *)(param_1 + 10) = bVar1;
  *(char *)(param_1 + 0x4c) = -cVar6;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | cVar6 * -0x10;
  sVar2 = sub_08009A3C(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + 0x800);
  if (sVar2 == 0) {
    sub_08017700(param_1,0xd02);
    sub_080177F4(param_1);
    *(undefined *)(param_1 + 0xd) = 6;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  else {
    uVar4 = sub_0800A1F4(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(undefined4 *)(param_1 + 0x58) = uVar4;
  }
  return in_lr;
}

