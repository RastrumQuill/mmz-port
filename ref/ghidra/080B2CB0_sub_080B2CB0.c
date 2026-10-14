// sub_080B2CB0 at 0x080B2CB0 (thumb)

undefined4 sub_080B2CB0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 0x40);
  iVar2 = *(int *)(*(int *)(param_1 + 0x10) + 0x40);
  if (((*(byte *)(iVar1 + 0x10) == 0) || (4 < *(byte *)(DAT_02022b20 + 1))) &&
     (*(char *)(iVar2 + 8) == '\0')) {
    if ((*(byte *)(iVar1 + 0x10) & 2) == 0) {
      if (*(int *)(iVar1 + 0x50) < *(int *)(iVar2 + 0x50)) {
        return in_lr;
      }
      if (0x800 < *(int *)(iVar1 + 0x50) - *(int *)(iVar2 + 0x50)) {
        return in_lr;
      }
    }
    if (*(int *)(iVar2 + 0x4c) < *(int *)(iVar1 + 0x4c)) {
      *(undefined *)(iVar1 + 0xd) = 1;
    }
    else {
      *(undefined *)(iVar1 + 0xd) = 2;
    }
    *(undefined *)(iVar1 + 0xe) = 0;
    sub_0801D59C(iVar2);
    DAT_02022b70 = DAT_02022b70 | 1;
    *(int *)(iVar1 + 0xbc) = iVar2;
  }
  return in_lr;
}

