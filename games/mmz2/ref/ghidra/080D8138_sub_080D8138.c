// sub_080D8138 at 0x080D8138 (thumb)

undefined4 sub_080D8138(int param_1)

{
  char cVar1;
  byte bVar2;
  char *pcVar3;
  int iVar4;
  undefined4 in_lr;
  
  cVar1 = *(char *)(param_1 + 0x10);
  iVar4 = 0;
  if (cVar1 != '\b') {
    pcVar3 = "\b";
    do {
      pcVar3 = pcVar3 + 4;
      iVar4 = iVar4 + 1;
    } while (*pcVar3 != cVar1);
  }
  *(char *)(param_1 + 0x11) = (char)iVar4;
  *(undefined1 *)(param_1 + 0xb4) = (&DAT_0834b50d)[iVar4 * 4];
  *(undefined4 *)(param_1 + 0x5c) = 0xc00;
  *(undefined *)(param_1 + 0x12) = 0;
  *(undefined *)(param_1 + 0xb6) = 0;
  *(undefined *)(param_1 + 0x13) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
  sub_08012580(param_1);
  sub_080127D0(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  *(byte *)(param_1 + 0x4c) = *(byte *)(*(int *)(param_1 + 0x28) + 10) >> 4 & 1;
  bVar2 = *(byte *)(*(int *)(param_1 + 0x28) + 10) >> 4;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)((bVar2 & 1) << 4);
  if ((bVar2 & 1) == 0) {
    bVar2 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar2 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar2;
  iVar4 = sub_080D58D0(cVar1);
  sub_080127E4(param_1,*(undefined2 *)(&DAT_0834b528 + ((iVar4 << 0x18) >> 0x17)));
  sub_080D8218(param_1);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0834a1a0)[*(byte *)(param_1 + 9)] + 4);
  *(undefined *)(param_1 + 0xd) = 0;
  return in_lr;
}

