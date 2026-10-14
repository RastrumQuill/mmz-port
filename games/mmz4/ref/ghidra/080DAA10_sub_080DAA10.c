// sub_080DAA10 at 0x080DAA10 (thumb)

undefined4 sub_080DAA10(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined *)(param_1 + 0xe) = 1;
  }
  DAT_02000a50 = DAT_02000a50 | 0x4000;
  DAT_02000a5d = *(undefined *)(param_1 + 0x78);
  DAT_02000a5e = DAT_02000a5e | *(byte *)(param_1 + 0x79);
  if (*(char *)(param_1 + 0x77) != '\0') {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08863a28)[*(byte *)(param_1 + 9)] + 8);
  }
  return in_lr;
}

