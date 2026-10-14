// sub_0805791C at 0x0805791C (thumb)

undefined4 sub_0805791C(int param_1)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  sbyte *psVar4;
  int iVar5;
  undefined4 in_lr;
  sbyte local_18 [4];
  undefined4 uStack_4;
  
  iVar5 = 0;
  uVar3 = 0;
  pbVar2 = (byte *)(param_1 + 0xdc);
  bVar1 = *pbVar2;
  uStack_4 = in_lr;
  do {
    if (((int)(uint)bVar1 >> (uVar3 & 0xff) & 1U) != 0) {
      local_18[iVar5] = (sbyte)uVar3;
      iVar5 = iVar5 + 1;
    }
    uVar3 = uVar3 + 1;
  } while ((int)uVar3 < 4);
  uVar3 = DAT_0202f608 * 0x343fd + 0x269ec3;
  DAT_0202f608 = uVar3 & 0x7fffffff;
  iVar5 = sub_080FE4D8(uVar3 * 2 >> 0x11,iVar5);
  *(undefined *)(param_1 + 0xd) = 5;
  psVar4 = local_18 + iVar5;
  *(sbyte *)(param_1 + 0xf) = *psVar4;
  uVar3 = (1 << *psVar4 ^ 0xfU) & (uint)*pbVar2;
  *pbVar2 = (byte)uVar3;
  if (uVar3 == 0) {
    *pbVar2 = (byte)(1 << *psVar4) ^ 0xf;
  }
  return uStack_4;
}

