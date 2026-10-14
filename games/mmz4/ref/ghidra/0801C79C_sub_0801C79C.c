// sub_0801C79C at 0x0801C79C (thumb)

undefined4 sub_0801C79C(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  sub_080054B4();
  iVar1 = *(int *)(*(int *)(param_1 + 0xc) + 4);
  *(int *)(param_1 + 0xc) = iVar1;
  while (iVar1 != param_1 + 0x14) {
    sub_08128884(iVar1,*(undefined4 *)(iVar1 + 0x14));
    iVar1 = *(int *)(*(int *)(param_1 + 0xc) + 4);
    *(int *)(param_1 + 0xc) = iVar1;
  }
  return in_lr;
}

