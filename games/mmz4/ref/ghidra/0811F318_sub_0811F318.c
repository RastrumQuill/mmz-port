// sub_0811F318 at 0x0811F318 (thumb)

undefined4 sub_0811F318(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  cVar1 = sub_08128884(param_1,*(undefined4 *)(&DAT_088861a8 + (uint)*(byte *)(param_1 + 2) * 4));
  if (cVar1 != '\0') {
    sub_08128884(param_1,*(undefined4 *)(&DAT_088861b8 + (uint)*(byte *)(param_1 + 2) * 4));
  }
  if (*(char *)(param_1 + 0xddd) != '\0') {
    *(undefined *)(param_1 + 1) = 3;
  }
  sub_080025D8(0x2f);
  if (*(char *)(param_1 + 0xddf) == '\0') {
    DAT_02000a50 = DAT_02000a50 & 0xdfff;
  }
  else {
    DAT_03002ac0 = 0;
    DAT_02000a50 = DAT_02000a50 | 0x2000;
    DAT_02000a5c = 0x10;
    DAT_02000a5e = DAT_02000a5e | 3;
    DAT_02000a54 = *(byte *)(param_1 + 0xddf) + 0x40 & 0xff |
                   (0x40 - (ushort)*(byte *)(param_1 + 0xddf)) * 0x100;
    DAT_02000a58 = *(byte *)(param_1 + 0xde0) + 0x50 & 0xff |
                   (0x50 - (ushort)*(byte *)(param_1 + 0xde0)) * 0x100;
  }
  return in_lr;
}

