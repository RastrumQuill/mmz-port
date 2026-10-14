// sub_0808A1F8 at 0x0808A1F8 (thumb)

undefined4 sub_0808A1F8(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  if (0xf < *(byte *)(param_1 + 0x12)) {
    uVar1 = DAT_0202e188 * 0x343fd + 0x269ec3;
    DAT_0202e188 = uVar1 & 0x7fffffff;
    if (((uVar1 * 2 >> 0x11 & 8) == 0) && (*(char *)(param_1 + 0x11) != '\x05')) {
      *(undefined4 *)(param_1 + 0x60) = 0xcc;
      *(undefined *)(param_1 + 0xd) = 2;
      *(undefined4 *)(param_1 + 0xb4) = 0;
      *(undefined4 *)(param_1 + 0xb8) = 0;
      sub_080127E4(param_1,0x7405);
    }
    else {
      uVar1 = DAT_0202e188 * 0x343fd + 0x269ec3;
      DAT_0202e188 = uVar1 & 0x7fffffff;
      uVar1 = uVar1 * 2 >> 0x11 & 1;
      *(uint *)(param_1 + 0x5c) = (uVar1 ^ 1) * -0x300 + 0x180;
      if (uVar1 == 0) {
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
      }
      else {
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
      }
      *(char *)(param_1 + 0x4c) = (char)uVar1;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar1 << 4);
      *(undefined *)(param_1 + 0xd) = 0;
      *(undefined4 *)(param_1 + 0xb4) = 0;
      sub_080127E4(param_1,0x7401);
    }
  }
  return in_lr;
}

