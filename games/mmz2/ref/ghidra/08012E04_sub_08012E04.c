// sub_08012E04 at 0x08012E04 (thumb)

undefined4 sub_08012E04(byte param_1,ushort param_2)

{
  undefined4 *puVar1;
  undefined4 in_lr;
  
  DAT_0202eb9c = param_2 & 0xff;
  DAT_0202eb9e = 0;
  DAT_0202ebac = 1;
  DAT_0202eba1 = 0xff;
  DAT_0202ebae = 0;
  DAT_0202ebaf = 0;
  DAT_0202eba0 = param_1;
  sub_0801365C();
  puVar1 = &DAT_0202ea10;
  do {
    *puVar1 = 0xffffffff;
    puVar1 = puVar1 + -1;
  } while (0x202e98f < (int)puVar1);
  DAT_0202eba4 = *(undefined4 *)(&DAT_083214e0 + (uint)param_1 * 4);
  DAT_0202eba8 = *(undefined4 *)(&DAT_08321528 + (uint)param_1 * 4);
  return in_lr;
}

