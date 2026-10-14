// sub_080CECD4 at 0x080CECD4 (thumb)

undefined4 sub_080CECD4(int param_1)

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
    sub_08022EF0(iVar2);
    DAT_0202ec44 = DAT_0202ec44 | 1;
    *(int *)(iVar1 + 0xb4) = iVar2;
  }
  return in_lr;
}

