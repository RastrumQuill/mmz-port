// sub_0802E358 at 0x0802E358 (thumb)

undefined8 sub_0802E358(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 in_lr;
  
  uVar3 = 0;
  if (*(char *)(param_1 + 0x1b8) != '\0') {
    do {
      uVar2 = (uint)*(byte *)(param_1 + 0x188 + uVar3);
      if (((((&DAT_02000c86)[uVar2 * 0xc] & 0xf) == 0xf) &&
          ((param_2 - (&DAT_02000c8c)[uVar2 * 6]) + (uint)(ushort)(&DAT_02000c88)[uVar2 * 0xc] <
           (uint)(ushort)(&DAT_02000c88)[uVar2 * 0xc] << 1)) &&
         ((param_3 - (&DAT_02000c90)[uVar2 * 6]) + (uint)(ushort)(&DAT_02000c8a)[uVar2 * 0xc] <
          (uint)(ushort)(&DAT_02000c8a)[uVar2 * 0xc] << 1)) {
        if (((&DAT_02000c86)[uVar2 * 0xc] & 0x20) == 0) {
          *(int *)(param_1 + 0x1c4) = (&DAT_02000c8c)[uVar2 * 6];
        }
        else {
          *(int *)(param_1 + 0x1c4) = param_2;
        }
        *(undefined4 *)(param_1 + 0x1c8) = (&DAT_02000c90)[uVar2 * 6];
        *(undefined *)(param_1 + 0x1cc) = 1;
        *(char *)(param_1 + 0x1cd) = (char)(&DAT_02000c84)[uVar2 * 0xc];
        uVar1 = 0xf;
        goto LAB_0802e44c;
      }
      uVar3 = uVar3 + 1 & 0xff;
    } while (uVar3 < *(byte *)(param_1 + 0x1b8));
  }
  uVar1 = 0;
LAB_0802e44c:
  return CONCAT44(in_lr,uVar1);
}

