// sub_0802E1D8 at 0x0802E1D8 (thumb)

undefined8 sub_0802E1D8(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 in_lr;
  
  uVar3 = 0;
  if (*(char *)(param_1 + 0x1b8) != '\0') {
    do {
      uVar2 = (uint)*(byte *)(param_1 + 0x188 + uVar3);
      if (((((param_2 - (&DAT_02000c8c)[uVar2 * 6]) + (uint)(ushort)(&DAT_02000c88)[uVar2 * 0xc] <
             (uint)(ushort)(&DAT_02000c88)[uVar2 * 0xc] << 1) &&
           ((param_3 - (&DAT_02000c90)[uVar2 * 6]) + (uint)(ushort)(&DAT_02000c8a)[uVar2 * 0xc] <
            (uint)(ushort)(&DAT_02000c8a)[uVar2 * 0xc] << 1)) &&
          (((&DAT_02000c86)[uVar2 * 0xc] & 0x200) == 0)) &&
         (((((&DAT_02000c86)[uVar2 * 0xc] & 0xf) != 0xf &&
           ((&DAT_02000c8c)[uVar2 * 6] == (&DAT_02000c94)[uVar2 * 6])) &&
          ((&DAT_02000c90)[uVar2 * 6] != *(int *)(&DAT_02000c98 + uVar2 * 0x18))))) {
        uVar1 = 1;
        goto LAB_0802e2a6;
      }
      uVar3 = uVar3 + 1 & 0xff;
    } while (uVar3 < *(byte *)(param_1 + 0x1b8));
  }
  uVar1 = 0;
LAB_0802e2a6:
  return CONCAT44(in_lr,uVar1);
}

