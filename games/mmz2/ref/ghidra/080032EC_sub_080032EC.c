// sub_080032EC at 0x080032EC (thumb)

undefined8 sub_080032EC(ushort param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 in_lr;
  
  uVar2 = (uint)param_1;
  if (*(short *)(&DAT_08100a28 + uVar2 * 8) == 2) {
    if ((DAT_02000019 == '\0') || (DAT_02000019 == ')')) {
      DAT_02000019 = (char)param_1;
    }
  }
  else {
    if (uVar2 == 0) {
      iVar1 = 0;
      goto LAB_08003332;
    }
    sub_080EDB3C(uVar2);
  }
  iVar1 = (int)(short)param_1;
LAB_08003332:
  return CONCAT44(in_lr,iVar1);
}

