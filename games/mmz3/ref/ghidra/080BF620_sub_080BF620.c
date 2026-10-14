// sub_080BF620 at 0x080BF620 (thumb)

undefined4 sub_080BF620(int param_1)

{
  char cVar1;
  byte bVar2;
  short sVar3;
  uint uVar4;
  int iVar5;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_08017528(param_1);
    sub_08017700(param_1,*(byte *)(param_1 + 0x12) + 0x4c05);
    uVar4 = DAT_0202f608 * 0x343fd + 0x269ec3;
    *(uint *)(param_1 + 0x5c) =
         (uint)*(byte *)(param_1 + 0x12) * 0x80 + -0x200 + (uVar4 * 2 >> 0x11 & 0xff);
    uVar4 = (uVar4 & 0x7fffffff) * 0x343fd + 0x269ec3;
    *(uint *)(param_1 + 0x60) = -0x380 - (uVar4 * 2 >> 0x11 & 0xff);
    *(undefined *)(param_1 + 0x13) = 0;
    uVar4 = (uVar4 & 0x7fffffff) * 0x343fd + 0x269ec3;
    DAT_0202f608 = uVar4 & 0x7fffffff;
    iVar5 = sub_080FE4D8(uVar4 * 2 >> 0x11,3);
    iVar5 = iVar5 + 1;
    *(int *)(param_1 + 100) = iVar5;
    uVar4 = sub_080FE460(*(undefined *)(param_1 + 0x12),3);
    *(uint *)(param_1 + 100) = iVar5 - iVar5 * (((uVar4 ^ 1) << 0x18) >> 0x17);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  bVar2 = *(char *)(param_1 + 0x12) + 1;
  *(byte *)(param_1 + 0x12) = bVar2;
  if ((bVar2 & 1) == 0) {
    bVar2 = *(byte *)(param_1 + 10) & 0xfe;
  }
  else {
    bVar2 = *(byte *)(param_1 + 10) | 1;
  }
  *(byte *)(param_1 + 10) = bVar2;
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  iVar5 = *(int *)(param_1 + 0x60) + 0x40;
  *(int *)(param_1 + 0x60) = iVar5;
  if (0x700 < iVar5) {
    *(undefined4 *)(param_1 + 0x60) = 0x700;
  }
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  sVar3 = sub_08009A3C(*(undefined4 *)(param_1 + 0x54));
  if (sVar3 != 0) {
    sub_080BEF04(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58),1);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0836a0c8)[*(byte *)(param_1 + 9)] + 0xc)
    ;
  }
  cVar1 = *(char *)(param_1 + 0x13) + (char)*(undefined4 *)(param_1 + 100);
  *(char *)(param_1 + 0x13) = cVar1;
  *(char *)(param_1 + 0x24) = cVar1;
  sub_080177F4(param_1);
  return in_lr;
}

