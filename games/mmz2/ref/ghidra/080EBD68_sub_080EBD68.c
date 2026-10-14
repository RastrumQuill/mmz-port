// sub_080EBD68 at 0x080EBD68 (thumb)

undefined4 sub_080EBD68(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = *(short *)(param_1 + 6) + -1;
  *(short *)(param_1 + 6) = (short)iVar1;
  if (iVar1 == 0) {
    *(undefined *)(param_1 + 1) = 1;
    *(undefined *)(param_1 + 2) = 0;
    *(undefined *)(param_1 + 3) = 0;
    *(short *)(param_1 + 4) = (short)iVar1;
    DAT_03002ec2 = ' ';
    DAT_03002ec1 = ' ';
    DAT_03002ec0 = ' ';
    sub_080EBE00(param_1);
  }
  else {
    DAT_03002ec0 = ('\x10' - (char)iVar1) * '\x02';
    param_1 = param_1 + 0xbb4;
    DAT_03002ec1 = DAT_03002ec0;
    DAT_03002ec2 = DAT_03002ec0;
    sub_08004AF4(param_1);
    sub_0801218C(DAT_0202f094,param_1);
    sub_08004AA4(param_1);
  }
  return in_lr;
}

