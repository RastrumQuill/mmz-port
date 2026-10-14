// sub_080E0D34 at 0x080E0D34 (thumb)

undefined4 sub_080E0D34(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 6) == '\0') {
    *(undefined *)(param_1 + 0x234) = 0x20;
    *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
  }
  else if (*(char *)(param_1 + 6) != '\x01') {
    return in_lr;
  }
  cVar1 = *(char *)(param_1 + 0x234);
  DAT_03002ec2 = cVar1 + -1;
  *(char *)(param_1 + 0x234) = DAT_03002ec2;
  DAT_03002ec0 = cVar1 + -1;
  DAT_03002ec1 = DAT_03002ec0;
  if (DAT_03002ec2 == '\0') {
    *(undefined *)(param_1 + 5) = 1;
    *(undefined *)(param_1 + 6) = 0;
    *(undefined *)(param_1 + 7) = 0;
  }
  return in_lr;
}

