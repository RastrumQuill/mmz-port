// sub_080A9410 at 0x080A9410 (thumb)

undefined4 sub_080A9410(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  if ((*(uint *)(param_1 + 0x14) & 1) != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0xc) + 0x2c);
    iVar2 = *(int *)(param_1 + 0x2c);
    sub_08006984(0x15);
    *(bool *)(iVar2 + 0xbc) = *(int *)(iVar2 + 0x54) < *(int *)(iVar1 + 0x54);
  }
  return in_lr;
}

