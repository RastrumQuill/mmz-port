// sub_08010000 at 0x08010000 (thumb)

undefined4 sub_08010000(void)

{
  uint uVar1;
  undefined4 in_lr;
  
  uVar1 = 0;
  do {
    (&DAT_0202e020)[(uVar1 & 1) + ((int)uVar1 >> 1) * 4] = 0;
    uVar1 = uVar1 + 1;
  } while ((int)uVar1 < 8);
  DAT_0202e030._0_2_ = 1;
  DAT_0202e038 = 0;
  DAT_0202e03c = 0;
  DAT_0202e03d = 0;
  DAT_0202e03e = 0x100;
  DAT_0202e040 = 0x16800;
  DAT_0202e044 = 0xc000;
  DAT_0202e034._0_1_ = 0;
  sub_08002D68(0x92,0);
  return in_lr;
}

