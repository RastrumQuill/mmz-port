// sub_08086DE4 at 0x08086DE4 (thumb)

undefined4 sub_08086DE4(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x20);
  if ((*(char *)(param_1 + 0xf) == '\0') &&
     (bVar1 = *(byte *)(param_1 + 0x12), *(byte *)(param_1 + 0x12) = bVar1 + 1, 1 < bVar1)) {
    sub_080867FC(param_1,4,*(undefined *)(param_1 + 0x11));
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
  cVar2 = sub_080079CC();
  if ((cVar2 != '\0') || (1 < *(byte *)(iVar3 + 0xc))) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b17b0)[*(byte *)(param_1 + 9)] + 8);
    sub_08086894(param_1);
  }
  return in_lr;
}

