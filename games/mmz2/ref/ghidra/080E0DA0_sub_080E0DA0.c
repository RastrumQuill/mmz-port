// sub_080E0DA0 at 0x080E0DA0 (thumb)

undefined4 sub_080E0DA0(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 6) == '\0') {
    *(undefined *)(param_1 + 0x234) = 0x20;
    *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
  }
  else if (*(char *)(param_1 + 6) != '\x01') {
    return in_lr;
  }
  DAT_03002ec0 = *(char *)(param_1 + 0x234) + -1;
  *(char *)(param_1 + 0x234) = DAT_03002ec0;
  DAT_03002ec1 = DAT_03002ec0;
  DAT_03002ec2 = DAT_03002ec0;
  if (DAT_03002ec0 == '\0') {
    sub_08002F2C();
    sub_080028DC(&DAT_0202f8f8,(DAT_02000f94 & 0x1f00) << 3,0x580,0x3c0);
    sub_080DFBC0(&DAT_0202f680,1);
    sub_0800115C(0x800051d);
  }
  return in_lr;
}

