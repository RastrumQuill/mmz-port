// sub_080EAAB8 at 0x080EAAB8 (thumb)

undefined4 sub_080EAAB8(ushort *param_1,uint param_2,uint param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined4 in_lr;
  
  if ((DAT_0202ebb4 & 2) == 0) {
    puVar2 = &DAT_0835e710;
  }
  else {
    puVar2 = &DAT_0835e708;
  }
  iVar1 = (param_2 & 0xff) * 2;
  *param_1 = (ushort)(byte)puVar2[iVar1 + 1] * 0x20 + (ushort)(byte)puVar2[iVar1] & 0x3ff |
             (ushort)((param_3 & 0xf) << 0xc);
  return in_lr;
}

