// sub_08028418 at 0x08028418 (thumb)

undefined8 sub_08028418(int param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 in_lr;
  
  uVar2 = 0;
  if (*(char *)(param_1 + 0x18c) != '\0') {
    do {
      uVar1 = (uint)*(byte *)(param_1 + 0x15c + uVar2);
      if (((param_2 - (&DAT_02002664)[uVar1 * 6]) + (uint)(ushort)(&DAT_02002658)[uVar1 * 0xc] <
           (uint)(ushort)(&DAT_02002658)[uVar1 * 0xc] << 1) &&
         ((param_3 - *(int *)(&DAT_02002668 + uVar1 * 0x18)) +
          (uint)(ushort)(&DAT_0200265a)[uVar1 * 0xc] <
          (uint)(ushort)(&DAT_0200265a)[uVar1 * 0xc] << 1)) {
        sub_080287B4(param_1,(&DAT_02002654)[uVar1 * 0xc]);
        uVar2 = (uint)(ushort)(&DAT_02002656)[uVar1 * 0xc];
        goto LAB_080284b4;
      }
      uVar2 = uVar2 + 1 & 0xff;
    } while (uVar2 < *(byte *)(param_1 + 0x18c));
  }
  uVar2 = 0;
LAB_080284b4:
  return CONCAT44(in_lr,uVar2);
}

