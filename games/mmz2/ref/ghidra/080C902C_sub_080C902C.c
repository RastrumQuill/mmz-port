// sub_080C902C at 0x080C902C (thumb)

undefined4 sub_080C902C(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0xc) + 0x2c);
  if (*(char *)(iVar1 + 8) == '\0') {
    *(int *)(*(int *)(param_1 + 0x2c) + 0xb4) = iVar1;
    DAT_0202ec44 = DAT_0202ec44 | 1;
    sub_08022EF0(iVar1);
  }
  return in_lr;
}

