// sub_08088930 at 0x08088930 (thumb)

undefined4 sub_08088930(int param_1)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x28);
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined *)(param_1 + 0x12) = 0;
    *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x10) * ' ' + '\x10';
    *(undefined *)(param_1 + 0xe) = 1;
  }
  sub_080128D4(param_1);
  bVar1 = *(byte *)(iVar4 + 10) >> 4;
  uVar3 = bVar1 & 1;
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  *(char *)(param_1 + 0x4c) = (char)uVar3;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar3 << 4);
  if (*(char *)(param_1 + 0x10) == '\0') {
    uVar3 = *(byte *)(iVar4 + 0xc3) + 0xc0;
  }
  else {
    uVar3 = *(byte *)(iVar4 + 0xc3) + 0x40;
  }
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar4 + 0x54);
  *(int *)(param_1 + 0x58) = *(int *)(iVar4 + 0x58) + (short)(&DAT_080ef450)[uVar3 & 0xff] * -0x20;
  if ((*(byte *)(param_1 + 0x12) < 0xd0) &&
     (cVar2 = *(char *)(param_1 + 0x13) + -1, *(char *)(param_1 + 0x13) = cVar2, cVar2 == -1)) {
    *(undefined *)(param_1 + 0x13) = 0x38;
    sub_08088DE0(param_1,*(undefined *)(param_1 + 0x10),*(byte *)(param_1 + 10) >> 4 & 1);
    sub_080032EC(0x2d);
  }
  cVar2 = *(char *)(param_1 + 0x12) + '\x01';
  *(char *)(param_1 + 0x12) = cVar2;
  if (cVar2 == '\0') {
    if (*(char *)(param_1 + 0x10) == '\0') {
      *(undefined *)(iVar4 + 0xbf) = 0;
    }
    else {
      *(undefined *)(iVar4 + 0xbe) = 0;
    }
    *(undefined *)(param_1 + 0xd) = 0;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

