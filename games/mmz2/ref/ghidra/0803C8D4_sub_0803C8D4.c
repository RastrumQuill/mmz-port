// sub_0803C8D4 at 0x0803C8D4 (thumb)

undefined4 sub_0803C8D4(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if ((((*(uint *)(param_1 + 0x14) & 0x40) != 0) &&
      (iVar1 = *(int *)(*(int *)(param_1 + 0xc) + 0x2c), *(char *)(iVar1 + 8) == '\x04')) &&
     ((*(char *)(iVar1 + 9) == '\0' || (*(char *)(iVar1 + 9) == '?')))) {
    if ((*(uint *)(param_1 + 0x14) & 0x2000) == 0) {
      if (*(char *)(*(int *)(param_1 + 0x2c) + 0x13) != '\0') {
        sub_080D4938(3,iVar1 + 0x54,0);
        sub_080032EC(0x10a);
      }
    }
    else if (DAT_0202ec17 != -1) {
      DAT_0202ec17 = DAT_0202ec17 + '\x01';
    }
  }
  return in_lr;
}

