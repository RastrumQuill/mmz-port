// sub_080C2BD4 at 0x080C2BD4 (thumb)

undefined4 sub_080C2BD4(int param_1)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if (cVar2 == '\0') {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0836a0c8)[*(byte *)(param_1 + 9)] + 8);
    return in_lr;
  }
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined *)(param_1 + 0x25) = 0x17;
    sub_08017700(param_1,0x6b03);
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(undefined4 *)(param_1 + 0x60) = 0;
    uVar3 = DAT_0202f608 * 0x343fd + 0x269ec3;
    DAT_0202f608 = uVar3 & 0x7fffffff;
    *(uint *)(param_1 + 100) = (uVar3 * 2 >> 0x11 & 0x7f) - 0x40;
    *(undefined *)(param_1 + 0x12) = 0x32;
    *(undefined *)(param_1 + 0x13) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  bVar1 = *(char *)(param_1 + 0x13) + 1;
  *(byte *)(param_1 + 0x13) = bVar1;
  if (*(byte *)(param_1 + 0x12) < 0x15) {
    cVar2 = sub_080FE4D8(*(undefined *)(param_1 + 0x13),3);
    if (cVar2 != '\0') goto LAB_080c2c8a;
    bVar1 = *(byte *)(param_1 + 10) | 1;
  }
  else if ((bVar1 & 1) == 0) {
LAB_080c2c8a:
    bVar1 = *(byte *)(param_1 + 10) & 0xfe;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 1;
  }
  *(byte *)(param_1 + 10) = bVar1;
  iVar5 = *(int *)(param_1 + 100);
  if (iVar5 < 1) {
    iVar4 = *(int *)(param_1 + 0x5c) + -8 + iVar5;
    *(int *)(param_1 + 0x5c) = iVar4;
    if (iVar5 <= iVar4) goto LAB_080c2cb2;
  }
  else {
    iVar4 = *(int *)(param_1 + 0x5c) + 8;
    *(int *)(param_1 + 0x5c) = iVar4;
    if (iVar4 <= iVar5) goto LAB_080c2cb2;
  }
  *(int *)(param_1 + 0x5c) = iVar5;
LAB_080c2cb2:
  iVar5 = *(int *)(param_1 + 0x60) + 8;
  *(int *)(param_1 + 0x60) = iVar5;
  if (0x100 < iVar5) {
    *(undefined4 *)(param_1 + 0x60) = 0x100;
  }
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  sub_080177F4(param_1);
  return in_lr;
}

