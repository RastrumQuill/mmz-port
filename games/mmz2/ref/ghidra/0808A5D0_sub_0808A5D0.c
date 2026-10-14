// sub_0808A5D0 at 0x0808A5D0 (thumb)

undefined4 sub_0808A5D0(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 0x60);
  if (iVar1 < 0) {
    iVar1 = -iVar1;
  }
  *(int *)(param_1 + 0xb4) = *(int *)(param_1 + 0xb4) + iVar1;
  iVar1 = *(int *)(param_1 + 0x60);
  if (iVar1 < 0) {
    iVar1 = -iVar1;
  }
  *(int *)(param_1 + 0xb8) = *(int *)(param_1 + 0xb8) + iVar1;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(undefined4 *)(param_1 + 0x5c) = 0;
  return in_lr;
}

