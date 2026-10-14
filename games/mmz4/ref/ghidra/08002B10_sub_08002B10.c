// sub_08002B10 at 0x08002B10 (thumb)

undefined8 sub_08002B10(ushort param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 in_lr;
  
  uVar2 = (uint)param_1;
  if (*(short *)(&DAT_08138910 + uVar2 * 8) == 2) {
    if ((DAT_02000022 == 0) || (DAT_02000022 == 0x29)) {
      DAT_02000022 = param_1;
    }
  }
  else {
    if (uVar2 == 0) {
      iVar1 = 0;
      goto LAB_08002b56;
    }
    sub_081270B8(uVar2);
  }
  iVar1 = (int)(short)param_1;
LAB_08002b56:
  return CONCAT44(in_lr,iVar1);
}

