// sub_08036CF8 at 0x08036CF8 (thumb)

undefined4 sub_08036CF8(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  sub_0800561C(param_1 + 0x74,&DAT_082ad7fc);
  *(undefined2 *)(param_1 + 0xe) = 1;
  sub_08038A5C(param_1,0);
  uVar1 = DAT_02022890 * 0x343fd + 0x269ec3;
  DAT_02022890 = uVar1 & 0x7fffffff;
  *(char *)(param_1 + 0x12) = (char)((int)((uVar1 * 2 >> 0x11 & 3) + 1) >> 1) * '\x02' + '\x04';
  sub_08036D50(param_1);
  return in_lr;
}

