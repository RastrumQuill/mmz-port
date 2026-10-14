// sub_080E0394 at 0x080E0394 (thumb)

undefined8 sub_080E0394(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  cVar1 = *(char *)(param_1 + 0x5e3);
  if (cVar1 != '\0') {
    DAT_03002ec0 = cVar1 + -1;
    *(char *)(param_1 + 0x5e3) = DAT_03002ec0;
    DAT_03002ec1 = DAT_03002ec0;
    DAT_03002ec2 = DAT_03002ec0;
  }
  return CONCAT44(in_lr,(uint)(cVar1 == '\0'));
}

