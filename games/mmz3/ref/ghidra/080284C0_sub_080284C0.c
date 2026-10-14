// sub_080284C0 at 0x080284C0 (thumb)

undefined8 sub_080284C0(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 in_lr;
  
  uVar3 = 0;
  if (*(byte *)(param_1 + 0x18c) != 0) {
    do {
      uVar2 = (uint)*(byte *)(param_1 + 0x15c + uVar3);
      if (((((param_2 - (&DAT_0200265c)[uVar2 * 6]) + (uint)(ushort)(&DAT_02002658)[uVar2 * 0xc] <
             (uint)(ushort)(&DAT_02002658)[uVar2 * 0xc] << 1) &&
           ((param_3 - (&DAT_02002660)[uVar2 * 6]) + (uint)(ushort)(&DAT_0200265a)[uVar2 * 0xc] <
            (uint)(ushort)(&DAT_0200265a)[uVar2 * 0xc] << 1)) &&
          ((&DAT_0200265c)[uVar2 * 6] == (&DAT_02002664)[uVar2 * 6])) &&
         ((&DAT_02002660)[uVar2 * 6] != *(int *)(&DAT_02002668 + uVar2 * 0x18))) {
        uVar1 = 1;
        goto LAB_08028564;
      }
      uVar3 = uVar3 + 1 & 0xff;
    } while (uVar3 < *(byte *)(param_1 + 0x18c));
  }
  uVar1 = 0;
LAB_08028564:
  return CONCAT44(in_lr,uVar1);
}

