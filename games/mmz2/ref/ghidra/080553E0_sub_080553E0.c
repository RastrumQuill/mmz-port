// sub_080553E0 at 0x080553E0 (thumb)

undefined4 sub_080553E0(int param_1)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  uint uVar5;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    bVar1 = *(byte *)(param_1 + 10) >> 4;
    uVar5 = bVar1 & 1;
    sub_08012580(param_1);
    sub_080127D0(param_1);
    *(char *)(param_1 + 0x4c) = (char)uVar5;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar5 << 4);
    if ((bVar1 & 1) == 0) {
      bVar1 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar1;
    *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) & 0xf3 | 8;
    sub_080127E4(param_1,0xa611);
    sub_080127E4(param_1,0xa611);
    *(uint *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + (uVar5 * 2 + -1) * 0x200;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_080128D4(param_1);
  if (*(char *)(param_1 + 0x12) != '\0') {
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
  }
  pbVar3 = (byte *)(param_1 + 0xb6);
  if ((*pbVar3 & 1) == 0) goto LAB_080554f6;
  iVar4 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x54) = iVar4;
  if (*(int *)(param_1 + 0x5c) < 0) {
    iVar2 = *(int *)(param_1 + 0xb8) + 0x1000;
    if (iVar4 < iVar2) {
      *(int *)(param_1 + 0x54) = iVar2;
LAB_080554c6:
      *(undefined4 *)(param_1 + 0x5c) = 0;
    }
  }
  else {
    iVar2 = *(int *)(param_1 + 0xb8) + 0xbfff;
    if (iVar2 < iVar4) {
      *(int *)(param_1 + 0x54) = iVar2;
      goto LAB_080554c6;
    }
  }
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  iVar4 = *(int *)(param_1 + 0x60) + 0x40;
  *(int *)(param_1 + 0x60) = iVar4;
  if (0x700 < iVar4) {
    *(undefined4 *)(param_1 + 0x60) = 0x700;
  }
  if (*(int *)(param_1 + 0xbc) < *(int *)(param_1 + 0x58)) {
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0xbc);
    *pbVar3 = *pbVar3 & 0xfe;
  }
LAB_080554f6:
  if ((*(char *)(param_1 + 0x12) == '\0') && ((*pbVar3 & 1) == 0)) {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    *(byte *)(param_1 + 0xf) = *pbVar3 & 1;
  }
  return in_lr;
}

