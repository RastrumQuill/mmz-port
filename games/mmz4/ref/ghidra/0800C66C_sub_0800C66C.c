// sub_0800C66C at 0x0800C66C (thumb)

undefined8 sub_0800C66C(int param_1,int param_2)

{
  uint uVar1;
  undefined4 in_lr;
  
  if ((param_1 < 0xf0000) && (param_2 - 0x14000U < 0x14000)) {
    if ((&DAT_02001290)[(uint)DAT_02001290 * (param_2 + 0x5a000 >> 0xc) + (param_1 >> 0xc) + 2] != 1
       ) {
      uVar1 = -(uint)((&DAT_02001290)
                      [(uint)DAT_02001290 * (param_2 + 0x5a000 >> 0xc) + (param_1 >> 0xc) + 2] ^
                     (&DAT_02001290)[(uint)DAT_02001290 * (param_2 >> 0xc) + (param_1 >> 0xc) + 2])
              >> 0x1f;
      goto LAB_0800c6d2;
    }
  }
  uVar1 = 0;
LAB_0800c6d2:
  return CONCAT44(in_lr,uVar1);
}

