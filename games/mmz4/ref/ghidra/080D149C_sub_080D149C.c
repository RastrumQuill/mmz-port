// sub_080D149C at 0x080D149C (thumb)

undefined4 sub_080D149C(int param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0x12);
  uVar3 = bVar1 + 1;
  *(char *)(param_1 + 0x12) = (char)uVar3;
  if ((uVar3 & 0xff) < 0x21) {
    iVar2 = *(short *)((int)&DAT_08128c10 + (uVar3 * 0x2000000 >> 0x17)) * 0xdc;
  }
  else {
    if ((uVar3 & 0xff) < 0x7f) goto LAB_080d14e6;
    iVar2 = *(short *)((int)&DAT_08128c10 + ((uint)bVar1 * 0x2000000 + 0x42000000 >> 0x17)) * -0xdc
            + 0x1b800;
  }
  *(int *)(param_1 + 0x54) = iVar2;
LAB_080d14e6:
  if (*(char *)(param_1 + 0x12) == -0x60) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08863a28)[*(byte *)(param_1 + 9)] + 8);
  }
  return in_lr;
}

