// sub_08088894 at 0x08088894 (thumb)

undefined4 sub_08088894(int param_1)

{
  byte bVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x28);
  sub_080128D4();
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
    bVar1 = *(char *)(iVar4 + 0xc3) - 0x40;
    pcVar2 = (char *)(iVar4 + 0xbf);
  }
  else {
    bVar1 = *(char *)(iVar4 + 0xc3) + 0x40;
    pcVar2 = (char *)(iVar4 + 0xbe);
  }
  if ((*pcVar2 != '\0') && ((bVar1 & 0x7f) == 0)) {
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    *(undefined *)(param_1 + 0xe) = 0;
  }
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar4 + 0x54);
  *(int *)(param_1 + 0x58) = *(int *)(iVar4 + 0x58) + (short)(&DAT_080ef450)[bVar1] * -2;
  return in_lr;
}

