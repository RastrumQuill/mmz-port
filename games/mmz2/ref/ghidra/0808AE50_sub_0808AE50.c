// sub_0808AE50 at 0x0808AE50 (thumb)

undefined4 sub_0808AE50(int param_1)

{
  byte *pbVar1;
  undefined4 in_lr;
  
  if (-1 < *(char *)(param_1 + 0x12)) {
    *(undefined *)(param_1 + 0x10) = 0;
    *(undefined *)(param_1 + 0xd) = 0;
    *(undefined4 *)(param_1 + 0x5c) = 0xfffffe80;
    *(undefined4 *)(param_1 + 0xb4) = 0;
    *(undefined *)(param_1 + 0x12) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
    *(undefined *)(param_1 + 0x4c) = 0;
    pbVar1 = (byte *)(param_1 + 0x4a);
    *pbVar1 = *pbVar1 & 0xef;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xdf;
    *(undefined *)(param_1 + 0x4d) = 0;
    *pbVar1 = *pbVar1 & 0xdf;
    *(undefined *)(param_1 + 0x24) = 0;
  }
  return in_lr;
}

