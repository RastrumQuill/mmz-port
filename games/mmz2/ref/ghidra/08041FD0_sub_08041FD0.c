// sub_08041FD0 at 0x08041FD0 (thumb)

undefined4 sub_08041FD0(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined *)(param_1 + 0xd4) = 0;
    *(undefined *)(param_1 + 0x12) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  bVar1 = *(byte *)(param_1 + 0x12);
  iVar2 = bVar1 + 1;
  *(char *)(param_1 + 0x12) = (char)iVar2;
  *(int *)(param_1 + 0x58) =
       (short)(&DAT_080ef450)[bVar1 + 0x40 & 0xff] * 0x10 + *(int *)(param_1 + 0xb8) + 0x4000;
  if ((iVar2 * 0x1000000 < 0) &&
     ((uint)*(ushort *)(param_1 + 200) != (int)*(short *)(param_1 + 0xa4))) {
    *(undefined *)(param_1 + 0xd) = 8;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  if (*(char *)(param_1 + 0x12) == -1) {
    *(undefined *)(param_1 + 0xd) = 6;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

