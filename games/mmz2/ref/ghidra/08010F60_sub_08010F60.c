// sub_08010F60 at 0x08010F60 (thumb)

undefined4 sub_08010F60(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 in_lr;
  
  uVar1 = *(uint *)(param_1 + 0x5c);
  uVar2 = uVar1 & 0xffff;
  if (DAT_0202e030 != 0) {
    if (*(char *)(param_1 + 0xe) == '\0') {
      uVar3 = *(uint *)(param_1 + 100);
      (&DAT_02000f94)[(uVar1 << 0x10) >> 0x14] = (ushort)uVar3 | 0x4046;
      sub_08002824(&DAT_08376b80,(uVar3 & 0x1f00) << 3,0x800);
      sub_08002880(0,((ushort)(&DAT_02000f94)[(uVar1 << 0x10) >> 0x14] & 0x1f00) * 8 + 0x800,0x800);
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      *(undefined *)(param_1 + 0xf) = 0;
    }
    if (DAT_0202e01d == '\0') {
      DAT_02000f90 = DAT_02000f90 & ~(ushort)(uVar2 << 8);
    }
    else {
      DAT_02000f90 = (ushort)(uVar2 << 8) | DAT_02000f90;
    }
  }
  return in_lr;
}

