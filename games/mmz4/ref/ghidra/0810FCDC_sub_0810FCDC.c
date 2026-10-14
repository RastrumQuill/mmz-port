// sub_0810FCDC at 0x0810FCDC (thumb)

undefined4 sub_0810FCDC(int param_1)

{
  undefined4 in_lr;
  
  sub_0800201C();
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
  sub_0810CE60();
  DAT_02000a00 = DAT_02000a00 & 0xf0f8;
  *(undefined *)(param_1 + 5) = 1;
  *(undefined *)(param_1 + 6) = 0;
  *(undefined *)(param_1 + 7) = 0;
  return in_lr;
}

