// sub_0800DB7C at 0x0800DB7C (thumb)

undefined4 sub_0800DB7C(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  sub_08005410();
  iVar1 = *(int *)(*(int *)(param_1 + 0xc) + 4);
  *(int *)(param_1 + 0xc) = iVar1;
  while (iVar1 != param_1 + 0x14) {
    sub_080C8A98(iVar1,*(undefined4 *)(iVar1 + 0x14));
    iVar1 = *(int *)(*(int *)(param_1 + 0xc) + 4);
    *(int *)(param_1 + 0xc) = iVar1;
  }
  return in_lr;
}

