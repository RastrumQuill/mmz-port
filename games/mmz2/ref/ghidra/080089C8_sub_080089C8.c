// sub_080089C8 at 0x080089C8 (thumb)

undefined8 sub_080089C8(int *param_1)

{
  byte bVar1;
  int iVar2;
  sbyte *psVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  undefined4 in_lr;
  
  uVar4 = DAT_020011d0 & 0x7f;
  iVar2 = *(int *)(&DAT_0831408c + uVar4 * 4);
  psVar3 = *(sbyte **)(iVar2 + 0x6c);
  if (((uint)(byte)psVar3[2] <= (uint)(byte)(&DAT_0831348c)[*param_1 >> 0xc]) ||
     ((uint)(byte)psVar3[3] <= (uint)(byte)(&DAT_08312c8c)[param_1[1] >> 0xc])) goto LAB_08008af8;
  bVar1 = psVar3[((uint)(byte)(&DAT_08312c8c)[param_1[1] >> 0xc] << *psVar3) +
                 (uint)(byte)(&DAT_0831348c)[*param_1 >> 0xc] + 4];
  if (DAT_020017d4 >> 8 == uVar4) {
    if ((ushort)(bVar1 >> 4) != (DAT_020017d4 & 0xff)) {
LAB_08008a50:
      piVar7 = (int *)(&DAT_08732cb0 + uVar4 * 4);
      iVar6 = (uint)(bVar1 >> 4) * 0x14;
      sub_080027AC((undefined *)((int)piVar7 + iVar6 + *piVar7),0x4000);
      sub_08002AEC((undefined *)((int)piVar7 + iVar6 + *piVar7 + 0xc),0);
      DAT_020017d4 = (ushort)(bVar1 >> 4) | (ushort)(uVar4 << 8);
    }
  }
  else if (bVar1 >> 4 != 0xff) goto LAB_08008a50;
  uVar5 = bVar1 & 0xf;
  if (DAT_020017d6 >> 8 == uVar4) {
    if (uVar5 == (DAT_020017d6 & 0xff)) goto LAB_08008af8;
  }
  else if (uVar5 == 0xff) goto LAB_08008af8;
  piVar7 = (int *)(&DAT_08732cb0 + uVar4 * 4);
  uVar5 = bVar1 & 0xf;
  iVar6 = uVar5 * 0x14;
  sub_080027AC((undefined *)((int)piVar7 + iVar6 + *piVar7),0x4000);
  sub_08002AEC((undefined *)((int)piVar7 + iVar6 + *piVar7 + 0xc),0);
  DAT_020017d6 = (ushort)uVar5 | (ushort)(uVar4 << 8);
LAB_08008af8:
  return CONCAT44(in_lr,iVar2);
}

