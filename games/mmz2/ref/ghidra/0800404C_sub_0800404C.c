// sub_0800404C at 0x0800404C (thumb)

undefined4 sub_0800404C(void)

{
  short sVar1;
  short sVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  ushort *puVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  undefined4 in_lr;
  int local_30;
  int local_24;
  
  sub_08002638(&DAT_0839147c,0x10000);
  sub_08002AEC(&DAT_08391488,0x200);
  local_30 = 1;
  do {
    puVar6 = (ushort *)(&DAT_03002cc0 + local_30 * 2);
    uVar9 = *puVar6 & 0x1f;
    uVar3 = (uint)*puVar6 << 0x10;
    uVar7 = uVar3 >> 0x15 & 0x1f;
    uVar3 = uVar3 >> 0x1a & 0x1f;
    iVar10 = 0;
    iVar8 = local_30 + 1;
    do {
      sVar1 = sub_080EF150(iVar10 * (uVar9 - 0xe),9);
      iVar4 = sub_080EF150(iVar10 * (uVar7 - 5),9);
      sVar2 = sub_080EF150(iVar10 * (uVar3 - 10),9);
      *puVar6 = (sVar2 + 10) * 0x400 | (ushort)((iVar4 + 5U & 0xff) << 5) | sVar1 + 0xeU & 0xff;
      puVar6 = puVar6 + 0x10;
      iVar10 = iVar10 + 1;
    } while (iVar10 < 10);
    iVar10 = 10;
    puVar6 = (ushort *)(local_30 * 2 + 0x3002e00);
    local_24 = 0;
    do {
      sVar1 = sub_080EF150((iVar10 + -10) * (0x1f - uVar9),5);
      iVar4 = sub_080EF150((iVar10 + -10) * (0x1f - uVar7),5);
      iVar5 = sub_080EF150(local_24,5);
      *puVar6 = (ushort)((iVar5 + uVar3) * 0x1000000 >> 0xe) | (ushort)((iVar4 + uVar7 & 0xff) << 5)
                | sVar1 + (short)uVar9 & 0xffU;
      puVar6 = puVar6 + 0x10;
      local_24 = local_24 + (0x1f - uVar3);
      iVar10 = iVar10 + 1;
    } while (iVar10 < 0x10);
    local_30 = iVar8;
  } while (iVar8 < 0x10);
  return in_lr;
}

