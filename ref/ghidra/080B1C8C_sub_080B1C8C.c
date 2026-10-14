// sub_080B1C8C at 0x080B1C8C (thumb)

undefined4 sub_080B1C8C(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x40);
  iVar3 = *(int *)(*(int *)(param_1 + 0x10) + 0x40);
  bVar1 = *(byte *)(iVar2 + 0x10);
  if (((((bVar1 & 0x10) == 0) || ((DAT_02022add & 6) == 6)) &&
      (((bVar1 & 0x20) == 0 || ((DAT_02022add & 8) != 0)))) && (*(char *)(iVar3 + 8) == '\0')) {
    if ((bVar1 & 2) == 0) {
      if (*(int *)(iVar2 + 0x50) < *(int *)(iVar3 + 0x50)) {
        return in_lr;
      }
      if (0x800 < *(int *)(iVar2 + 0x50) - *(int *)(iVar3 + 0x50)) {
        return in_lr;
      }
    }
    if (*(int *)(iVar3 + 0x4c) < *(int *)(iVar2 + 0x4c)) {
      if ((bVar1 & 0xf) != 0) {
        return in_lr;
      }
      *(undefined *)(iVar2 + 0xd) = 1;
    }
    else {
      if ((bVar1 & 0xf) == 0) {
        return in_lr;
      }
      *(undefined *)(iVar2 + 0xd) = 2;
    }
    *(undefined *)(iVar2 + 0xe) = 0;
    *(int *)(iVar2 + 0xbc) = iVar3;
  }
  return in_lr;
}

