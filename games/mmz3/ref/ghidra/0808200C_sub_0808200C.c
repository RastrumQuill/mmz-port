// sub_0808200C at 0x0808200C (thumb)

undefined4 sub_0808200C(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 0x2c);
  if (iVar1 != 0) {
    if (*(int *)(iVar1 + 0x2c) != 0) {
      *(int *)(*(int *)(iVar1 + 0x2c) + 0x28) = param_1;
    }
    *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(iVar1 + 0x2c);
    *(char *)(param_1 + 0xb4) = *(char *)(param_1 + 0xb4) + -1;
    *(byte *)(iVar1 + 10) = *(byte *)(iVar1 + 10) & 0xfc;
    *(undefined4 *)(iVar1 + 0x8c) = 0;
    *(undefined4 *)(iVar1 + 0x90) = 0;
    *(undefined *)(iVar1 + 0x94) = 0;
    *(byte *)(iVar1 + 10) = *(byte *)(iVar1 + 10) & 0xfb;
    *(undefined4 *)(iVar1 + 0xc) = 3;
    *(undefined4 *)(iVar1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(iVar1 + 9) * 4) + 0xc);
  }
  return in_lr;
}

