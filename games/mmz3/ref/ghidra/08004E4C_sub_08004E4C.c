// sub_08004E4C at 0x08004E4C (thumb)

undefined4 sub_08004E4C(int param_1,undefined4 param_2,uint param_3,ushort param_4)

{
  undefined4 in_lr;
  
  sub_080048A0(param_1,0x8004efd);
  *(undefined *)(param_1 + 0x12) = 0;
  *(undefined *)(param_1 + 0x13) = 0;
  *(byte *)(param_1 + 0x11) = *(byte *)(param_1 + 0x11) & 3 | 8;
  *(undefined4 *)(param_1 + 8) = param_2;
  *(ushort *)(param_1 + 0x10) = *(ushort *)(param_1 + 0x10) & 0xfc00 | param_4 & 0x3ff;
  *(byte *)(param_1 + 0xd) = (byte)(((param_3 << 0x18) >> 0x1a) << 6) | 0x10;
  *(byte *)(param_1 + 0xf) = *(byte *)(param_1 + 0xf) & 1 | (byte)((param_3 & 3) << 6);
  *(ushort *)(param_1 + 0xe) = *(ushort *)(param_1 + 0xe) & 0xfe00;
  *(undefined *)(param_1 + 0xc) = 0;
  return in_lr;
}

