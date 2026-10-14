// sub_08007830 at 0x08007830 (thumb)

undefined8 sub_08007830(int *param_1)

{
  byte bVar1;
  int iVar2;
  sbyte *psVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  undefined4 in_lr;
  
  uVar6 = DAT_02000c80 & 0x7f;
  iVar2 = *(int *)(&DAT_08829090 + (uint)(DAT_0202cac0 >> 4) * 4 + uVar6 * 8);
  psVar3 = *(sbyte **)(iVar2 + 0x6c);
  if (((uint)(byte)psVar3[2] <= (uint)(byte)(&DAT_08828490)[*param_1 >> 0xc]) ||
     ((uint)(byte)psVar3[3] <= (uint)(byte)(&DAT_08827c90)[param_1[1] >> 0xc])) goto LAB_0800796c;
  bVar1 = psVar3[((uint)(byte)(&DAT_08827c90)[param_1[1] >> 0xc] << *psVar3) +
                 (uint)(byte)(&DAT_08828490)[*param_1 >> 0xc] + 4];
  if (DAT_02001284 >> 8 == uVar6) {
    if ((ushort)(bVar1 >> 4) != (DAT_02001284 & 0xff)) {
LAB_080078c4:
      piVar7 = (int *)(&DAT_08df2000 + uVar6 * 4);
      iVar5 = (uint)(bVar1 >> 4) * 0x14;
      sub_08001EA4((undefined *)((int)piVar7 + iVar5 + *piVar7),0x4000);
      sub_08002208((undefined *)((int)piVar7 + iVar5 + *piVar7 + 0xc),0);
      DAT_02001284 = (ushort)(bVar1 >> 4) | (ushort)(uVar6 << 8);
    }
  }
  else if (bVar1 >> 4 != 0xff) goto LAB_080078c4;
  uVar4 = bVar1 & 0xf;
  if (DAT_02001286 >> 8 == uVar6) {
    if (uVar4 == (DAT_02001286 & 0xff)) goto LAB_0800796c;
  }
  else if (uVar4 == 0xff) goto LAB_0800796c;
  piVar7 = (int *)(&DAT_08df2000 + uVar6 * 4);
  uVar4 = bVar1 & 0xf;
  iVar5 = uVar4 * 0x14;
  sub_08001EA4((undefined *)((int)piVar7 + iVar5 + *piVar7),0x4000);
  sub_08002208((undefined *)((int)piVar7 + iVar5 + *piVar7 + 0xc),0);
  DAT_02001286 = (ushort)uVar4 | (ushort)(uVar6 << 8);
LAB_0800796c:
  return CONCAT44(in_lr,iVar2);
}

