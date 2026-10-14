// sub_0808B59C at 0x0808B59C (thumb)

undefined4 sub_0808B59C(int param_1)

{
  undefined4 in_lr;
  
  if (0x3f < *(byte *)(param_1 + 0x12)) {
    *(undefined *)(param_1 + 0x10) = 3;
    *(undefined *)(param_1 + 0xd) = 0;
    *(undefined4 *)(param_1 + 0x60) = 0xfffffe80;
    *(undefined4 *)(param_1 + 0xb4) = 0;
    *(undefined *)(param_1 + 0x12) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
    *(undefined *)(param_1 + 0x4c) = 0;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  }
  return in_lr;
}

