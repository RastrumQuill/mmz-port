// sub_080BA620 at 0x080BA620 (thumb)

undefined4 sub_080BA620(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b85b0)[*(byte *)(param_1 + 9)] + 0x10);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
  if (*(char *)(param_1 + 0x12) == '\0') {
    for (iVar1 = *(int *)(param_1 + 0x24); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x24)) {
      *(undefined4 *)(iVar1 + 0xc) = 2;
      *(undefined4 *)(iVar1 + 0x14) = *(undefined4 *)((&DAT_082b85b0)[*(byte *)(iVar1 + 9)] + 8);
    }
  }
  else {
    iVar1 = *(int *)(param_1 + 0x20);
    iVar2 = *(int *)(param_1 + 0x24);
    *(int *)(iVar1 + 0x24) = iVar2;
    if (iVar2 != 0) {
      *(int *)(iVar2 + 0x20) = iVar1;
    }
  }
  return in_lr;
}

