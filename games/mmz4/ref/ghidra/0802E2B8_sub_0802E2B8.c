// sub_0802E2B8 at 0x0802E2B8 (thumb)

undefined8 sub_0802E2B8(int param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 in_lr;
  
  uVar2 = 0;
  if (*(byte *)(param_1 + 0x1b8) != 0) {
    do {
      uVar1 = (uint)*(byte *)(param_1 + 0x188 + uVar2);
      if (((param_2 - (&DAT_02000c8c)[uVar1 * 6]) + (uint)(ushort)(&DAT_02000c88)[uVar1 * 0xc] <
           (uint)(ushort)(&DAT_02000c88)[uVar1 * 0xc] << 1) &&
         ((param_3 - (&DAT_02000c90)[uVar1 * 6]) + (uint)(ushort)(&DAT_02000c8a)[uVar1 * 0xc] <
          (uint)(ushort)(&DAT_02000c8a)[uVar1 * 0xc] << 1)) {
        uVar2 = (uint)(ushort)(&DAT_02000c86)[uVar1 * 0xc];
        goto LAB_0802e348;
      }
      uVar2 = uVar2 + 1 & 0xff;
    } while (uVar2 < *(byte *)(param_1 + 0x1b8));
  }
  uVar2 = 0;
LAB_0802e348:
  return CONCAT44(in_lr,uVar2);
}

