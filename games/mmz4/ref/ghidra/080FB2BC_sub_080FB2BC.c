// sub_080FB2BC at 0x080FB2BC (thumb)

undefined4 sub_080FB2BC(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar2 = *(int *)(*(int *)(param_1 + 0xc) + 0x2c);
  iVar3 = *(int *)(param_1 + 0x2c);
  if (*(char *)(iVar2 + 8) == '\0') {
    if (*(char *)(iVar3 + 0x10) == '\0') {
      uVar1 = 0x708;
    }
    else {
      uVar1 = 0xfffff8f8;
    }
    *(undefined4 *)(iVar2 + 0xec) = uVar1;
    *(undefined *)(iVar3 + 0xbd) = 1;
  }
  return in_lr;
}

