// sub_080950D8 at 0x080950D8 (thumb)

undefined4 sub_080950D8(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_08006E08(param_1 + 0x74,&DAT_08342b40);
    sub_080127E4(param_1,0x9809);
    iVar3 = sub_080EEF64((*(int *)(DAT_0202e130 + 0x54) - *(int *)(param_1 + 0x54)) * 0x100 >> 0x10,
                         ((*(int *)(DAT_0202e130 + 0x58) - *(int *)(param_1 + 0x58)) + -0x1000) *
                         0x100 >> 0x10);
    uVar5 = ((uint)(iVar3 << 0x10) >> 0x18) + 0x10 & 0xe0;
    iVar3 = (short)(&DAT_080ef450)[uVar5 + 0x40 & 0xff] * 2;
    *(int *)(param_1 + 0x5c) = iVar3;
    if (iVar3 < 1) {
      bVar1 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar1;
    *(bool *)(param_1 + 0x4c) = 0 < iVar3;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (0 < iVar3) << 4;
    *(int *)(param_1 + 0x60) = (int)(short)(&DAT_080ef450)[uVar5] << 1;
    *(undefined *)(param_1 + 0x12) = 0x3c;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  sub_080943F4(param_1,*(undefined4 *)(param_1 + 0x5c),*(undefined4 *)(param_1 + 0x60));
  iVar3 = *(int *)(param_1 + 0xb8);
  iVar4 = *(int *)(param_1 + 0x54) - iVar3;
  if (0xa000 < iVar4) {
    *(int *)(param_1 + 0x54) = iVar3 + 0xa000;
  }
  if (iVar4 < -0xa000) {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0xb8) + -0xa000;
  }
  iVar3 = *(int *)(param_1 + 0x5c) * 0xfa;
  if (iVar3 < 0) {
    iVar3 = iVar3 + 0xff;
  }
  *(int *)(param_1 + 0x5c) = iVar3 >> 8;
  iVar3 = *(int *)(param_1 + 0x60) * 0xfa;
  if (iVar3 < 0) {
    iVar3 = iVar3 + 0xff;
  }
  *(int *)(param_1 + 0x60) = iVar3 >> 8;
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if (cVar2 == '\0') {
    *(undefined *)(param_1 + 0xd) = 10;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  sub_080128D4(param_1);
  return in_lr;
}

