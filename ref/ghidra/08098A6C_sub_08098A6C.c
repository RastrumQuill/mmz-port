// sub_08098A6C at 0x08098A6C (thumb)

undefined4 sub_08098A6C(int param_1)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xd) == '\0') {
    sub_080033F0(param_1 + 0x6c,3);
    uVar3 = DAT_02022890 * 0x343fd + 0x269ec3;
    *(uint *)(param_1 + 0x54) = (uVar3 * 0x40 >> 0x16) - 0x200;
    uVar3 = (uVar3 & 0x7fffffff) * 0x343fd + 0x269ec3;
    *(uint *)(param_1 + 0x58) = -0x200 - (uVar3 * 0x80 >> 0x17);
    uVar3 = (uVar3 & 0x7fffffff) * 0x343fd + 0x269ec3;
    DAT_02022890 = uVar3 & 0x7fffffff;
    *(byte *)(param_1 + 0x12) = ((byte)(uVar3 * 2 >> 0x11) & 0x1f) + 0x20;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  bVar1 = *(char *)(param_1 + 0x12) - 1;
  *(byte *)(param_1 + 0x12) = bVar1;
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 10) | 1;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) & 0xfe;
  }
  *(byte *)(param_1 + 10) = bVar1;
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 0x40;
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  if ((*(char *)(param_1 + 0x12) == '\0') ||
     (cVar2 = sub_080079CC(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50)),
     cVar2 != '\0')) {
    *(undefined4 *)(param_1 + 0xc) = 4;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)((&DAT_082b31bc)[*(byte *)(param_1 + 9)] + 0x10);
  }
  return in_lr;
}

