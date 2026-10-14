// sub_08006AA4 at 0x08006AA4 (thumb)

undefined8 sub_08006AA4(int param_1,int param_2)

{
  uint uVar1;
  undefined4 in_lr;
  
  param_2 = param_2 >> 0xc;
  if ((((uint)(param_1 >> 0xc) < 0x771) && (-1 < param_2)) && (param_2 < 0x4f6)) {
    uVar1 = (byte)(&DAT_082921ec)
                  [(uint)(byte)(&DAT_082915ec)[param_1 >> 0xc] +
                   (uint)(byte)(&DAT_08290dec)[param_2] * 0x80] & 0xf;
  }
  else {
    uVar1 = 0;
  }
  return CONCAT44(in_lr,uVar1);
}

