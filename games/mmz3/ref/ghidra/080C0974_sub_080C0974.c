// sub_080C0974 at 0x080C0974 (thumb)

undefined4 sub_080C0974(int param_1)

{
  byte bVar1;
  short sVar2;
  undefined4 in_lr;
  
  sub_080177F4();
  bVar1 = *(char *)(param_1 + 0x12) - 1;
  *(byte *)(param_1 + 0x12) = bVar1;
  if ((bVar1 & 3) < 2) {
    bVar1 = *(byte *)(param_1 + 10) & 0xfe;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 1;
  }
  *(byte *)(param_1 + 10) = bVar1;
  if (*(char *)(param_1 + 0x10) != '\0') {
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 0x100;
    sVar2 = sub_08009A3C(*(undefined4 *)(param_1 + 0x54));
    if (sVar2 != 0) goto LAB_080c09bc;
  }
  if (*(char *)(param_1 + 0x12) != '\0') {
    return in_lr;
  }
LAB_080c09bc:
  *(undefined4 *)(param_1 + 0xc) = 2;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0836a0c8)[*(byte *)(param_1 + 9)] + 8);
  return in_lr;
}

