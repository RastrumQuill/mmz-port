// sub_080B8814 at 0x080B8814 (thumb)

undefined4 sub_080B8814(int param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  if ((((*(ushort *)(param_1 + 0x1a) & 1) != 0) &&
      (iVar3 = *(int *)(*(int *)(param_1 + 0x10) + 0x40), *(char *)(iVar3 + 8) == '\x04')) &&
     (*(char *)(iVar3 + 9) == '\0')) {
    iVar2 = *(int *)(param_1 + 0x40);
    if (*(char *)(iVar2 + 0x11) != '\0') {
      iVar2 = *(int *)(iVar2 + 0x24);
    }
    sVar1 = *(short *)(iVar2 + 0x8c);
    if (sVar1 != 0) {
      *(short *)(iVar2 + 0x8c) = sVar1 + -1;
      *(byte *)(iVar3 + 10) = *(byte *)(iVar3 + 10) & 0xfc;
      *(undefined4 *)(iVar3 + 0x90) = 0;
      *(undefined *)(iVar3 + 0x94) = 0;
      *(byte *)(iVar3 + 10) = *(byte *)(iVar3 + 10) & 0xfb;
      *(undefined4 *)(iVar3 + 0xc) = 3;
      *(undefined4 *)(iVar3 + 0x14) = *(undefined4 *)((&DAT_082b17b0)[*(byte *)(iVar3 + 9)] + 0xc);
    }
  }
  return in_lr;
}

