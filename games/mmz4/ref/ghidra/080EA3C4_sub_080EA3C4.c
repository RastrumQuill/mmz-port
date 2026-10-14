// sub_080EA3C4 at 0x080EA3C4 (thumb)

undefined4 sub_080EA3C4(int param_1)

{
  byte bVar1;
  uint uVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x11) == '\x01') {
    DAT_0202e06a = 0x3e0;
  }
  else {
    DAT_0202e06a = 0x1e0;
  }
  DAT_0202de6a = 10;
  DAT_0202dfc6 = 10;
  if ((DAT_0202e8c4 & 0x80) == 0) {
    bVar1 = 0x15;
  }
  else {
    bVar1 = 0xc3;
  }
  DAT_0202e1c6 = DAT_0202e06a;
  *(byte *)(param_1 + 0xb8) = bVar1;
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + -0x700;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 0x900;
  uVar2 = (uint)*(byte *)(param_1 + 0xb8);
  sub_08001D30(&DAT_08c44000 + uVar2 * 5,
               ((uint)(ushort)(&DAT_0202e040)[uVar2] -
               (uint)((ushort)(&DAT_08c44006)[uVar2 * 10] >> 6)) * 0x20 + 0x10000);
  sub_08002208(&DAT_08c4400c + uVar2 * 0x14,
               ((uint)(ushort)(&DAT_0202de40)[uVar2] - (uint)(byte)(&DAT_08c44013)[uVar2 * 0x14]) *
               0x20 + 0x200);
  sub_0801CC9C(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) & 0xf3 | 4;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_08865dc4 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  *(undefined *)(param_1 + 0xd) = 0;
  *(undefined *)(param_1 + 0xe) = 0;
  *(undefined2 *)(param_1 + 0xba) = 0;
  sub_080EA4D0(param_1);
  return in_lr;
}

