// sub_080867E4 at 0x080867E4 (thumb)

undefined4 sub_080867E4(int param_1)

{
  bool bVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_08017700(param_1,0x6a04);
    *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) & 0xf3 | 4;
    *(undefined *)(param_1 + 0x12) = 0;
    iVar5 = DAT_0202f5c0;
    *(int *)(param_1 + 0xb4) = *(int *)(param_1 + 0x54) - *(int *)(DAT_0202f5c0 + 0x54);
    uVar4 = DAT_0202f608 * 0x343fd + 0x269ec3;
    DAT_0202f608 = uVar4 & 0x7fffffff;
    *(uint *)(param_1 + 0xb8) = -0x800 - (uVar4 * 0x20 >> 0x15);
    *(byte *)(param_1 + 0xbc) = *(byte *)(iVar5 + 10) >> 4 & 1;
    *(undefined2 *)(param_1 + 0xc0) = 0x3c;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080177F4(param_1);
  if (*(byte *)(param_1 + 0xbc) == (*(byte *)(DAT_0202f5c0 + 10) >> 4 & 1)) {
    iVar5 = *(int *)(DAT_0202f5c0 + 0x54) + *(int *)(param_1 + 0xb4);
  }
  else {
    iVar5 = *(int *)(DAT_0202f5c0 + 0x54) - *(int *)(param_1 + 0xb4);
  }
  *(int *)(param_1 + 0x54) = iVar5;
  iVar5 = DAT_0202f5c0;
  *(int *)(param_1 + 0x58) = *(int *)(DAT_0202f5c0 + 0x58) + *(int *)(param_1 + 0xb8);
  bVar1 = *(int *)(param_1 + 0x54) < *(int *)(iVar5 + 0x54);
  if (bVar1) {
    bVar2 = *(byte *)(param_1 + 10) | 0x10;
  }
  else {
    bVar2 = *(byte *)(param_1 + 10) & 0xef;
  }
  *(byte *)(param_1 + 10) = bVar2;
  *(bool *)(param_1 + 0x4c) = bVar1;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar1 << 4;
  iVar5 = DAT_0202f5c0;
  if (DAT_0202f5c0 != 0) {
    cVar3 = sub_08025B64(DAT_0202f5c0);
    bVar2 = cVar3 + *(char *)(param_1 + 0x12);
    *(byte *)(param_1 + 0x12) = bVar2;
    if (((bVar2 < 0x19) && ((*(uint *)(DAT_0202f5c0 + 0x8c) & 0x200) == 0)) &&
       (*(short *)(DAT_0202f5c0 + 0xa4) != 0)) {
      return in_lr;
    }
    iVar5 = 0;
  }
  *(undefined *)(param_1 + 0xd) = 5;
  *(char *)(param_1 + 0xe) = (char)iVar5;
  return in_lr;
}

