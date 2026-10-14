// sub_08097408 at 0x08097408 (thumb)

undefined4 sub_08097408(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0x9c0b);
    bVar1 = *(byte *)(param_1 + 10);
    uVar4 = ~(uint)(bVar1 >> 4) & 1;
    if (uVar4 == 0) {
      bVar1 = bVar1 & 0xef;
    }
    else {
      bVar1 = bVar1 | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar1;
    *(char *)(param_1 + 0x4c) = (char)uVar4;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar4 << 4);
    if (*(int *)(param_1 + 0x28) != 0) {
      *(undefined *)(*(int *)(param_1 + 0x28) + 0x11) = 1;
    }
    uVar2 = sub_080ABE84(param_1,0,0x9c0c);
    *(undefined4 *)(param_1 + 0x28) = uVar2;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    iVar3 = *(int *)(param_1 + 0x5c) + -0x10;
  }
  else {
    iVar3 = *(int *)(param_1 + 0x5c) + 0x10;
  }
  *(int *)(param_1 + 0x5c) = iVar3;
  iVar3 = *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar3;
  if (iVar3 < 0) {
    iVar3 = -iVar3;
  }
  if (0x17f < iVar3) {
    *(undefined *)(param_1 + 0xd) = 6;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

