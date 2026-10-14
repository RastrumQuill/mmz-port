// sub_08009FD0 at 0x08009FD0 (thumb)

undefined4 sub_08009FD0(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    uVar1 = *(uint *)(param_1 + 0x54);
    (&DAT_02004f34)[uVar1 >> 4] =
         (ushort)*(undefined4 *)(param_1 + 0x58) | (ushort)*(undefined4 *)(param_1 + 0x5c) | 0x2044;
    DAT_02004f30 = DAT_02004f30 & ~(ushort)(uVar1 << 8);
    sub_08004EA8(((ushort)(&DAT_02004f34)[uVar1 >> 4] & 0x1f00) * 8 + 0x6000000,
                 *(undefined4 *)(param_1 + 0x20),0x79c);
    DAT_02004f70 = 0x3f48;
    DAT_02004f72 = 0x1010;
    DAT_02004f80 = DAT_02004f80 | 0x4000;
    DAT_02004f8d = 0xff;
    DAT_02004f8e = DAT_02004f8e & 0xf7;
    DAT_02004f86 = 0;
    DAT_02004f8a = 0xa0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  return in_lr;
}

