// sub_080E162C at 0x080E162C (thumb)

undefined8 sub_080E162C(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (((*(ushort *)(param_1 + 0x216) & 0x8000) == 0) && ((DAT_02002650 & 0x7f) != 0x11)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return CONCAT44(in_lr,uVar1);
}

