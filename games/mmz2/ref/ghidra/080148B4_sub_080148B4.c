// sub_080148B4 at 0x080148B4 (thumb)

undefined4 sub_080148B4(uint param_1,ushort param_2)

{
  undefined4 in_lr;
  
  param_1 = param_1 & 0xff;
  DAT_0202ec32 = param_2 & 0xff;
  DAT_0202ec30 = (undefined2)param_1;
  DAT_0202ec3a = 0;
  sub_080141A4(param_1,&DAT_02036bb4);
  if ((*(uint *)(DAT_0202ebf0 + 0x14) & 1 << (&DAT_08326164)[param_1]) == 0) {
    DAT_02036b44 = DAT_02036b44 & 0xef;
  }
  else {
    DAT_02036b44 = DAT_02036b44 | 0x10;
  }
  sub_08013FFC(param_1,&DAT_02036b44);
  sub_08014104(&DAT_02036b7c);
  return in_lr;
}

