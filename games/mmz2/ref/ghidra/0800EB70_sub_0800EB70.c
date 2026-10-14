// sub_0800EB70 at 0x0800EB70 (thumb)

undefined4 sub_0800EB70(void)

{
  uint uVar1;
  undefined4 in_lr;
  
  if ((*(uint *)(DAT_0202ebf0 + 0x14) & 0x200) != 0) {
    sub_080086AC(0x18,7,0x7b);
  }
  uVar1 = 0;
  do {
    *(undefined2 *)(&DAT_0202e020 + (uVar1 & 1) * 2 + ((int)uVar1 >> 1) * 4) = 0;
    uVar1 = uVar1 + 1;
  } while ((int)uVar1 < 7);
  DAT_0202e030._0_1_ = 1;
  DAT_0202e030._2_1_ = 0;
  DAT_0202e030._3_1_ = 0;
  return in_lr;
}

