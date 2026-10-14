// sub_0801A69C at 0x0801A69C (thumb)

undefined4 sub_0801A69C(void)

{
  undefined4 in_lr;
  
  if (((DAT_02002134 & 8) != 0) && ((DAT_020301a8 & 0x80) != 0)) {
    if (DAT_020301a3 != -1) {
      DAT_020301a2 = DAT_020301a3;
    }
    sub_08032504(DAT_0203734c,&DAT_02037300);
    DAT_03002ec2 = 0;
    DAT_03002ec1 = 0;
    DAT_03002ec0 = 0;
    sub_080EDB10(&DAT_02030ea0,0xf00);
  }
  return in_lr;
}

