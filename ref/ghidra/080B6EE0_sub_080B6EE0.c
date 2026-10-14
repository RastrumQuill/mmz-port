// sub_080B6EE0 at 0x080B6EE0 (thumb)

undefined4 sub_080B6EE0(int param_1)

{
  byte bVar1;
  char *pcVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = 0;
  if (*(char *)(param_1 + 0x10) != '\x1c') {
    pcVar2 = "\x1c";
    do {
      pcVar2 = pcVar2 + 4;
      iVar3 = iVar3 + 1;
    } while (*pcVar2 != *(char *)(param_1 + 0x10));
  }
  *(char *)(param_1 + 0x11) = (char)iVar3;
  *(undefined1 *)(param_1 + 0xbc) = (&DAT_082b8329)[iVar3 * 4];
  *(undefined4 *)(param_1 + 0x54) = 0xc00;
  *(undefined *)(param_1 + 0x12) = 0;
  *(undefined *)(param_1 + 0xbe) = 0;
  *(undefined *)(param_1 + 0x13) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
  sub_080B4FA4(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  bVar1 = *(byte *)(*(int *)(param_1 + 0x20) + 10) >> 4;
  *(byte *)(param_1 + 0x44) = bVar1 & 1;
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  sub_080B50DC(param_1,5);
  sub_080B6F90(param_1);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b6e70)[*(byte *)(param_1 + 9)] + 4);
  *(undefined *)(param_1 + 0xd) = 0;
  return in_lr;
}

