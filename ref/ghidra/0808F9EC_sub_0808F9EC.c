// sub_0808F9EC at 0x0808F9EC (thumb)

undefined4 sub_0808F9EC(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  undefined4 in_lr;
  
  iVar5 = *(int *)(param_1 + 0x20);
  iVar6 = *(int *)(param_1 + 0x24);
  puVar4 = (undefined4 *)(param_1 + 0x74);
  *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_1 + 0x74);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_1 + 0x78);
  iVar3 = 0;
  do {
    *puVar4 = puVar4[2];
    puVar4[1] = puVar4[3];
    puVar4 = puVar4 + 2;
    iVar3 = iVar3 + -1;
  } while (-1 < iVar3);
  *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(iVar5 + 0x4c);
  *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(iVar5 + 0x50);
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(iVar6 + 0x34);
  *(undefined *)(param_1 + 0x46) = *(undefined *)(iVar6 + 0x46);
  bVar1 = *(byte *)(iVar5 + 10) >> 4;
  *(byte *)(param_1 + 0x44) = bVar1 & 1;
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  if (1 < *(byte *)(iVar5 + 0xc)) {
    *(undefined *)(param_1 + 0x11) = 1;
  }
  if ((*(char *)(param_1 + 0x11) != '\0') &&
     (cVar2 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar2, cVar2 == -1)) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b31bc)[*(byte *)(param_1 + 9)] + 8);
    sub_0808FA90(param_1);
  }
  return in_lr;
}

