// sub_08097EA8 at 0x08097EA8 (thumb)

undefined4 sub_08097EA8(int param_1)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined *)(param_1 + 0xe) = 1;
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  sub_080128D4(param_1);
  iVar4 = *(int *)(param_1 + 0xbc) - *(int *)(param_1 + 0x58);
  iVar3 = iVar4;
  if (iVar4 < 0) {
    iVar3 = -iVar4;
  }
  if (iVar3 < 0x201) {
    *(undefined *)(param_1 + 0xd) = 0;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  else {
    if (iVar4 < 0) {
      *(undefined4 *)(param_1 + 0x60) = 0xffffff00;
    }
    else {
      *(undefined4 *)(param_1 + 0x60) = 0x100;
    }
    bVar1 = 0 < *(int *)(param_1 + 0x60);
    if (bVar1) {
      bVar2 = *(byte *)(param_1 + 10) | 0x20;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) & 0xdf;
    }
    *(byte *)(param_1 + 10) = bVar2;
    *(bool *)(param_1 + 0x4d) = bVar1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xdf | bVar1 << 5;
    iVar3 = sub_080977C8(param_1,*(undefined4 *)(param_1 + 0x60));
    if (1 < iVar3 * 0x1000000 - 0x1000000U >> 0x18) {
      sub_080978A0(param_1);
    }
  }
  return in_lr;
}

