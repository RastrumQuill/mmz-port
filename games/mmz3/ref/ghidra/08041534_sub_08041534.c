// sub_08041534 at 0x08041534 (thumb)

undefined4 sub_08041534(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        iVar3 = *(int *)(param_1 + 0xbc) + 0x5000;
        *(int *)(param_1 + 0x54) = iVar3;
        if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
          iVar3 = *(int *)(param_1 + 0xbc) + -0x5000;
        }
        *(int *)(param_1 + 0x54) = iVar3;
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
        sub_08017700(param_1,0xa406);
        *(undefined4 *)(param_1 + 0x60) = 0;
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      }
      else if (bVar1 != 3) {
        return in_lr;
      }
      sub_080177F4(param_1);
      iVar3 = *(int *)(param_1 + 0x60) + 0x40;
      *(int *)(param_1 + 0x60) = iVar3;
      if (0x700 < iVar3) {
        *(undefined4 *)(param_1 + 0x60) = 0x700;
      }
      iVar3 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
      *(int *)(param_1 + 0x58) = iVar3;
      if (iVar3 <= DAT_0202e48c) {
        return in_lr;
      }
      *(int *)(param_1 + 0x58) = DAT_0202e48c;
      *(undefined *)(param_1 + 0xd) = 7;
      *(undefined *)(param_1 + 0xe) = 0;
      return in_lr;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    sub_08007390(param_1 + 0x74,&DAT_0835e68c);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    sub_0801749C(param_1);
    sub_080176EC(param_1);
    *(byte *)(param_1 + 0x4c) = (*(byte *)(param_1 + 10) >> 4 ^ 1) & 1;
    uVar4 = (*(byte *)(param_1 + 10) >> 4 ^ 1) & 1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar4 << 4);
    if (uVar4 == 0) {
      bVar1 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar1;
    *(undefined *)(param_1 + 0x12) = 0x10;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if (cVar2 == '\0') {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  return in_lr;
}

