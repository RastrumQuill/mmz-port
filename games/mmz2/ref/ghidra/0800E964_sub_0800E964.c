// sub_0800E964 at 0x0800E964 (thumb)

undefined8 sub_0800E964(int param_1,int param_2)

{
  uint uVar1;
  undefined4 in_lr;
  
  if (param_2 - 0x14000U < 0x1e000) {
    uVar1 = (uint)(&DAT_020017e0)
                  [(uint)DAT_020017e0 * (param_2 + 0x32000 >> 0xc) + (param_1 >> 0xc) + 2];
  }
  else {
    uVar1 = 0;
  }
  return CONCAT44(in_lr,uVar1);
}

