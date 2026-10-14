// sub_0801E878 at 0x0801E878 (thumb)

undefined4 sub_0801E878(ushort param_1,int param_2)

{
  undefined4 in_lr;
  
  DAT_0202e8b0 = param_1 & 0xff;
  sub_081284E4(param_2,&DAT_0202e8b4,8);
  sub_081284E8(param_2 + 0x20,&DAT_0202e8d4,0x4000001);
  DAT_0202e8c5 = DAT_0202e8c5 & 0xfe;
  DAT_0202e8b8 = DAT_0202e8b8 & 0x1f;
  DAT_0202e8b9 = DAT_0202e8b9 & 0xf8;
  DAT_0202e8d5 = 0;
  return in_lr;
}

