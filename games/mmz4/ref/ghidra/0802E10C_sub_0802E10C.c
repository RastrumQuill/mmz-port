// sub_0802E10C at 0x0802E10C (thumb)

undefined8 sub_0802E10C(int param_1,int param_2,int param_3)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 in_lr;
  
  uVar3 = 0;
  if (*(char *)(param_1 + 0x1b8) != '\0') {
    do {
      uVar2 = (uint)*(byte *)(param_1 + 0x188 + uVar3);
      if (((param_2 - (&DAT_02000c94)[uVar2 * 6]) + (uint)(ushort)(&DAT_02000c88)[uVar2 * 0xc] <
           (uint)(ushort)(&DAT_02000c88)[uVar2 * 0xc] << 1) &&
         ((param_3 - *(int *)(&DAT_02000c98 + uVar2 * 0x18)) +
          (uint)(ushort)(&DAT_02000c8a)[uVar2 * 0xc] <
          (uint)(ushort)(&DAT_02000c8a)[uVar2 * 0xc] << 1)) {
        sub_0802E624(param_1,uVar2);
        uVar1 = (&DAT_02000c86)[uVar2 * 0xc];
        if ((uVar1 & 0xf) != 0xf) {
          uVar3 = (uint)(ushort)(&DAT_02000c86)[uVar2 * 0xc];
          goto LAB_0802e1c8;
        }
        if ((uVar1 & 0x8000) != 0) {
          uVar3 = 0x8001;
          goto LAB_0802e1c8;
        }
      }
      uVar3 = uVar3 + 1 & 0xff;
    } while (uVar3 < *(byte *)(param_1 + 0x1b8));
  }
  uVar3 = 0;
LAB_0802e1c8:
  return CONCAT44(in_lr,uVar3);
}

