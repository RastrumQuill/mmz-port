// sub_0802E544 at 0x0802E544 (thumb)

undefined8 sub_0802E544(int param_1,int param_2,int param_3)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 in_lr;
  
  uVar7 = 0;
  if (*(char *)(param_1 + 0x1b8) != '\0') {
    do {
      uVar4 = (uint)*(byte *)(param_1 + 0x188 + uVar7);
      uVar2 = (uint)(ushort)(&DAT_02000c88)[uVar4 * 0xc];
      if ((((param_2 - (&DAT_02000c8c)[uVar4 * 6]) + uVar2 < uVar2 << 1) &&
          ((param_3 - (&DAT_02000c90)[uVar4 * 6]) + (uint)(ushort)(&DAT_02000c8a)[uVar4 * 0xc] <
           (uint)(ushort)(&DAT_02000c8a)[uVar4 * 0xc] << 1)) &&
         (cVar1 = sub_0802F06C((&DAT_02000c86)[uVar4 * 0xc] & 0x880f,0), cVar1 != '\0')) {
        iVar5 = (&DAT_02000c8c)[uVar4 * 6];
        iVar6 = (iVar5 + (uint)((ushort)(&DAT_02000c88)[uVar4 * 0xc] >> 1)) - param_2;
        if (iVar5 < param_2) {
          if (iVar6 < 0x400) {
            uVar3 = 1;
            goto LAB_0802e614;
          }
        }
        else if (-0x400 < iVar6) {
          uVar3 = 2;
          goto LAB_0802e614;
        }
      }
      uVar7 = uVar7 + 1 & 0xff;
    } while (uVar7 < *(byte *)(param_1 + 0x1b8));
  }
  uVar3 = 0;
LAB_0802e614:
  return CONCAT44(in_lr,uVar3);
}

