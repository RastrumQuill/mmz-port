// sub_080286E4 at 0x080286E4 (thumb)

undefined8 sub_080286E4(int param_1,int param_2,int param_3)

{
  ushort uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 in_lr;
  
  uVar6 = 0;
  if (*(byte *)(param_1 + 0x18c) != 0) {
    do {
      uVar3 = (uint)*(byte *)(param_1 + 0x15c + uVar6);
      iVar5 = (&DAT_0200265c)[uVar3 * 6];
      uVar1 = (&DAT_02002658)[uVar3 * 0xc];
      if ((((param_2 - iVar5) + (uint)uVar1 < (uint)uVar1 << 1) &&
          ((param_3 - (&DAT_02002660)[uVar3 * 6]) + (uint)(ushort)(&DAT_0200265a)[uVar3 * 0xc] <
           (uint)(ushort)(&DAT_0200265a)[uVar3 * 0xc] << 1)) &&
         (((&DAT_02002656)[uVar3 * 0xc] & 0x880f) == 1)) {
        iVar4 = (iVar5 + (uint)(uVar1 >> 1)) - param_2;
        if (iVar5 < param_2) {
          if (iVar4 < 0x400) {
            uVar2 = 1;
            goto LAB_080287a4;
          }
        }
        else if (-0x400 < iVar4) {
          uVar2 = 2;
          goto LAB_080287a4;
        }
      }
      uVar6 = uVar6 + 1 & 0xff;
    } while (uVar6 < *(byte *)(param_1 + 0x18c));
  }
  uVar2 = 0;
LAB_080287a4:
  return CONCAT44(in_lr,uVar2);
}

