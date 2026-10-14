// sub_0800D754 at 0x0800D754 (thumb)

undefined8 sub_0800D754(int param_1,int param_2)

{
  uint uVar1;
  undefined4 in_lr;
  
  if (param_2 - 0x1e000U < 0x1e000) {
    uVar1 = -(uint)((&DAT_02002c60)[(param_2 >> 0xc) * (uint)DAT_02002c60 + (param_1 >> 0xc) + 2] ^
                   (&DAT_02002c60)
                   [(uint)DAT_02002c60 * (param_2 + 0x32000 >> 0xc) + (param_1 >> 0xc) + 2]) >> 0x1f
    ;
  }
  else {
    uVar1 = 0;
  }
  return CONCAT44(in_lr,uVar1);
}

