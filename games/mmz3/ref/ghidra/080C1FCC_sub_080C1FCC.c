// sub_080C1FCC at 0x080C1FCC (thumb)

undefined4 sub_080C1FCC(int param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    iVar2 = sub_080FE4D8(*(undefined2 *)(param_1 + 0x80),3);
    iVar2 = *(int *)(&DAT_0836bab8 + ((uint)(iVar2 << 0x10) >> 0xe));
    uVar3 = DAT_0202f608 * 0x343fd + 0x269ec3;
    *(uint *)(param_1 + 0x60) =
         *(int *)((uint)*(byte *)(param_1 + 0x11) * 8 + iVar2 + 4) - (uVar3 * 2 >> 0x11 & 0x1f);
    uVar3 = (uVar3 & 0x7fffffff) * 0x343fd + 0x269ec3;
    DAT_0202f608 = uVar3 & 0x7fffffff;
    *(uint *)(param_1 + 0x5c) =
         *(int *)((uint)*(byte *)(param_1 + 0x11) * 8 + iVar2) + -0x20 + (uVar3 * 2 >> 0x11 & 0x3f);
    sub_08017700(param_1,*(undefined2 *)(param_1 + 0x80));
    *(undefined *)(param_1 + 0x12) = 0x50;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  sub_080177F4(param_1);
  iVar2 = *(int *)(param_1 + 0x60) + 0x20;
  *(int *)(param_1 + 0x60) = iVar2;
  if (0x700 < iVar2) {
    *(undefined4 *)(param_1 + 0x60) = 0x700;
  }
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  if ((*(char *)(param_1 + 0x12) == '\0') ||
     (cVar1 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar1, cVar1 == '\0')) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0836a0c8)[*(byte *)(param_1 + 9)] + 8);
  }
  return in_lr;
}

