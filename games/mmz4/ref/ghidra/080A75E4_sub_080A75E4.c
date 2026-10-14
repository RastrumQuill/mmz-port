// sub_080A75E4 at 0x080A75E4 (thumb)

undefined4 sub_080A75E4(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0xc) + 0x2c);
  if ((*(char *)(iVar1 + 8) == '\x06') && (*(char *)(iVar1 + 9) == '\"')) {
    *(undefined *)(*(int *)(*(int *)(param_1 + 0x2c) + 0x28) + 0xbf) = 1;
  }
  return in_lr;
}

