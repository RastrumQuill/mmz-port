// sub_080825EC at 0x080825EC (thumb)

undefined4 sub_080825EC(int param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined *)(param_1 + 0xbe) = 0;
    sub_0801CF00(param_1,0x1602);
    *(undefined *)(param_1 + 0x12) = 0;
    *(undefined *)(param_1 + 0x13) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  if (*(byte *)(param_1 + 0x13) < 9) {
    sub_08005784(param_1 + 0x74,
                 &DAT_0885b24c + (uint)(byte)(&DAT_0885b3e0)[*(byte *)(param_1 + 0x13)] * 0x18);
    *(undefined *)(param_1 + 0xbe) = (&DAT_0885b3e0)[*(byte *)(param_1 + 0x13)];
  }
  else {
    sub_08005784(param_1 + 0x74,&DAT_0885b30c);
    *(undefined *)(param_1 + 0xbe) = 4;
  }
  *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + '\x01';
  uVar2 = sub_08083564(param_1,*(undefined4 *)(param_1 + 0x5c),*(undefined4 *)(param_1 + 0x60));
  if ((uVar2 & 1) != 0) {
    sub_08002B10(0x137);
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
      iVar3 = sub_08008748(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
      iVar3 = *(int *)(param_1 + 0x58) - iVar3;
    }
    else {
      iVar3 = sub_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
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
    sub_0801CFF0(param_1);
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
    sub_08005784(param_1 + 0x74,&DAT_0885b24c);
    sub_0801CF00(param_1,0x1600);
    *(undefined *)(param_1 + 0xbe) = 0;
    sub_0801CFF0(param_1);
  }
  return in_lr;
}

