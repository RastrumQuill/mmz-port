// sub_0808A7C0 at 0x0808A7C0 (thumb)

undefined4 sub_0808A7C0(int param_1)

{
  byte bVar1;
  undefined4 in_lr;
  
  bVar1 = *(char *)(param_1 + 0x12) + 1;
  *(byte *)(param_1 + 0x12) = bVar1;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  if (0x13 < bVar1) {
    *(undefined *)(param_1 + 0xd) = 6;
    *(undefined *)(param_1 + 0x12) = 8;
  }
  return in_lr;
}

