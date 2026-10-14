// sub_0810CE60 at 0x0810CE60 (thumb)

undefined4 sub_0810CE60(void)

{
  undefined4 in_lr;
  
  sub_081284E4(&DAT_0812da70,(DAT_02000a04 & 0xc) * 0x1000 + 0x6007800,0x200);
  sub_081284E4(&DAT_08129e50,&DAT_03002ac0,8);
  DAT_0202f358 = 0;
  DAT_0202f35a = 0x1e;
  DAT_0202f359 = 0;
  DAT_0202f35b = 0x16;
  sub_0810CED4();
  return in_lr;
}

