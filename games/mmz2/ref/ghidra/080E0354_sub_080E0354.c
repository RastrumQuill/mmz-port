// sub_080E0354 at 0x080E0354 (thumb)

undefined8 sub_080E0354(int param_1)

{
  byte bVar1;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0x5e3);
  if (0x20 < bVar1) {
    DAT_03002ec0 = bVar1 - 1;
    *(byte *)(param_1 + 0x5e3) = DAT_03002ec0;
    DAT_03002ec1 = DAT_03002ec0;
    DAT_03002ec2 = DAT_03002ec0;
  }
  return CONCAT44(in_lr,(uint)(0x20 >= bVar1));
}

