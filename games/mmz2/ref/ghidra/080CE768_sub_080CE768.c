// sub_080CE768 at 0x080CE768 (thumb)

undefined4 sub_080CE768(int param_1)

{
  undefined4 in_lr;
  
  if (DAT_0202ebf7 + -2 < 1) {
    DAT_0202ebf7 = '\0';
  }
  else {
    DAT_0202ebf7 = DAT_0202ebf7 + -2;
  }
  (&DAT_0202ebb4)[(ushort)(&DAT_083498e0)[*(byte *)(param_1 + 0x11)] >> 3] =
       (byte)(1 << ((ushort)(&DAT_083498e0)[*(byte *)(param_1 + 0x11)] & 7)) |
       (&DAT_0202ebb4)[(ushort)(&DAT_083498e0)[*(byte *)(param_1 + 0x11)] >> 3];
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0834863c + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  return in_lr;
}

