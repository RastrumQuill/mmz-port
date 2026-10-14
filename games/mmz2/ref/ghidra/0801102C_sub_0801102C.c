// sub_0801102C at 0x0801102C (thumb)

undefined4 sub_0801102C(int param_1)

{
  uint uVar1;
  ushort *puVar2;
  uint uVar3;
  undefined4 in_lr;
  uint local_24;
  uint local_20;
  
  uVar1 = *(uint *)(param_1 + 0x5c);
  uVar3 = uVar1 << 0x10;
  if (DAT_0202e030 == 0) {
    local_24 = (uint)*(byte *)(param_1 + 0xf);
    if (local_24 == 0) {
      uVar3 = uVar3 >> 0x14;
      puVar2 = &DAT_02000f94 + uVar3;
      *puVar2 = *puVar2 & 0xfffc | 3;
      DAT_02000f90 = (ushort)((uVar1 & 0xffff) << 8) | DAT_02000f90;
      local_20 = local_24;
      sub_08005664(param_1 + 0x14,&local_24,(*puVar2 & 0x1f00) * 8 + 0x6000000);
      sub_080069A0(param_1 + 0x14,&DAT_02000f9c + uVar3);
      *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
      *(undefined *)(param_1 + 0xe) = 0;
    }
  }
  else {
    uVar3 = uVar3 >> 0x14;
    *(short *)(&DAT_02000f9c + uVar3) =
         ((short)*(undefined4 *)(param_1 + 0x34) - (short)((uint)DAT_0202e024 >> 8)) + 0xff;
    *(short *)((int)&DAT_02000f9c + uVar3 * 4 + 2) =
         ((short)*(undefined4 *)(param_1 + 0x38) - (short)((uint)DAT_0202e028 >> 8)) + 0x40;
  }
  return in_lr;
}

