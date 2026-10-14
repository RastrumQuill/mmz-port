// sub_080D23E8 at 0x080D23E8 (thumb)

undefined4 sub_080D23E8(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 in_lr;
  bool bVar3;
  
  if (*(char *)(param_1 + 0xd) == '\0') {
    if (*(char *)(param_1 + 0x11) == '\0') {
      iVar2 = -0xc00;
    }
    else {
      iVar2 = 0xc00;
    }
    iVar2 = *(int *)(param_1 + 0x54) + iVar2;
    *(int *)(param_1 + 0x54) = iVar2;
    iVar2 = sub_0800A104(iVar2,*(undefined4 *)(param_1 + 0x58));
    *(int *)(param_1 + 0x58) = iVar2 + -0x1b00;
    sub_08017700(param_1,*(byte *)(param_1 + 0x11) | 0xc900);
    *(undefined *)(param_1 + 0x25) = 0x1f;
    bVar3 = *(char *)(param_1 + 0x11) == '\0';
    if (bVar3) {
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) & 0xef;
    }
    *(byte *)(param_1 + 10) = bVar1;
    *(bool *)(param_1 + 0x4c) = bVar3;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar3 << 4;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  else if (*(char *)(param_1 + 0xd) != '\x01') {
    return in_lr;
  }
  sub_080177F4(param_1);
  return in_lr;
}

