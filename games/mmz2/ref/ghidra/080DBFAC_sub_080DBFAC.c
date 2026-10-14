// sub_080DBFAC at 0x080DBFAC (thumb)

undefined4 sub_080DBFAC(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (*(int *)(param_1 + 0x28) == 0) {
    iVar2 = *(int *)(param_1 + 0x2c);
  }
  else {
    iVar2 = *(int *)(*(int *)(param_1 + 0x28) + 0x10);
  }
  uVar1 = (uint)*(byte *)(param_1 + 0x11);
  if ((uint)*(byte *)(iVar2 + 0x1fc) == *(uint *)(&DAT_0834bd58 + uVar1 * 4)) {
    sub_080127E4(param_1,*(undefined2 *)(&DAT_0834bd04 + uVar1 * 2));
  }
  else {
    sub_080127E4(param_1,*(undefined2 *)(&DAT_0834bd1a + uVar1 * 2));
  }
  sub_080128D4(param_1);
  return in_lr;
}

