// sub_0804D310 at 0x0804D310 (thumb)

undefined4 sub_0804D310(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0xc) + 0x2c);
  iVar2 = *(int *)(param_1 + 0x2c);
  if (*(char *)(iVar1 + 8) == '\x03') {
    if (*(char *)(iVar1 + 9) == '[') {
      sub_080B2DB0(iVar1,iVar2 + 0x54);
    }
    if (*(char *)(iVar1 + 9) == 'l') {
      sub_080B9660(iVar1,iVar2 + 0x54);
    }
  }
  if ((*(uint *)(param_1 + 0x14) & 1) != 0) {
    *(bool *)(iVar2 + 0xbc) = *(int *)(iVar2 + 0x54) < *(int *)(iVar1 + 0x54);
  }
  return in_lr;
}

