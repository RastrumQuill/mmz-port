// sub_0802795C at 0x0802795C (thumb)

undefined4 sub_0802795C(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  undefined4 in_lr;
  
  puVar4 = (uint *)(param_1 + 0x144);
  uVar3 = *puVar4;
  uVar1 = uVar3 >> 0x10;
  if (uVar3 != 0) {
    if ((uVar3 & 8) == 0) {
      if ((uVar3 & 1) == 0) {
        uVar1 = 0x40 - uVar1;
      }
      if ((uVar3 & 4) == 0) {
        DAT_03002ec2 = (char)(uVar1 >> 1);
        iVar2 = 0x20000;
      }
      else {
        DAT_03002ec2 = '@' - (char)(uVar1 >> 1);
        iVar2 = 0x10000;
      }
      DAT_03002ec0 = DAT_03002ec2;
      DAT_03002ec1 = DAT_03002ec2;
      *puVar4 = uVar3 + iVar2;
      if (0x400005 < *(uint *)(param_1 + 0x144)) {
        *(uint *)(param_1 + 0x144) = 0;
      }
    }
    else {
      DAT_03002ec2 = ' ';
      DAT_03002ec1 = ' ';
      DAT_03002ec0 = ' ';
      uVar3 = uVar3 + 0x30000;
      *puVar4 = uVar3;
      if (0x400000 < uVar3) {
        if ((uVar3 & 1) == 0) {
          sub_08002B10(0xb3);
          DAT_03002ec2 = '\0';
          DAT_03002ec1 = '\0';
          DAT_03002ec0 = '\0';
        }
        *puVar4 = 0;
        DAT_02000a50 = DAT_02000a50 & 0xdfff;
      }
    }
  }
  return in_lr;
}

