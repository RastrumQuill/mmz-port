// sub_08006AF4 at 0x08006AF4 (thumb)

undefined8 sub_08006AF4(int param_1,int param_2)

{
  uint uVar1;
  undefined4 in_lr;
  
  if ((((param_1 < 0) || (param_2 < 0)) || (0x770fff < param_1)) || (0x4f5fff < param_2)) {
    uVar1 = 0xf;
  }
  else {
    uVar1 = (uint)((byte)(&DAT_082921ec)
                         [(uint)(byte)(&DAT_082915ec)[param_1 >> 0xc] +
                          (uint)(byte)(&DAT_08290dec)[param_2 >> 0xc] * 0x80] >> 4);
  }
  return CONCAT44(in_lr,uVar1);
}

