// sub_0801D530 at 0x0801D530 (thumb)

undefined4 sub_0801D530(byte param_1,ushort param_2)

{
  undefined4 *puVar1;
  undefined4 in_lr;
  
  DAT_0202e88c = param_2 & 0xff;
  DAT_0202e88e = 0;
  DAT_0202e8a4 = 1;
  DAT_0202e89c = 0x80000001;
  DAT_0202e8a0 = 0x7fffffff;
  DAT_0202e891 = 0xff;
  DAT_0202e8a6 = 0;
  DAT_0202e890 = param_1;
  sub_0801E17C();
  puVar1 = &DAT_0202e4c0;
  do {
    *puVar1 = 0xffffffff;
    puVar1 = puVar1 + -1;
  } while (0x202e43f < (int)puVar1);
  DAT_0202e894 = *(undefined4 *)(&DAT_08839464 + (uint)param_1 * 4);
  DAT_0202e898 = *(undefined4 *)(&DAT_088394ac + (uint)param_1 * 4);
  return in_lr;
}

