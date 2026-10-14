// sub_080975D4 at 0x080975D4 (thumb)

undefined4 sub_080975D4(int param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined *)(param_1 + 0xbe) = 0;
    sub_08017700(param_1,0xdc02);
    *(undefined *)(param_1 + 0x12) = 0;
    *(undefined *)(param_1 + 0x13) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  if (*(byte *)(param_1 + 0x13) < 9) {
    sub_08007390(param_1 + 0x74,
                 &DAT_08366a50 + (uint)(byte)(&DAT_08366bec)[*(byte *)(param_1 + 0x13)] * 0x30);
    *(undefined *)(param_1 + 0xbe) = (&DAT_08366bec)[*(byte *)(param_1 + 0x13)];
  }
  else {
    sub_08007390(param_1 + 0x74,&DAT_08366b10);
    *(undefined *)(param_1 + 0xbe) = 4;
  }
  *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + '\x01';
  uVar2 = sub_08096D00(param_1,*(undefined4 *)(param_1 + 0x5c),*(undefined4 *)(param_1 + 0x60));
  if ((uVar2 & 1) != 0) {
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined *)(param_1 + 0x12) = 1;
  }
  if ((uVar2 & 2) != 0) {
    bVar1 = *(byte *)(param_1 + 10);
    uVar2 = ~(uint)(bVar1 >> 4) & 1;
    if (uVar2 == 0) {
      bVar1 = bVar1 & 0xef;
    }
    else {
      bVar1 = bVar1 | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar1;
    *(char *)(param_1 + 0x4c) = (char)uVar2;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar2 << 4);
    *(int *)(param_1 + 0x5c) = -*(int *)(param_1 + 0x5c);
  }
  if ((*(char *)(param_1 + 0x12) == '\0') || (*(char *)(param_1 + 0x73) != '\x03')) {
    if ((*(byte *)(param_1 + 10) & 0x20) == 0) {
      iVar3 = sub_0800A2CC(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
      iVar3 = *(int *)(param_1 + 0x58) - iVar3;
    }
    else {
      iVar3 = sub_0800A104(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
      iVar3 = iVar3 - *(int *)(param_1 + 0x58);
    }
    if (iVar3 < 0x2000) {
      iVar3 = *(int *)(param_1 + 0x5c) * 0xf0;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 0xff;
      }
      *(int *)(param_1 + 0x5c) = iVar3 >> 8;
      iVar3 = *(int *)(param_1 + 0x60) * 0xf0;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 0xff;
      }
      *(int *)(param_1 + 0x60) = iVar3 >> 8;
    }
    sub_080177F4(param_1);
  }
  else {
    *(undefined *)(param_1 + 0xd) = 0;
    *(undefined *)(param_1 + 0xe) = 0;
    bVar1 = *(byte *)(param_1 + 10);
    if ((bVar1 & 0x20) == 0) {
      iVar3 = *(int *)(param_1 + 0x58);
      iVar4 = -0x2f00;
    }
    else {
      iVar3 = *(int *)(param_1 + 0x58);
      iVar4 = 0x2f00;
    }
    *(int *)(param_1 + 0x58) = iVar3 + iVar4;
    uVar2 = ~(((uint)bVar1 << 0x18) >> 0x1d) & 1;
    if (uVar2 == 0) {
      bVar1 = bVar1 & 0xdf;
    }
    else {
      bVar1 = bVar1 | 0x20;
    }
    *(byte *)(param_1 + 10) = bVar1;
    *(char *)(param_1 + 0x4d) = (char)uVar2;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xdf | (byte)(uVar2 << 5);
    sub_08007390(param_1 + 0x74,&DAT_08366a50);
    sub_08017700(param_1,0xdc00);
    *(undefined *)(param_1 + 0xbe) = 0;
    sub_080177F4(param_1);
  }
  return in_lr;
}

