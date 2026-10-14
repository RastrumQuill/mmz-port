// sub_080E0804 at 0x080E0804 (thumb)

undefined4 sub_080E0804(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 5) == '\0') {
    DAT_03002ec2 = 0x20;
    DAT_03002ec1 = 0x20;
    DAT_03002ec0 = 0x20;
    sub_08002C18();
    DAT_02000fd0 = 0;
    DAT_02000fec._2_1_ = 0xff;
    DAT_02000ff0 = 0;
    DAT_02000fe0 = DAT_02000fd0;
    DAT_03002ac0 = DAT_02000ff0;
    sub_080DE1BC();
    DAT_02000f90 = DAT_02000f90 & 0xf0f8 | 0x100;
    sub_08001098(1);
    sub_08001064(1,0x80e0e3d);
    *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
  }
  else if (*(char *)(param_1 + 5) != '\x01') {
    return in_lr;
  }
  if (DAT_03002a80 == '\x01') {
    sub_080DFBC0(&DAT_0202f680,1);
    sub_0800115C(0x800051d);
  }
  return in_lr;
}

