// sub_0809E16C at 0x0809E16C (thumb)

undefined8 sub_0809E16C(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_08005458(DAT_02023118);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 9) = 4;
    *(undefined4 *)(iVar1 + 0x14) = 0x809e1e9;
    *(ushort *)(iVar1 + 0x1c) = DAT_02023178;
    *(byte *)(iVar1 + 0x1e) = DAT_02023124;
    *(undefined4 *)(iVar1 + 0x4c) = param_1;
    *(undefined4 *)(iVar1 + 0x50) = param_2;
    sub_080014E8(&DAT_08510050,(DAT_02023178 - 0x318) * 0x20 + 0x10000);
    sub_0800179C(&DAT_0851005c,(DAT_02023124 - 9) * 0x20 + 0x200);
  }
  return CONCAT44(in_lr,iVar1);
}

