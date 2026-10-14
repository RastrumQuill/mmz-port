// sub_08028E44 at 0x08028E44 (thumb)

undefined4 sub_08028E44(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 0x24);
  if ((iVar1 == 0) || (*(char *)(iVar1 + 9) != '\x03')) {
    iVar1 = 0;
  }
  iVar2 = *(int *)(param_1 + 0xe8);
  if ((iVar2 == 0) || (*(char *)(iVar2 + 9) != '\x03')) {
    iVar2 = 0;
  }
  if ((iVar1 != 0) || (iVar2 != 0)) {
    iVar3 = iVar1;
    if (iVar2 != 0) {
      iVar3 = iVar2;
    }
    if ((*(char *)(param_1 + 0x18a) == '\x03') || (*(char *)(param_1 + 0x18b) == '\x03')) {
      if ((iVar1 != 0) && (*(byte *)(iVar1 + 0x10) < 5)) {
        iVar1 = 0;
      }
      if ((iVar2 != 0) && (*(byte *)(iVar2 + 0x10) < 5)) {
        iVar2 = 0;
      }
      if ((iVar1 != 0) && (*(char *)(param_1 + 0x19d) == *(char *)(iVar3 + 0xd8))) {
        iVar1 = 0;
      }
      if ((iVar2 != 0) && (*(char *)(param_1 + 0x19d) == *(char *)(iVar3 + 0xd8))) {
        iVar2 = 0;
      }
    }
    if (iVar1 != 0) {
      *(undefined4 *)(iVar1 + 0xc) = 2;
      *(undefined4 *)(iVar1 + 0x14) = *(undefined4 *)((&DAT_082aa198)[*(byte *)(iVar1 + 9)] + 8);
      *(undefined4 *)(iVar1 + 0x90) = 0;
      *(undefined *)(iVar1 + 0x94) = 0;
      *(byte *)(iVar1 + 10) = *(byte *)(iVar1 + 10) & 0xfa;
    }
    if ((iVar2 != 0) && (iVar2 != iVar1)) {
      *(undefined4 *)(iVar2 + 0xc) = 2;
      *(undefined4 *)(iVar2 + 0x14) = *(undefined4 *)((&DAT_082aa198)[*(byte *)(iVar2 + 9)] + 8);
      *(undefined4 *)(iVar2 + 0x90) = 0;
      *(undefined *)(iVar2 + 0x94) = 0;
      *(byte *)(iVar2 + 10) = *(byte *)(iVar2 + 10) & 0xfa;
    }
  }
  return in_lr;
}

