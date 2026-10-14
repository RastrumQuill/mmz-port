// sub_080C5730 at 0x080C5730 (thumb)

undefined4 sub_080C5730(int param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xd) == '\0') {
    uVar3 = DAT_0202f608 * 0x343fd + 0x269ec3;
    DAT_0202f608 = uVar3 & 0x7fffffff;
    sub_08017700(param_1,uVar3 * 2 >> 0x11 & 3 | 0x5102);
    *(undefined *)(param_1 + 0x25) = 0x13;
    uVar3 = DAT_0202f608 * 0x343fd + 0x269ec3;
    DAT_0202f608 = uVar3 & 0x7fffffff;
    iVar2 = sub_080FE4D8(uVar3 * 2 >> 0x11,0x1400);
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar2 + -0xa00;
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined *)(param_1 + 0x12) = 0x50;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  else if (*(char *)(param_1 + 0xd) != '\x01') {
    return in_lr;
  }
  iVar2 = *(int *)(param_1 + 0x60) + 4;
  *(int *)(param_1 + 0x60) = iVar2;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar2;
  uVar3 = *(byte *)(param_1 + 0x12) - 1;
  *(char *)(param_1 + 0x12) = (char)uVar3;
  if ((uVar3 & 0xff) < 10) {
    if ((uVar3 & 1) == 0) {
LAB_080c57f8:
      uVar3 = (uint)*(byte *)(param_1 + 10);
      bVar1 = *(byte *)(param_1 + 10) & 0xfe;
    }
    else {
      uVar3 = 1;
      bVar1 = *(byte *)(param_1 + 10) | 1;
    }
  }
  else {
    if (0x13 < (uVar3 & 0xff)) goto LAB_080c5800;
    if ((uVar3 & 2) == 0) goto LAB_080c57f8;
    uVar3 = 1;
    bVar1 = *(byte *)(param_1 + 10) | 1;
  }
  *(byte *)(param_1 + 10) = bVar1;
LAB_080c5800:
  sub_080177F4(param_1,uVar3,0);
  if (*(char *)(param_1 + 0x12) == '\0') {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0836a0c8)[*(byte *)(param_1 + 9)] + 0xc)
    ;
  }
  return in_lr;
}

