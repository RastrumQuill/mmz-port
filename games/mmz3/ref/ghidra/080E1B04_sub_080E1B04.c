// sub_080E1B04 at 0x080E1B04 (thumb)

undefined4 sub_080E1B04(int param_1)

{
  byte bVar1;
  char cVar2;
  ushort uVar3;
  byte *pbVar4;
  ushort *puVar5;
  int iVar6;
  undefined4 in_lr;
  
  iVar6 = *(int *)(param_1 + 0xbc);
  if (*(char *)(param_1 + 0x10) == '\0') {
    *(short *)(iVar6 + 0xb8) = *(short *)(iVar6 + 0xb8) + 3;
    cVar2 = sub_080259BC(iVar6);
    uVar3 = 4;
    if (cVar2 != '\0') {
      uVar3 = 8;
    }
  }
  else {
    *(short *)(iVar6 + 0xb8) = *(short *)(iVar6 + 0xb8) + 5;
    uVar3 = sub_08025A04(iVar6);
    uVar3 = uVar3 & 0xff;
  }
  bVar1 = *(byte *)(DAT_02030160 + 0x4c);
  if (bVar1 < 99) {
    *(byte *)(DAT_02030160 + 0x4c) = bVar1 + 1;
  }
  pbVar4 = (byte *)(DAT_0203063c + (uint)*(byte *)(iVar6 + 0x121));
  *pbVar4 = *pbVar4 | 2;
  puVar5 = (ushort *)(iVar6 + 0xa4);
  *puVar5 = *puVar5 + uVar3;
  uVar3 = sub_08025A04(iVar6);
  if ((short)(uVar3 & 0xff) < (short)*puVar5) {
    uVar3 = sub_08025A04(iVar6);
    *puVar5 = uVar3 & 0xff;
  }
  *(undefined4 *)(param_1 + 0xc) = 2;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0836e24c)[*(byte *)(param_1 + 9)] + 8);
  sub_080E19E8(param_1);
  return in_lr;
}

