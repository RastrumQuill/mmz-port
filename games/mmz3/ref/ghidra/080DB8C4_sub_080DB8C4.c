// sub_080DB8C4 at 0x080DB8C4 (thumb)

undefined4 sub_080DB8C4(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 8);
  if ((DAT_02030104 & 0x10) == 0) {
    if (*(char *)(iVar1 + 0x10) != '\0') {
      return in_lr;
    }
  }
  else if (*(char *)(iVar1 + 0x10) == '\0') {
    return in_lr;
  }
  *(undefined4 *)(iVar1 + 0x3c) = *(undefined4 *)(iVar1 + 0xb4);
  sub_080177F4(iVar1);
  FUN_0800033c(param_1,param_2);
  *(undefined4 *)(iVar1 + 0xb4) = *(undefined4 *)(iVar1 + 0x3c);
  *(int *)(iVar1 + 0x3c) = iVar1;
  return in_lr;
}

