// sub_080CE64C at 0x080CE64C (thumb)

undefined4 sub_080CE64C(int param_1)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  undefined4 in_lr;
  
  if (*(int *)(param_1 + 0x60) < 0) {
    sVar2 = sub_08007C7C(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + -0x500);
    if (sVar2 != 0) {
      iVar3 = *(int *)(param_1 + 0x60) * -0x100;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 0xff;
      }
      *(int *)(param_1 + 0x60) = iVar3 >> 8;
      sub_08002B10(0x16c);
LAB_080ce6b2:
      *(undefined *)(param_1 + 0xba) = 0;
    }
  }
  else {
    sVar2 = sub_08007C7C(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + 0x500);
    if (sVar2 != 0) {
      sub_080CE774(param_1);
      iVar3 = sub_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
      *(int *)(param_1 + 0x58) = iVar3 + -0x500;
      goto LAB_080ce6b2;
    }
    if (*(char *)(param_1 + 0xb9) == '\x01') {
      *(char *)(param_1 + 0xb9) = '\0';
    }
  }
  if (*(int *)(param_1 + 0x5c) < 1) {
    sVar2 = sub_08007C7C(*(int *)(param_1 + 0x54) + -0x500,*(undefined4 *)(param_1 + 0x58));
    if (sVar2 == 0) {
      return in_lr;
    }
    iVar3 = *(int *)(param_1 + 0x5c) * -0x100;
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0xff;
    }
    *(int *)(param_1 + 0x5c) = iVar3 >> 8;
    bVar1 = *(byte *)(param_1 + 10);
    uVar4 = ~(uint)(bVar1 >> 4) & 1;
    if (uVar4 != 0) {
      bVar1 = bVar1 | 0x10;
      goto LAB_080ce744;
    }
  }
  else {
    sVar2 = sub_08007C7C(*(int *)(param_1 + 0x54) + 0x500,*(undefined4 *)(param_1 + 0x58));
    if (sVar2 == 0) {
      return in_lr;
    }
    iVar3 = *(int *)(param_1 + 0x5c) * -0x100;
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0xff;
    }
    *(int *)(param_1 + 0x5c) = iVar3 >> 8;
    bVar1 = *(byte *)(param_1 + 10);
    uVar4 = ~(uint)(bVar1 >> 4) & 1;
    if (uVar4 != 0) {
      bVar1 = bVar1 | 0x10;
      goto LAB_080ce744;
    }
  }
  bVar1 = bVar1 & 0xef;
LAB_080ce744:
  *(byte *)(param_1 + 10) = bVar1;
  *(char *)(param_1 + 0x4c) = (char)uVar4;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar4 << 4);
  sub_08002B10(0x16c);
  *(undefined *)(param_1 + 0xba) = 0;
  return in_lr;
}

