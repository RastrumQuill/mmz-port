// sub_080E7ED0 at 0x080E7ED0 (thumb)

undefined4 sub_080E7ED0(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = *(short *)(param_1 + 6) + -1;
  *(short *)(param_1 + 6) = (short)iVar1;
  if (iVar1 == 0) {
    *(undefined *)(param_1 + 1) = 1;
    *(undefined *)(param_1 + 2) = 0;
    DAT_03002ec2 = ' ';
    DAT_03002ec1 = ' ';
    DAT_03002ec0 = ' ';
    sub_080E7F6C(param_1);
  }
  else {
    DAT_03002ec0 = ('\x10' - (char)iVar1) * '\x02';
    DAT_03002ec1 = DAT_03002ec0;
    DAT_03002ec2 = DAT_03002ec0;
    sub_080E8768(param_1,0,0xffffffff);
    param_1 = param_1 + 0xbb4;
    sub_08004AF4(param_1);
    sub_0801218C(DAT_0202f094,param_1);
    sub_08004AA4(param_1);
  }
  return in_lr;
}

