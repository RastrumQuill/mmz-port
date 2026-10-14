// sub_080ECD68 at 0x080ECD68 (thumb)

undefined4 sub_080ECD68(int param_1)

{
  ushort uVar1;
  char cVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  int iVar6;
  ushort *puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  ushort *puVar11;
  undefined4 in_lr;
  
  iVar6 = sub_080DD070(*(undefined4 *)(param_1 + 0x75b8),*(undefined *)(param_1 + 0xdde));
  iVar6 = ((uint)(iVar6 << 0x10) >> 0x18) * 0x14;
  puVar7 = (ushort *)(&DAT_08432d0c + iVar6 + *(int *)(&DAT_08432d0c + iVar6));
  puVar11 = (ushort *)0x3002d80;
  iVar6 = 0xf;
  do {
    iVar6 = iVar6 + -1;
    puVar7 = puVar7 + 1;
    puVar11 = puVar11 + 1;
    uVar1 = *puVar7;
    uVar9 = uVar1 >> 5 & 0x1f;
    uVar8 = uVar1 >> 10 & 0x1f;
    uVar10 = (uint)*(byte *)(param_1 + 0xde8);
    sVar3 = sub_080EF2B8(uVar10 * (0x1f - (uVar1 & 0x1f)),0x30);
    sVar4 = sub_080EF2B8(uVar10 * (0x1f - uVar9),0x30);
    sVar5 = sub_080EF2B8(uVar10 * (0x1f - uVar8),0x30);
    *puVar11 = ((short)uVar9 + sVar4) * 0x20 | (short)(uVar1 & 0x1f) + sVar3 |
               ((short)uVar8 + sVar5) * 0x400;
  } while (iVar6 != 0);
  iVar6 = uVar10 - 0x18;
  if (-1 < iVar6) {
    if (iVar6 == 0) {
      DAT_03002ec2 = ' ';
      DAT_03002ec0 = DAT_03002ec2;
      DAT_03002ec1 = DAT_03002ec2;
    }
    else {
      cVar2 = sub_080EF150(iVar6 * 0x20,0x18);
      DAT_03002ec0 = cVar2 + ' ';
      DAT_03002ec1 = DAT_03002ec0;
      DAT_03002ec2 = DAT_03002ec0;
    }
  }
  return in_lr;
}

