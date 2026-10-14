// sub_080E0AC4 at 0x080E0AC4 (thumb)

undefined4 sub_080E0AC4(int param_1)

{
  char cVar1;
  uint uVar2;
  undefined4 in_lr;
  
  uVar2 = (uint)*(byte *)(param_1 + 6);
  if (uVar2 == 0) {
    DAT_02000f90 = DAT_02000f90 & 0xf0ff | 0x1300;
    DAT_02000fa0 = uVar2;
    *(undefined *)(param_1 + 0x234) = 0;
    *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
  }
  else if (uVar2 != 1) {
    return in_lr;
  }
  cVar1 = *(char *)(param_1 + 0x234);
  DAT_03002ec2 = cVar1 + '\x01';
  *(char *)(param_1 + 0x234) = DAT_03002ec2;
  DAT_03002ec0 = cVar1 + '\x01';
  DAT_03002ec1 = DAT_03002ec0;
  if (DAT_03002ec2 == ' ') {
    *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
    *(undefined *)(param_1 + 6) = 0;
    *(undefined *)(param_1 + 7) = 0;
  }
  return in_lr;
}

