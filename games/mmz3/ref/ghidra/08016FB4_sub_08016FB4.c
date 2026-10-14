// sub_08016FB4 at 0x08016FB4 (thumb)

undefined4 sub_08016FB4(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  sub_080070C0();
  iVar1 = *(int *)(*(int *)(param_1 + 0xc) + 4);
  *(int *)(param_1 + 0xc) = iVar1;
  while (iVar1 != param_1 + 0x14) {
    sub_080FE2C0(iVar1,*(undefined4 *)(iVar1 + 0x14));
    iVar1 = *(int *)(*(int *)(param_1 + 0xc) + 4);
    *(int *)(param_1 + 0xc) = iVar1;
  }
  return in_lr;
}

