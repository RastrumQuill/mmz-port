// sub_08089764 at 0x08089764 (thumb)

undefined4 sub_08089764(int param_1)

{
  bool bVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_08007390(param_1 + 0x74,&DAT_0836500c);
    sub_08017700(param_1,0xdd09);
    iVar4 = sub_080FE10C((*(int *)(DAT_0202f5c0 + 0x54) - *(int *)(param_1 + 0x54)) * 0x100 >> 0x10,
                         ((*(int *)(DAT_0202f5c0 + 0x58) - *(int *)(param_1 + 0x58)) + -0x1000) *
                         0x100 >> 0x10);
    uVar6 = ((uint)(iVar4 << 0x10) >> 0x18) + 0x10 & 0xe0;
    iVar4 = *(short *)((int)&DAT_080fe64c + ((uVar6 + 0x40) * 0x1000000 >> 0x17)) * 2;
    *(int *)(param_1 + 0x5c) = iVar4;
    bVar1 = 0 < iVar4;
    if (bVar1) {
      bVar2 = *(byte *)(param_1 + 10) | 0x10;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) & 0xef;
    }
    *(byte *)(param_1 + 10) = bVar2;
    *(bool *)(param_1 + 0x4c) = bVar1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar1 << 4;
    *(int *)(param_1 + 0x60) = (int)(short)(&DAT_080fe64c)[uVar6] << 1;
    *(undefined *)(param_1 + 0x12) = 0x3c;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  cVar3 = sub_08088864(param_1,*(undefined4 *)(param_1 + 0x5c),*(undefined4 *)(param_1 + 0x60));
  if ((cVar3 != '\0') && (1 < *(byte *)(param_1 + 0x12))) {
    *(byte *)(param_1 + 0x12) = *(byte *)(param_1 + 0x12) - 1;
  }
  iVar4 = *(int *)(param_1 + 0xb8);
  iVar5 = *(int *)(param_1 + 0x54) - iVar4;
  if (0xa000 < iVar5) {
    *(int *)(param_1 + 0x54) = iVar4 + 0xa000;
  }
  if (iVar5 < -0xa000) {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0xb8) + -0xa000;
  }
  iVar4 = *(int *)(param_1 + 0x5c) * 0xfa;
  if (iVar4 < 0) {
    iVar4 = iVar4 + 0xff;
  }
  *(int *)(param_1 + 0x5c) = iVar4 >> 8;
  iVar4 = *(int *)(param_1 + 0x60) * 0xfa;
  if (iVar4 < 0) {
    iVar4 = iVar4 + 0xff;
  }
  *(int *)(param_1 + 0x60) = iVar4 >> 8;
  cVar3 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar3;
  if (cVar3 == '\0') {
    *(undefined *)(param_1 + 0xd) = 10;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  sub_080177F4(param_1);
  return in_lr;
}

