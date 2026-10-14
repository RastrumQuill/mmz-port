// sub_0800471C at 0x0800471C (thumb)

undefined8 sub_0800471C(ushort param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 in_lr;
  
  uVar2 = (uint)param_1;
  if (*(short *)(&DAT_0810bfec + uVar2 * 8) == 2) {
    if ((DAT_020002a2 == 0) || (DAT_020002a2 == 0x29)) {
      DAT_020002a2 = param_1;
    }
  }
  else {
    if (uVar2 == 0) {
      iVar1 = 0;
      goto LAB_08004762;
    }
    sub_080FCCE4(uVar2);
  }
  iVar1 = (int)(short)param_1;
LAB_08004762:
  return CONCAT44(in_lr,iVar1);
}

