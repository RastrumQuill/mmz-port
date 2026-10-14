// sub_0800E41C at 0x0800E41C (thumb)

undefined8 sub_0800E41C(int param_1,int param_2)

{
  uint uVar1;
  undefined4 in_lr;
  
  if (param_2 < 0x50000) {
    uVar1 = (uint)(&DAT_02002c60)
                  [(uint)DAT_02002c60 * (param_2 + 0x64000 >> 0xc) + (param_1 >> 0xc) + 2];
  }
  else {
    uVar1 = 0;
  }
  return CONCAT44(in_lr,uVar1);
}

