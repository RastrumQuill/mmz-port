// sub_0811D1D4 at 0x0811D1D4 (thumb)

undefined8 sub_0811D1D4(uint param_1)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  uint uVar5;
  uint uVar6;
  undefined4 in_lr;
  
  uVar6 = param_1 & 0xff;
  uVar5 = 0;
  do {
    bVar1 = (&DAT_08869308)[uVar5 + uVar6 * 4];
    if (bVar1 != 0xff) {
      pbVar4 = (byte *)(DAT_0202eda8 + (uint)(bVar1 >> 1));
      bVar2 = *pbVar4;
      iVar3 = (bVar1 & 1) << 2;
      *pbVar4 = (byte)(((int)(uint)bVar2 >> iVar3 & 0xfU) - 1 << iVar3) |
                bVar2 & ~(byte)(0xf << iVar3);
    }
    uVar5 = uVar5 + 1 & 0xff;
  } while (uVar5 < 4);
  pbVar4 = (byte *)(DAT_0202edac + (uVar6 >> 2));
  bVar1 = *pbVar4;
  param_1 = param_1 & 3;
  if (((int)(bVar1 & 0xf) >> param_1 & 1U) == 0) {
    *pbVar4 = (byte)(1 << param_1) | bVar1;
  }
  if (uVar6 == 0x1b) {
    sub_0810888C(0x28);
  }
  else {
    pbVar4 = (byte *)(DAT_0202edac + (uVar6 >> 2));
    *pbVar4 = (byte)(0x10 << param_1) | *pbVar4;
  }
  return CONCAT44(in_lr,1);
}

