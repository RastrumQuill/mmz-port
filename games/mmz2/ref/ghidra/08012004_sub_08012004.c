// sub_08012004 at 0x08012004 (thumb)

undefined4 sub_08012004(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  sub_08006B38();
  iVar1 = *(int *)(*(int *)(param_1 + 0xc) + 4);
  *(int *)(param_1 + 0xc) = iVar1;
  while (iVar1 != param_1 + 0x14) {
    sub_080EF118(iVar1,*(undefined4 *)(iVar1 + 0x14));
    iVar1 = *(int *)(*(int *)(param_1 + 0xc) + 4);
    *(int *)(param_1 + 0xc) = iVar1;
  }
  return in_lr;
}

