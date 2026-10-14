// sub_0801978C at 0x0801978C (thumb)

undefined4 sub_0801978C(ushort param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 in_lr;
  
  DAT_02030100 = param_1 & 0xff;
  sub_080FE110(param_2,&DAT_02030104,0x10);
  FUN_080fe114(param_2 + 0x40,&DAT_02030144,0x4000005);
  DAT_02030104 = DAT_02030104 & 0xef;
  DAT_02030108 = DAT_02030108 & 0x81;
  DAT_0203010a = DAT_0203010a & 0xfd;
  uVar2 = 0x1d;
  do {
    (&DAT_0203010c)[(short)uVar2] = 0;
    uVar1 = (int)(short)uVar2 + 1;
    uVar2 = uVar1 & 0xffff;
  } while ((int)(uVar1 * 0x10000) >> 0x10 < 0x46);
  DAT_02030154 = 0;
  return in_lr;
}

