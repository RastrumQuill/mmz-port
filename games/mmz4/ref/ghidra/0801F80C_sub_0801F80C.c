// sub_0801F80C at 0x0801F80C (thumb)

undefined4 sub_0801F80C(void)

{
  undefined4 in_lr;
  
  if (((DAT_02000764 & 8) != 0) && ((DAT_0202e918 & 0x80) != 0)) {
    if (DAT_0202e913 != -1) {
      DAT_0202e912 = DAT_0202e913;
    }
    sub_08038318(DAT_020359b8,&DAT_02035958);
    DAT_03002ec2 = 0;
    DAT_03002ec1 = 0;
    DAT_03002ec0 = 0;
    sub_08112080(&DAT_0202f610,0xf00);
  }
  return in_lr;
}

