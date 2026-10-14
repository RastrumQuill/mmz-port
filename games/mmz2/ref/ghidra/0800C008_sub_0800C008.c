// sub_0800C008 at 0x0800C008 (thumb)

undefined4 sub_0800C008(void)

{
  uint uVar1;
  undefined4 in_lr;
  
  uVar1 = 0;
  do {
    *(undefined2 *)(&DAT_0202e020 + (uVar1 & 1) * 2 + ((int)uVar1 >> 1) * 4) = 0;
    uVar1 = uVar1 + 1;
  } while ((int)uVar1 < 7);
  DAT_0202e030._0_1_ = 1;
  DAT_0202e034 = 0;
  DAT_0202e030._2_1_ = 0;
  DAT_0202e01c = 0;
  sub_0800860C(0xe3,0xb7,&DAT_083184e8);
  return in_lr;
}

