// sub_0808AFE4 at 0x0808AFE4 (thumb)

longlong sub_0808AFE4(int param_1)

{
  int iVar1;
  uint in_lr;
  
  if (((*(char *)(param_1 + 0xc1) == '\0') &&
      (iVar1 = sub_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58)),
      iVar1 - *(int *)(param_1 + 0x58) < 0x440)) &&
     (*(int *)(param_1 + 0x58) = iVar1, 0x40 < *(int *)(param_1 + 0x60))) {
    *(undefined4 *)(param_1 + 0x60) = 0;
  }
  return (ulonglong)in_lr << 0x20;
}

