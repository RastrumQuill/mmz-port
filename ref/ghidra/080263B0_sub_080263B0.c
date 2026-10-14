// sub_080263B0 at 0x080263B0 (thumb)

undefined4 sub_080263B0(int param_1)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 0xd4);
  if ((iVar1 != 0) && (*(char *)(iVar1 + 9) == '\0')) {
    if ((*(char *)(param_1 + 0x18a) == '\0') || (*(char *)(param_1 + 0x18b) == '\0')) {
      if (*(char *)(param_1 + 0x19d) == *(char *)(iVar1 + 0x12)) {
        return in_lr;
      }
      bVar3 = 2;
    }
    else {
      bVar3 = 0;
      *(undefined4 *)(iVar1 + 0xc) = 2;
      *(undefined4 *)(iVar1 + 0x14) = *(undefined4 *)((&DAT_082aa198)[*(byte *)(iVar1 + 9)] + 8);
    }
    iVar1 = 4;
    do {
      iVar1 = iVar1 + -1;
      iVar2 = *(int *)(param_1 + 0xd8 + iVar1 * 4);
      if ((iVar2 != 0) && (bVar3 <= *(byte *)(iVar2 + 0x11))) {
        *(undefined4 *)(iVar2 + 0xc) = 2;
        *(undefined4 *)(iVar2 + 0x14) = *(undefined4 *)((&DAT_082aa198)[*(byte *)(iVar2 + 9)] + 8);
        *(undefined4 *)(iVar2 + 0x90) = 0;
        *(undefined *)(iVar2 + 0x94) = 0;
        *(byte *)(iVar2 + 10) = *(byte *)(iVar2 + 10) & 0xfa;
      }
    } while (iVar1 != 0);
  }
  return in_lr;
}

