// sub_0811D2B0 at 0x0811D2B0 (thumb)

undefined8 sub_0811D2B0(uint param_1)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 in_lr;
  byte local_20 [4];
  
  local_20[3] = 0xff;
  local_20[2] = 0xff;
  local_20[1] = 0xff;
  local_20[0] = 0xff;
  uVar7 = 1;
  uVar6 = 0;
  do {
    bVar1 = (&DAT_08869308)[uVar6 + (param_1 & 0xff) * 4];
    if (bVar1 != 0xff) {
      pbVar5 = (byte *)(DAT_0202eda8 + (uint)(bVar1 >> 1));
      bVar2 = *pbVar5;
      iVar4 = (bVar1 & 1) << 2;
      uVar3 = (int)(uint)bVar2 >> iVar4 & 0xf;
      if (uVar3 == 0) {
        uVar7 = 0;
        break;
      }
      *pbVar5 = (byte)(uVar3 - 1 << iVar4) | bVar2 & ~(byte)(0xf << iVar4);
      local_20[uVar6] = bVar1;
    }
    uVar6 = uVar6 + 1 & 0xff;
  } while (uVar6 < 4);
  uVar6 = 0;
  do {
    bVar1 = local_20[uVar6];
    if (bVar1 != 0xff) {
      pbVar5 = (byte *)(DAT_0202eda8 + (uint)(bVar1 >> 1));
      bVar2 = *pbVar5;
      iVar4 = (bVar1 & 1) << 2;
      *pbVar5 = (byte)(((int)(uint)bVar2 >> iVar4 & 0xfU) + 1 << iVar4) |
                bVar2 & ~(byte)(0xf << iVar4);
    }
    uVar6 = uVar6 + 1 & 0xff;
  } while (uVar6 < 4);
  return CONCAT44(in_lr,uVar7);
}

