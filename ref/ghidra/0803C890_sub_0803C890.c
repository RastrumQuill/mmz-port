// sub_0803C890 at 0x0803C890 (thumb)

undefined4 sub_0803C890(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
    *(undefined *)(param_1 + 0x12) = 0x80;
  }
  sub_080297C0(param_1);
  if (*(char *)(param_1 + 0xf) == '\0') {
    iVar2 = *(int *)(param_1 + 0x50) +
            ((int)((uint)(ushort)(&DAT_080c8e24)[*(byte *)(param_1 + 0x12) + 0x40] << 0x10) >> 0x11)
    ;
    *(int *)(param_1 + 0x50) = iVar2;
    cVar1 = *(char *)(param_1 + 0x12) + '\x01';
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 == -0x3f) {
      *(int *)(param_1 + 0xc0) = iVar2 + 0x1400;
      *(undefined *)(param_1 + 0x12) = 0x80;
      *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
    }
  }
  else {
    *(int *)(param_1 + 0x50) =
         *(int *)(param_1 + 0xc0) + (short)(&DAT_080c8e24)[*(byte *)(param_1 + 0x12) + 0x40] * 0x14;
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x01';
  }
  if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 1) != 0) {
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  return in_lr;
}

