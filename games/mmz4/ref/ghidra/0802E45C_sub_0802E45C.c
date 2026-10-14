// sub_0802E45C at 0x0802E45C (thumb)

undefined8 sub_0802E45C(int param_1,int param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  ushort *puVar4;
  int *piVar5;
  uint uVar6;
  undefined4 in_lr;
  
  uVar6 = 0;
  if (*(char *)(param_1 + 0x1b8) != '\0') {
    do {
      uVar3 = (uint)*(byte *)(param_1 + 0x188 + uVar6);
      piVar5 = &DAT_02000c8c + uVar3 * 6;
      puVar4 = &DAT_02000c88 + uVar3 * 0xc;
      if ((((param_2 - *piVar5) + (uint)*puVar4 < (uint)*puVar4 << 1) &&
          ((param_3 - (&DAT_02000c90)[uVar3 * 6]) + (uint)(ushort)(&DAT_02000c8a)[uVar3 * 0xc] <
           (uint)(ushort)(&DAT_02000c8a)[uVar3 * 0xc] << 1)) &&
         (cVar1 = sub_0802F06C((&DAT_02000c86)[uVar3 * 0xc] & 0x880f,0), cVar1 != '\0')) {
        if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
          if ((int)((*piVar5 + (uint)(*puVar4 >> 1)) - param_2) < 0x100) goto LAB_0802e4fc;
        }
        else if (-0x100 < (int)((*piVar5 - (uint)(*puVar4 >> 1)) - param_2)) {
LAB_0802e4fc:
          uVar2 = 1;
          goto LAB_0802e534;
        }
      }
      uVar6 = uVar6 + 1 & 0xff;
    } while (uVar6 < *(byte *)(param_1 + 0x1b8));
  }
  uVar2 = 0;
LAB_0802e534:
  return CONCAT44(in_lr,uVar2);
}

