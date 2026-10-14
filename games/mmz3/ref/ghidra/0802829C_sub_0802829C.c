// sub_0802829C at 0x0802829C (thumb)

undefined8 sub_0802829C(int param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  ushort *puVar3;
  int iVar4;
  uint uVar5;
  undefined4 in_lr;
  
  iVar4 = 0;
  uVar5 = 0;
  if (*(char *)(param_1 + 0x18c) != '\0') {
    do {
      uVar1 = (uint)*(byte *)(param_1 + 0x15c + uVar5);
      if ((param_2 - (&DAT_0200265c)[uVar1 * 6]) + (uint)(ushort)(&DAT_02002658)[uVar1 * 0xc] <
          (uint)(ushort)(&DAT_02002658)[uVar1 * 0xc] << 1) {
        puVar3 = &DAT_0200265a + uVar1 * 0xc;
        if ((param_3 - (&DAT_02002660)[uVar1 * 6]) + (uint)*puVar3 < (uint)*puVar3 << 1) {
          sub_080287B4(param_1,(&DAT_02002654)[uVar1 * 0xc]);
          iVar2 = (&DAT_02002660)[uVar1 * 6];
          if (iVar2 < param_3) {
            iVar2 = (iVar2 + (uint)*puVar3) - param_3;
          }
          else {
            iVar2 = ((iVar2 - (uint)*puVar3) - param_3) + -1;
          }
          if ((iVar4 == 0) || (iVar4 < iVar2)) {
            iVar4 = iVar2;
          }
        }
      }
      uVar5 = uVar5 + 1 & 0xff;
    } while (uVar5 < *(byte *)(param_1 + 0x18c));
  }
  return CONCAT44(in_lr,iVar4);
}

