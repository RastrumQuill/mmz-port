// sub_08028574 at 0x08028574 (thumb)

undefined8 sub_08028574(int param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 in_lr;
  
  uVar2 = 0;
  if (*(byte *)(param_1 + 0x18c) != 0) {
    do {
      uVar1 = (uint)*(byte *)(param_1 + 0x15c + uVar2);
      if (((param_2 - (&DAT_0200265c)[uVar1 * 6]) + (uint)(ushort)(&DAT_02002658)[uVar1 * 0xc] <
           (uint)(ushort)(&DAT_02002658)[uVar1 * 0xc] << 1) &&
         ((param_3 - (&DAT_02002660)[uVar1 * 6]) + (uint)(ushort)(&DAT_0200265a)[uVar1 * 0xc] <
          (uint)(ushort)(&DAT_0200265a)[uVar1 * 0xc] << 1)) {
        uVar2 = (uint)(ushort)(&DAT_02002656)[uVar1 * 0xc];
        goto LAB_08028604;
      }
      uVar2 = uVar2 + 1 & 0xff;
    } while (uVar2 < *(byte *)(param_1 + 0x18c));
  }
  uVar2 = 0;
LAB_08028604:
  return CONCAT44(in_lr,uVar2);
}

