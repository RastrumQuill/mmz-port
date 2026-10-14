// sub_08009704 at 0x08009704 (thumb)

undefined8 sub_08009704(int *param_1)

{
  byte bVar1;
  int iVar2;
  sbyte *psVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  undefined4 in_lr;
  
  uVar4 = DAT_02002650 & 0x7f;
  iVar2 = *(int *)(&DAT_08336ac0 + uVar4 * 4);
  psVar3 = *(sbyte **)(iVar2 + 0x6c);
  if (((uint)(byte)psVar3[2] <= (uint)(byte)(&DAT_08335ec0)[*param_1 >> 0xc]) ||
     ((uint)(byte)psVar3[3] <= (uint)(byte)(&DAT_083356c0)[param_1[1] >> 0xc])) goto LAB_08009834;
  bVar1 = psVar3[((uint)(byte)(&DAT_083356c0)[param_1[1] >> 0xc] << *psVar3) +
                 (uint)(byte)(&DAT_08335ec0)[*param_1 >> 0xc] + 4];
  if (DAT_02002c54 >> 8 == uVar4) {
    if ((ushort)(bVar1 >> 4) != (DAT_02002c54 & 0xff)) {
LAB_0800978c:
      piVar7 = (int *)(&DAT_087044b0 + uVar4 * 4);
      iVar6 = (uint)(bVar1 >> 4) * 0x14;
      sub_08003AB0((undefined *)((int)piVar7 + iVar6 + *piVar7),0x4000);
      sub_08003E14((undefined *)((int)piVar7 + iVar6 + *piVar7 + 0xc),0);
      DAT_02002c54 = (ushort)(bVar1 >> 4) | (ushort)(uVar4 << 8);
    }
  }
  else if (bVar1 >> 4 != 0xff) goto LAB_0800978c;
  uVar5 = bVar1 & 0xf;
  if (DAT_02002c56 >> 8 == uVar4) {
    if (uVar5 == (DAT_02002c56 & 0xff)) goto LAB_08009834;
  }
  else if (uVar5 == 0xff) goto LAB_08009834;
  piVar7 = (int *)(&DAT_087044b0 + uVar4 * 4);
  uVar5 = bVar1 & 0xf;
  iVar6 = uVar5 * 0x14;
  sub_08003AB0((undefined *)((int)piVar7 + iVar6 + *piVar7),0x4000);
  sub_08003E14((undefined *)((int)piVar7 + iVar6 + *piVar7 + 0xc),0);
  DAT_02002c56 = (ushort)uVar5 | (ushort)(uVar4 << 8);
LAB_08009834:
  return CONCAT44(in_lr,iVar2);
}

