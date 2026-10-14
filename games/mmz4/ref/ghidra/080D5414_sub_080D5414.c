// sub_080D5414 at 0x080D5414 (thumb)

undefined4 sub_080D5414(int param_1)

{
  byte bVar1;
  undefined4 in_lr;
  
  sub_08002C94(param_1 + 0x34,0x80d556d);
  *(int *)(param_1 + 0x3c) = param_1;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xf7;
  if (*(char *)(param_1 + 0x11) == -1) {
    *(char **)(param_1 + 0x80) = "SUB TANK";
    sub_08002B10(6);
  }
  else {
    *(char **)(param_1 + 0x80) = "ArcCannon" + (uint)*(byte *)(param_1 + 0x11) * 0x10;
  }
  bVar1 = sub_080D5544(*(undefined4 *)(param_1 + 0x80));
  *(byte *)(param_1 + 0x7d) = bVar1;
  *(ushort *)(param_1 + 0x7e) = *(byte *)(param_1 + 0x7d) + 0x4ff;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(undefined *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  *(undefined *)(param_1 + 0x12) = 0x3c;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08863a28)[*(byte *)(param_1 + 9)] + 4);
  sub_080D54C0(param_1);
  return in_lr;
}

