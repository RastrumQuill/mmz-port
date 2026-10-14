// sub_08028614 at 0x08028614 (thumb)

undefined8 sub_08028614(int param_1,int param_2,int param_3)

{
  ushort uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined4 in_lr;
  
  uVar5 = 0;
  if (*(byte *)(param_1 + 0x18c) != 0) {
    do {
      uVar3 = (uint)*(byte *)(param_1 + 0x15c + uVar5);
      iVar4 = (&DAT_0200265c)[uVar3 * 6];
      uVar1 = (&DAT_02002658)[uVar3 * 0xc];
      if ((((param_2 - iVar4) + (uint)uVar1 < (uint)uVar1 << 1) &&
          ((param_3 - (&DAT_02002660)[uVar3 * 6]) + (uint)(ushort)(&DAT_0200265a)[uVar3 * 0xc] <
           (uint)(ushort)(&DAT_0200265a)[uVar3 * 0xc] << 1)) &&
         (((&DAT_02002656)[uVar3 * 0xc] & 0x880f) == 1)) {
        if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
          if ((int)((iVar4 + (uint)(uVar1 >> 1)) - param_2) < 0x100) goto LAB_080286a6;
        }
        else if (-0x100 < (int)((iVar4 - (uint)(uVar1 >> 1)) - param_2)) {
LAB_080286a6:
          uVar2 = 1;
          goto LAB_080286d6;
        }
      }
      uVar5 = uVar5 + 1 & 0xff;
    } while (uVar5 < *(byte *)(param_1 + 0x18c));
  }
  uVar2 = 0;
LAB_080286d6:
  return CONCAT44(in_lr,uVar2);
}

