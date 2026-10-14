// sub_080D7FD8 at 0x080D7FD8 (thumb)

undefined4 sub_080D7FD8(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0xe) = 1;
  uVar1 = (uint)(ushort)L"?8899::::::;;;;<<<<====@@@@"[*(byte *)(param_1 + 0x11)];
  (&DAT_0202ebb4)[(ushort)L"?8899::::::;;;;<<<<====@@@@"[*(byte *)(param_1 + 0x11)] >> 3] =
       (byte)(1 << (uVar1 & 7)) |
       (&DAT_0202ebb4)[(ushort)L"?8899::::::;;;;<<<<====@@@@"[*(byte *)(param_1 + 0x11)] >> 3];
  if (uVar1 == 0x3f) {
    DAT_02036b4b = DAT_02036b4b | 0x80;
    DAT_02036b83 = DAT_02036b83 | 0x80;
  }
  if (uVar1 == 0x3a) {
    if ((ushort)((DAT_0202e12c & 0x7fff) + 0x708) < 0x8000) {
      DAT_0202e12c = DAT_0202e12c + 0x708 | 0x8000;
    }
    else {
      DAT_0202e12c = 0xffff;
    }
  }
  if (uVar1 == 0x40) {
    *(undefined *)(DAT_0202ebf0 + 1) = 5;
  }
  *(undefined *)(param_1 + 0xb6) = 4;
  sub_080D8084(param_1);
  return in_lr;
}

