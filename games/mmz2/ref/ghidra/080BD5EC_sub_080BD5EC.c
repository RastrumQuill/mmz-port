// sub_080BD5EC at 0x080BD5EC (thumb)

undefined4 sub_080BD5EC(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 in_lr;
  
  bVar1 = *(char *)(param_1 + 0x12) + 1;
  *(byte *)(param_1 + 0x12) = bVar1;
  if (bVar1 < 0x21) {
    iVar2 = (short)(&DAT_080ef450)[(*(byte *)(param_1 + 0x12) & 0x7f) * 2] * 0xdc;
  }
  else {
    if (-1 < (int)((uint)bVar1 * 0x1000000)) goto LAB_080bd640;
    iVar2 = (short)(&DAT_080ef450)[(uint)*(byte *)(param_1 + 0x12) * 2 - 0xc0 & 0xff] * -0xdc +
            0x1b800;
  }
  *(int *)(param_1 + 0x54) = iVar2;
LAB_080bd640:
  if (*(char *)(param_1 + 0x12) == -0x60) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08345998)[*(byte *)(param_1 + 9)] + 8);
  }
  return in_lr;
}

