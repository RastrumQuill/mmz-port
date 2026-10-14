// sub_080281B4 at 0x080281B4 (thumb)

undefined8 sub_080281B4(int param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ushort *puVar5;
  int iVar6;
  uint uVar7;
  undefined4 in_lr;
  
  iVar6 = 0;
  uVar7 = 0;
  if (*(char *)(param_1 + 0x18c) != '\0') {
    do {
      uVar1 = (uint)*(byte *)(param_1 + 0x15c + uVar7);
      puVar5 = &DAT_02002658 + uVar1 * 0xc;
      if (((param_2 - (&DAT_0200265c)[uVar1 * 6]) + (uint)*puVar5 < (uint)*puVar5 << 1) &&
         ((param_3 - (&DAT_02002660)[uVar1 * 6]) + (uint)(ushort)(&DAT_0200265a)[uVar1 * 0xc] <
          (uint)(ushort)(&DAT_0200265a)[uVar1 * 0xc] << 1)) {
        sub_080287B4(param_1,(&DAT_02002654)[uVar1 * 0xc]);
        iVar2 = (&DAT_0200265c)[uVar1 * 6];
        if (iVar2 < *(int *)(param_1 + 0x54)) {
          iVar2 = (iVar2 + (uint)*puVar5) - param_2;
        }
        else {
          iVar2 = ((iVar2 - (uint)*puVar5) - param_2) + -1;
        }
        if (iVar6 != 0) {
          iVar4 = iVar2;
          if (iVar2 < 0) {
            iVar4 = -iVar2;
          }
          iVar3 = iVar6;
          if (iVar6 < 0) {
            iVar3 = -iVar6;
          }
          if (iVar3 <= iVar4) goto LAB_08028274;
        }
        iVar6 = iVar2;
      }
LAB_08028274:
      uVar7 = uVar7 + 1 & 0xff;
    } while (uVar7 < *(byte *)(param_1 + 0x18c));
  }
  return CONCAT44(in_lr,iVar6);
}

