// sub_0808ADB0 at 0x0808ADB0 (thumb)

undefined4 sub_0808ADB0(int param_1)

{
  byte bVar1;
  uint uVar2;
  undefined4 in_lr;
  
  if (0x10 < *(byte *)(param_1 + 0x12)) {
    uVar2 = DAT_0202e188 * 0x343fd + 0x269ec3;
    DAT_0202e188 = uVar2 & 0x7fffffff;
    uVar2 = uVar2 * 2 >> 0x11 & 1;
    *(undefined *)(param_1 + 0xd) = 0;
    *(uint *)(param_1 + 0x60) = uVar2 * -0x300 + 0x180;
    if (uVar2 == 0) {
      bVar1 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar1;
    *(char *)(param_1 + 0x4c) = (char)uVar2;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar2 << 4);
    *(undefined4 *)(param_1 + 0xb4) = 0;
    sub_080127E4(param_1,0x7401);
  }
  return in_lr;
}

