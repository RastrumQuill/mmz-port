// sub_080D7910 at 0x080D7910 (thumb)

undefined4 sub_080D7910(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 0x2c);
  iVar2 = *(int *)(*(int *)(param_1 + 0xc) + 0x2c);
  if (*(char *)(iVar2 + 8) == '\0') {
    if (*(int *)(iVar2 + 0x58) < *(int *)(iVar1 + 0x58)) {
      if ((*(byte *)(iVar1 + 0x10) & 1) != 0) {
        return in_lr;
      }
      *(undefined *)(iVar1 + 0xd) = 1;
    }
    else {
      if ((*(byte *)(iVar1 + 0x10) & 1) == 0) {
        return in_lr;
      }
      *(undefined *)(iVar1 + 0xd) = 2;
    }
    *(undefined *)(iVar1 + 0xe) = 0;
    *(undefined *)(iVar2 + 0x119) = 1;
    DAT_020301b4 = DAT_020301b4 | 1;
    *(int *)(iVar1 + 0xb4) = iVar2;
  }
  return in_lr;
}

