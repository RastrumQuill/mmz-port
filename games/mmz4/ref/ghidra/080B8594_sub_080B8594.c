// sub_080B8594 at 0x080B8594 (thumb)

undefined4 sub_080B8594(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_08001D30(&DAT_08c44e38,(DAT_0202e1ac - 0x300) * 0x20 + 0x10000);
    sub_08002208(&DAT_08c44e44,(DAT_0202dfac - 4) * 0x20 + 0x200);
    sub_08001D30(&DAT_08c451d0,(DAT_0202e208 - 0x3b9) * 0x20 + 0x10000);
    sub_08002208(&DAT_08c451dc,(DAT_0202e008 - 8) * 0x20 + 0x200);
    sub_08005784(param_1 + 0x74,&DAT_08860d08);
    DAT_02000a40 = 0x3f10;
    *(byte *)(param_1 + 0x45) = *(byte *)(param_1 + 0x45) & 0xf3 | 4;
    sub_0801CEEC(param_1);
    sub_0801CF00(param_1,0xb800);
    *(undefined *)(param_1 + 0x25) = 0x18;
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 0x1800;
    *(undefined *)(param_1 + 0x12) = 0x10;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(param_1);
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  DAT_02000a42 = 0x10 - *(byte *)(param_1 + 0x12) & 0x1f | (ushort)*(byte *)(param_1 + 0x12) << 8;
  if (cVar1 == '\0') {
    *(undefined *)(param_1 + 0xd) = 3;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

