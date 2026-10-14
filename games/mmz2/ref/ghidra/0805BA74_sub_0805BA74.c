// sub_0805BA74 at 0x0805BA74 (thumb)

undefined4 sub_0805BA74(int param_1)

{
  bool bVar1;
  byte bVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0xa90c);
    iVar6 = DAT_0202e130;
    *(bool *)(param_1 + 0x4c) = *(int *)(param_1 + 0x54) < *(int *)(DAT_0202e130 + 0x54);
    bVar1 = *(int *)(param_1 + 0x54) < *(int *)(iVar6 + 0x54);
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar1 << 4;
    if (bVar1) {
      bVar2 = *(byte *)(param_1 + 10) | 0x10;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) & 0xef;
    }
    *(byte *)(param_1 + 10) = bVar2;
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      *(undefined4 *)(param_1 + 0x5c) = 0xfffffc80;
      uVar4 = 0x18;
    }
    else {
      *(undefined4 *)(param_1 + 0x5c) = 0x380;
      uVar4 = 0xffffffe8;
    }
    *(undefined4 *)(param_1 + 100) = uVar4;
    *(undefined *)(param_1 + 0xf) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  if ('\x02' < *(char *)(param_1 + 0x71)) {
    if (*(char *)(param_1 + 0xf) == '\0') {
      sub_080AD578(param_1 + 0x54,*(byte *)(param_1 + 10) >> 4 & 1,0x200);
      sub_08006E08(param_1 + 0x74,&DAT_0833ccf4);
      *(undefined *)(param_1 + 0x12) = 0;
      *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
    }
    cVar3 = *(char *)(param_1 + 0x12);
    *(char *)(param_1 + 0x12) = cVar3 + '\x01';
    cVar3 = sub_080EF330(cVar3,3);
    if (cVar3 == '\0') {
      sub_080AD634(param_1 + 0x54,*(byte *)(param_1 + 10) >> 4 & 1);
    }
    iVar5 = *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar5;
    iVar6 = iVar5;
    if (iVar5 < 0) {
      iVar6 = -iVar5;
    }
    if (iVar6 < 0x101) {
      *(undefined *)(param_1 + 0xd) = 0x1b;
      *(undefined *)(param_1 + 0xe) = 0;
    }
    else {
      *(int *)(param_1 + 0x5c) = iVar5 + *(int *)(param_1 + 100);
    }
    if ((*(uint *)(param_1 + 0x8c) & 4) != 0) {
      *(undefined *)(param_1 + 0xd) = 0x1c;
      *(undefined *)(param_1 + 0xe) = 0;
    }
  }
  return in_lr;
}

