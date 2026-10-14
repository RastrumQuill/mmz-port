// sub_0808A088 at 0x0808A088 (thumb)

longlong sub_0808A088(int param_1)

{
  short sVar1;
  uint in_lr;
  
  if ((0 < *(int *)(param_1 + 0x60)) &&
     (sVar1 = sub_08007C7C(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + 0x40),
     sVar1 != 0)) {
    *(undefined *)(param_1 + 0xd) = 8;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return (ulonglong)in_lr << 0x20;
}

