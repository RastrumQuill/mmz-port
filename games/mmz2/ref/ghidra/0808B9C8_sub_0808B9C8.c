// sub_0808B9C8 at 0x0808B9C8 (thumb)

undefined4 sub_0808B9C8(int param_1)

{
  byte *pbVar1;
  undefined4 in_lr;
  
  if (*(byte *)(param_1 + 0x12) < 0x40) {
    *(undefined *)(param_1 + 0x10) = 0;
    *(undefined *)(param_1 + 0xd) = 0;
    *(undefined4 *)(param_1 + 0x5c) = 0x180;
    *(undefined4 *)(param_1 + 0xb4) = 0;
    *(undefined *)(param_1 + 0x12) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
    *(undefined *)(param_1 + 0x4c) = 1;
    pbVar1 = (byte *)(param_1 + 0x4a);
    *pbVar1 = *pbVar1 & 0xef | 0x10;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xdf;
    *(undefined *)(param_1 + 0x4d) = 0;
    *pbVar1 = *pbVar1 & 0xdf;
    *(undefined *)(param_1 + 0x24) = 0;
  }
  return in_lr;
}

