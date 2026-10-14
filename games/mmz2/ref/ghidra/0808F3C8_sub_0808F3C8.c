// sub_0808F3C8 at 0x0808F3C8 (thumb)

undefined4 sub_0808F3C8(int param_1)

{
  undefined4 in_lr;
  
  if ((*(uint *)(param_1 + 0x14) & 0x201) == 0x201) {
    if ((*(byte *)(*(int *)(*(int *)(param_1 + 0xc) + 0x2c) + 0xb) & 0x40) == 0) {
      if (DAT_02000ca4 != '\0') {
        return in_lr;
      }
    }
    else if (DAT_02000ca4 != '\x01') {
      return in_lr;
    }
    if (DAT_0202ebfc < 9999) {
      DAT_0202ebfc = DAT_0202ebfc + 1;
    }
  }
  return in_lr;
}

