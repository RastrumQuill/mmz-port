// sub_0805B344 at 0x0805B344 (thumb)

undefined4 sub_0805B344(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        return in_lr;
      }
      DAT_020301b2 = DAT_020301b2 | 2;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
      DAT_0202f4a5 = 0;
      return in_lr;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    *(undefined *)(param_1 + 0x12) = 0xb4;
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0x54);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  iVar3 = *(int *)(param_1 + 0x60) + 8;
  *(int *)(param_1 + 0x60) = iVar3;
  if (0x120 < iVar3) {
    *(undefined4 *)(param_1 + 0x60) = 0x120;
  }
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  if ((*(byte *)(param_1 + 0x12) & 1) == 0) {
    uVar4 = DAT_0202f608 * 0x343fd + 0x269ec3;
    DAT_0202f608 = uVar4 & 0x7fffffff;
    iVar3 = sub_080FE4D8(uVar4 * 2 >> 0x11,6);
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 100) + (iVar3 + -3) * 0x100;
  }
  if ((*(char *)(param_1 + 0x12) == '\0') ||
     (cVar2 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar2, cVar2 == '\0')) {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  return in_lr;
}

