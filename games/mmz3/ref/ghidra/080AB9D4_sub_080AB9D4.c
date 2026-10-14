// sub_080AB9D4 at 0x080AB9D4 (thumb)

undefined4 sub_080AB9D4(int param_1)

{
  int iVar1;
  byte bVar2;
  undefined4 in_lr;
  
  sub_080177F4();
  bVar2 = *(byte *)(param_1 + 0x12);
  *(byte *)(param_1 + 0x12) = bVar2 + 1;
  if ((bVar2 & 1) == 0) {
    bVar2 = *(byte *)(param_1 + 10) | 1;
  }
  else {
    bVar2 = *(byte *)(param_1 + 10) & 0xfe;
  }
  *(byte *)(param_1 + 10) = bVar2;
  iVar1 = DAT_0202f5c0;
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(DAT_0202f5c0 + 0x54);
  *(int *)(param_1 + 0x58) = *(int *)(iVar1 + 0x58) + -0x800;
  if (*(char *)(param_1 + 0x11) != '\0') {
    sub_0800471C(0x3f);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_083670d4)[*(byte *)(param_1 + 9)] + 8);
  }
  return in_lr;
}

