// sub_080EC800 at 0x080EC800 (thumb)

undefined4 sub_080EC800(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = *(short *)(param_1 + 6) + -1;
  *(short *)(param_1 + 6) = (short)iVar1;
  DAT_03002ec0 = (char)iVar1 * '\x02';
  DAT_03002ec1 = DAT_03002ec0;
  DAT_03002ec2 = DAT_03002ec0;
  if (iVar1 == 0) {
    if ((DAT_0202ebb5 & 0x40) == 0) {
      sub_080E0E64(param_1,0x40030400);
    }
    else {
      sub_080E0E64(param_1,0x40010400);
    }
    sub_08002EF0(0x90);
  }
  else {
    param_1 = param_1 + 0xbb4;
    sub_08004AF4(param_1);
    sub_0801218C(DAT_0202f094,param_1);
    sub_08004AA4(param_1);
  }
  return in_lr;
}

