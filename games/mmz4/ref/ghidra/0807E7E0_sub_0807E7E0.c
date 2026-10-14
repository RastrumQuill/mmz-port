// sub_0807E7E0 at 0x0807E7E0 (thumb)

undefined4 sub_0807E7E0(int param_1,byte param_2)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  undefined4 in_lr;
  
  uVar4 = (uint)param_2;
  uVar3 = *(uint *)(&DAT_0885a128 + uVar4 * 4);
  if ((uVar4 == 0) || (uVar4 == 0x14)) {
    bVar1 = *(byte *)(param_1 + 10) & 0xfe;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 1;
  }
  *(byte *)(param_1 + 10) = bVar1;
  pbVar2 = (byte *)(param_1 + 0xbc);
  if (*pbVar2 == 0xff) {
    sub_0801CF00(param_1,uVar3 & 0xffff);
  }
  else if (((uVar3 != 0xb402) && (uVar3 != 0xb414)) ||
          (uVar3 != *(uint *)(&DAT_0885a128 + (uint)*pbVar2 * 4))) {
    sub_0801CF00(param_1,uVar3 & 0xffff);
  }
  *pbVar2 = param_2;
  return in_lr;
}

