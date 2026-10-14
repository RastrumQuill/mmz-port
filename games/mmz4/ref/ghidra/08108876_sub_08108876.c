// sub_08108876 at 0x08108876 (thumb)

void sub_08108876(uint param_1)

{
  uint uVar1;
  byte *pbVar2;
  uint uVar3;
  uint unaff_r5;
  int *unaff_r6;
  code *UNRECOVERED_JUMPTABLE;
  
  while (uVar3 = param_1 >> 0x18, uVar3 < 0x33) {
    pbVar2 = (byte *)(*unaff_r6 + (param_1 >> 0x19));
    uVar1 = (uVar3 & unaff_r5) << 2;
    *pbVar2 = (byte)(9 << (uVar1 & 0xff)) | *pbVar2 & ~(byte)(0xf << (uVar1 & 0xff));
    param_1 = (uVar3 + 1) * 0x1000000;
  }
                    /* WARNING: Could not recover jumptable at 0x08108882. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}

