// sub_0808A940 at 0x0808A940 (thumb)

undefined4 sub_0808A940(int param_1)

{
  undefined4 in_lr;
  
  if (0xc0 < *(byte *)(param_1 + 0x12)) {
    *(undefined *)(param_1 + 0x10) = 1;
    *(undefined *)(param_1 + 0xd) = 0;
    *(undefined4 *)(param_1 + 0x60) = 0x180;
    *(undefined4 *)(param_1 + 0xb4) = 0;
    *(undefined *)(param_1 + 0x12) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
    *(undefined *)(param_1 + 0x4c) = 0;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  }
  return in_lr;
}

