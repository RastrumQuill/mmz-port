// sub_08103160 at 0x08103160 (thumb)

undefined4 sub_08103160(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if ((*(uint *)(param_1 + 0x14) & 1) != 0) {
    iVar1 = *(int *)(param_1 + 0x2c);
    if ((*(uint *)(param_1 + 0x14) & 0x20000) != 0) {
      *(undefined *)(iVar1 + 0xb4) = 1;
      sub_08002B10(0x188);
      (&DAT_0202e8b4)[(byte)(&DAT_08868888)[*(byte *)(iVar1 + 0x11)] >> 3] =
           (byte)(1 << ((byte)(&DAT_08868888)[*(byte *)(iVar1 + 0x11)] & 7)) |
           (&DAT_0202e8b4)[(byte)(&DAT_08868888)[*(byte *)(iVar1 + 0x11)] >> 3];
      (&DAT_02035880)[(byte)(&DAT_08868888)[*(byte *)(iVar1 + 0x11)] >> 3] =
           (byte)(1 << ((byte)(&DAT_08868888)[*(byte *)(iVar1 + 0x11)] & 7)) |
           (&DAT_02035880)[(byte)(&DAT_08868888)[*(byte *)(iVar1 + 0x11)] >> 3];
      if (DAT_0202dbf0 != 0) {
        sub_0803A584(DAT_0202dbf0,8,0x11);
      }
    }
  }
  return in_lr;
}

