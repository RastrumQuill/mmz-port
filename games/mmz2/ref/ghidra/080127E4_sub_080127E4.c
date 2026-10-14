// sub_080127E4 at 0x080127E4 (thumb)

undefined4 sub_080127E4(int param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 in_lr;
  
  uVar1 = (param_2 << 0x10) >> 0x18;
  if (uVar1 != *(byte *)(param_1 + 0x1e)) {
    if ((*(byte *)(param_1 + 0xb) & 4) == 0) {
      *(undefined4 *)(param_1 + 0x6c) = (&DAT_0842e800)[uVar1];
      *(undefined4 *)(param_1 + 0x3c) = (&DAT_08414b00)[uVar1];
    }
    else {
      *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(&DAT_084c9800 + uVar1 * 4);
      *(undefined *)(param_1 + 0x1f) = 0xff;
    }
    *(char *)(param_1 + 0x1e) = (char)(param_2 >> 8);
  }
  if ((*(byte *)(param_1 + 0xb) & 4) == 0) {
    uVar2 = (uint)(ushort)(&DAT_0202e390)[uVar1] + (uint)*(byte *)(param_1 + 0x22) & 0xffff;
    *(ushort *)(param_1 + 0x48) =
         *(ushort *)(param_1 + 0x48) & 0xfc00 |
         (&DAT_0202e590)[uVar1] + *(short *)(param_1 + 0x20) & 0x3ffU;
    if ((*(byte *)(param_1 + 0xb) & 0x20) == 0) {
      *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) & 0xf | (byte)(uVar2 << 4);
      *(char *)(param_1 + 0x23) = (char)uVar2;
    }
  }
  sub_08004B3C(param_1 + 0x6c,param_2 & 0xff);
  return in_lr;
}

