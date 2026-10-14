// sub_0802DE64 at 0x0802DE64 (thumb)

undefined8 sub_0802DE64(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ushort *puVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined4 in_lr;
  
  iVar6 = 0;
  uVar7 = 0;
  if (*(char *)(param_1 + 0x1b8) != '\0') {
    do {
      uVar5 = (uint)*(byte *)(param_1 + 0x188 + uVar7);
      if (((&DAT_02000c86)[uVar5 * 0xc] & 0x800f) != 0xf) {
        puVar4 = &DAT_02000c88 + uVar5 * 0xc;
        if (((param_2 - (&DAT_02000c8c)[uVar5 * 6]) + (uint)*puVar4 < (uint)*puVar4 << 1) &&
           ((param_3 - (&DAT_02000c90)[uVar5 * 6]) + (uint)(ushort)(&DAT_02000c8a)[uVar5 * 0xc] <
            (uint)(ushort)(&DAT_02000c8a)[uVar5 * 0xc] << 1)) {
          sub_0802E624(param_1,uVar5);
          iVar1 = (&DAT_02000c8c)[uVar5 * 6];
          if (iVar1 < *(int *)(param_1 + 0x54)) {
            iVar1 = (iVar1 + (uint)*puVar4) - param_2;
          }
          else {
            iVar1 = ((iVar1 - (uint)*puVar4) - param_2) + -1;
          }
          if (iVar6 != 0) {
            iVar3 = iVar1;
            if (iVar1 < 0) {
              iVar3 = -iVar1;
            }
            iVar2 = iVar6;
            if (iVar6 < 0) {
              iVar2 = -iVar6;
            }
            if (iVar2 <= iVar3) goto LAB_0802df36;
          }
          iVar6 = iVar1;
        }
      }
LAB_0802df36:
      uVar7 = uVar7 + 1 & 0xff;
    } while (uVar7 < *(byte *)(param_1 + 0x1b8));
  }
  return CONCAT44(in_lr,iVar6);
}

