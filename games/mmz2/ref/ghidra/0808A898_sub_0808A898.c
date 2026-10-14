// sub_0808A898 at 0x0808A898 (thumb)

undefined4 sub_0808A898(int param_1)

{
  undefined4 in_lr;
  
  if (*(byte *)(param_1 + 0x12) < 0xc1) {
    *(undefined *)(param_1 + 0x10) = 3;
    *(undefined *)(param_1 + 0xd) = 0;
    *(undefined4 *)(param_1 + 0x60) = 0x180;
    *(undefined4 *)(param_1 + 0xb4) = 0;
    *(undefined *)(param_1 + 0x12) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
    *(undefined *)(param_1 + 0x4c) = 1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | 0x10;
  }
  return in_lr;
}

