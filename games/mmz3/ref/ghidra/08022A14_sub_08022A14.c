// sub_08022A14 at 0x08022A14 (thumb)

undefined8 sub_08022A14(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0xc);
  if (*(char *)(iVar2 + 1) == '\0') {
    if (((uint)DAT_020301b2 & *(uint *)(iVar2 + 4)) != 0) goto LAB_08022a40;
  }
  else if (((uint)DAT_020301b2 & *(uint *)(iVar2 + 4)) == 0) {
LAB_08022a40:
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -8;
    uVar1 = 1;
    goto LAB_08022a48;
  }
  uVar1 = 0;
LAB_08022a48:
  return CONCAT44(in_lr,uVar1);
}

