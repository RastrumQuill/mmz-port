// sub_0800A7A8 at 0x0800A7A8 (thumb)

undefined4 sub_0800A7A8(int param_1)

{
  byte bVar1;
  uint uVar2;
  undefined4 in_lr;
  
  if (DAT_02005208 == 4) {
    if (DAT_0202265c == 0) {
      if (*(char *)(param_1 + 0xe) == '\0') {
        DAT_02004f30 = DAT_02004f30 & ~(ushort)(*(int *)(param_1 + 0x54) << 8);
        DAT_02004f70 = 0;
        *(undefined *)(param_1 + 0xe) = 1;
      }
      DAT_02022668._0_1_ = 0;
    }
    else {
      if (*(char *)(param_1 + 0xe) == '\0') {
        uVar2 = *(uint *)(param_1 + 0x54);
        (&DAT_02004f34)[uVar2 >> 4] =
             (ushort)*(undefined4 *)(param_1 + 0x58) | (ushort)*(undefined4 *)(param_1 + 0x5c) |
             0x2044;
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
        DAT_02004f30 = DAT_02004f30 & ~(ushort)(uVar2 << 8);
      }
      uVar2 = (uint)(byte)DAT_02022668;
      DAT_02022668._0_1_ = (byte)(uVar2 - 4);
      if ((int)((uVar2 - 4) * 0x1000000) < 0) {
        DAT_02022668._0_1_ = 0;
      }
      bVar1 = (byte)DAT_02022668;
      if ((byte)DAT_02022668 == 0) {
        DAT_0202265c = (uint)(byte)DAT_02022668;
        *(byte *)(param_1 + 0xe) = (byte)DAT_02022668;
        sub_08001EE8((int)(short)(ushort)DAT_0202266c);
        DAT_0202266c._0_2_ = (ushort)bVar1;
      }
    }
  }
  return in_lr;
}

