// sub_08114470 at 0x08114470 (thumb)

undefined4 sub_08114470(undefined4 param_1)

{
  undefined4 in_lr;
  
  DAT_03002ec2 = 0x20;
  DAT_03002ec1 = 0x20;
  DAT_03002ec0 = 0x20;
  DAT_03002ec8 = 0;
  sub_08002348();
  DAT_02000a40 = 0;
  DAT_02000a50 = 0;
  DAT_02000a5e = 0xff;
  DAT_02000a60 = 0;
  DAT_03002ac0 = 0;
  DAT_02000a00 = DAT_02000a00 & 0xf0f8;
  sub_08112080(param_1,0x300);
  return in_lr;
}

