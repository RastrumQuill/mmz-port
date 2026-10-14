// sub_0801D60C at 0x0801D60C (thumb)

undefined8 sub_0801D60C(int param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 1) != '\0') goto LAB_0801d6c0;
  if ((*(char *)(DAT_0202ebf0 + 0x13) == '\x06') && ((*(byte *)(DAT_02036e98 + 0x211) & 2) == 0)) {
    *(byte *)(DAT_02036e98 + 0x211) = *(byte *)(DAT_02036e98 + 0x211) | 2;
    sub_080DEF4C(0x102);
    uVar1 = *(uint *)(param_1 + 0xc);
    uVar2 = 1;
LAB_0801d6b6:
    *(uint *)(param_1 + 0xc) = uVar1 | uVar2;
  }
  else {
    if ((*(char *)(DAT_0202ebf0 + 0x13) == '\x05') && ((*(byte *)(DAT_02036e98 + 0x211) & 4) == 0))
    {
      *(byte *)(DAT_02036e98 + 0x211) = *(byte *)(DAT_02036e98 + 0x211) | 4;
      sub_080DEF4C(0x101);
      uVar1 = *(uint *)(param_1 + 0xc);
      uVar2 = 2;
      goto LAB_0801d6b6;
    }
    if ((*(char *)(DAT_0202ebf0 + 0x13) == '\x03') && ((*(byte *)(DAT_02036e98 + 0x211) & 8) == 0))
    {
      *(byte *)(DAT_02036e98 + 0x211) = *(byte *)(DAT_02036e98 + 0x211) | 8;
      sub_080DEF4C(0x100);
      uVar1 = *(uint *)(param_1 + 0xc);
      uVar2 = 4;
      goto LAB_0801d6b6;
    }
  }
  *(char *)(param_1 + 1) = *(char *)(param_1 + 1) + '\x01';
LAB_0801d6c0:
  return CONCAT44(in_lr,(uint)(DAT_0202f65a != 0));
}

