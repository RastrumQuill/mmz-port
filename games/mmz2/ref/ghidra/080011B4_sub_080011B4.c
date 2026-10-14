// sub_080011B4 at 0x080011B4 (thumb)

undefined4 sub_080011B4(int param_1)

{
  byte bVar1;
  undefined4 in_lr;
  
  bVar1 = (&DAT_03002a68)[param_1 * 0x18];
  if ((bVar1 != 1) && ((bVar1 & 8) != 0)) {
    (&DAT_03002a68)[param_1 * 0x18] = bVar1 & 0xf7;
  }
  return in_lr;
}

