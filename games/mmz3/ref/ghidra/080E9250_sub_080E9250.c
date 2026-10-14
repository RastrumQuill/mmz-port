// sub_080E9250 at 0x080E9250 (thumb)

undefined4 sub_080E9250(void)

{
  undefined4 in_lr;
  
  sub_080FE110(&DAT_08102954,(DAT_020023c4 & 0xc) * 0x1000 + 0x6007800,0x200);
  sub_080FE110(&DAT_080fed34,&DAT_03002ac0,8);
  DAT_02030be8 = 0;
  DAT_02030bea = 0x1e;
  DAT_02030be9 = 0;
  DAT_02030beb = 0x16;
  sub_080E92C4();
  return in_lr;
}

