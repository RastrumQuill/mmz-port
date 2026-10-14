// sub_0801CF00 at 0x0801CF00 (thumb)

undefined4 sub_0801CF00(int param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 in_lr;
  
  uVar1 = (param_2 << 0x10) >> 0x18;
  if (uVar1 != *(byte *)(param_1 + 0x1e)) {
    if ((*(byte *)(param_1 + 0xb) & 4) == 0) {
      *(undefined4 *)(param_1 + 0x6c) = (&DAT_08c3c000)[uVar1];
      *(undefined4 *)(param_1 + 0x3c) = (&DAT_08c1c000)[uVar1];
    }
    else {
      *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(&DAT_088c7000 + uVar1 * 4);
      *(undefined *)(param_1 + 0x1f) = 0xff;
    }
    *(char *)(param_1 + 0x1e) = (char)(param_2 >> 8);
  }
  if ((*(byte *)(param_1 + 0xb) & 4) == 0) {
    uVar2 = (uint)(ushort)(&DAT_0202de40)[uVar1] + (uint)*(byte *)(param_1 + 0x22) & 0xffff;
    *(ushort *)(param_1 + 0x48) =
         *(ushort *)(param_1 + 0x48) & 0xfc00 |
         (&DAT_0202e040)[uVar1] + *(short *)(param_1 + 0x20) & 0x3ffU;
    if ((*(byte *)(param_1 + 0xb) & 0x20) == 0) {
      *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) & 0xf | (byte)(uVar2 << 4);
      *(char *)(param_1 + 0x23) = (char)uVar2;
    }
  }
  sub_080034B8(param_1 + 0x6c,param_2 & 0xff);
  return in_lr;
}

