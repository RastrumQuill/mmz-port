// sub_08017D2C at 0x08017D2C (thumb)

undefined4 sub_08017D2C(byte param_1,ushort param_2)

{
  undefined4 *puVar1;
  undefined4 in_lr;
  
  DAT_020300dc = param_2 & 0xff;
  DAT_020300de = 0;
  DAT_020300f4 = 1;
  DAT_020300ec = 0x80000001;
  DAT_020300f0 = 0x7fffffff;
  DAT_020300e1 = 0xff;
  DAT_020300f6 = 0;
  DAT_020300f7 = 0;
  DAT_020300f8 = 0;
  DAT_020300fa = 0;
  DAT_020300f9 = 0;
  DAT_020300e0 = param_1;
  sub_08018908();
  puVar1 = &DAT_0202fe90;
  do {
    *puVar1 = 0xffffffff;
    puVar1 = puVar1 + -1;
  } while (0x202fe0f < (int)puVar1);
  DAT_020300e4 = *(undefined4 *)(&DAT_0834412c + (uint)param_1 * 4);
  DAT_020300e8 = *(undefined4 *)(&DAT_08344174 + (uint)param_1 * 4);
  return in_lr;
}

