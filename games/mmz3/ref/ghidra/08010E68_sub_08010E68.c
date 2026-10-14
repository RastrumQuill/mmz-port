// sub_08010E68 at 0x08010E68 (thumb)

undefined8 sub_08010E68(int param_1,int param_2)

{
  uint uVar1;
  undefined4 in_lr;
  
  if ((param_1 < 0xf0000) && (param_2 - 0x14000U < 0x14000)) {
    uVar1 = (uint)(&DAT_02002c60)
                  [(uint)DAT_02002c60 * (param_2 + 0x1e000 >> 0xc) + (param_1 >> 0xc) + 2];
  }
  else {
    uVar1 = 0;
  }
  return CONCAT44(in_lr,uVar1);
}

