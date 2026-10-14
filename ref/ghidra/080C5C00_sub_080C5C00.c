// sub_080C5C00 at 0x080C5C00 (thumb)

undefined4 sub_080C5C00(int param_1)

{
  ushort uVar1;
  char cVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  uint uVar6;
  ushort *puVar7;
  uint uVar8;
  uint uVar9;
  ushort *puVar10;
  int iVar11;
  undefined4 in_lr;
  
  uVar6 = sub_080BB5FC(&DAT_0202b5a0,*(undefined *)(param_1 + 0x9ea));
  puVar7 = (ushort *)
           ((int)(&DAT_0853200c + (uVar6 & 0xffff) * 0x14) +
           *(int *)(&DAT_0853200c + (uVar6 & 0xffff) * 0x14));
  puVar10 = (ushort *)0x3001a60;
  iVar11 = 0xf;
  do {
    iVar11 = iVar11 + -1;
    puVar7 = puVar7 + 1;
    puVar10 = puVar10 + 1;
    uVar1 = *puVar7;
    uVar8 = uVar1 >> 5 & 0x1f;
    uVar6 = uVar1 >> 10 & 0x1f;
    uVar9 = (uint)*(byte *)(param_1 + 0x9f4);
    sVar3 = sub_080C8C38(uVar9 * (0x1f - (uVar1 & 0x1f)),0x30);
    sVar4 = sub_080C8C38(uVar9 * (0x1f - uVar8),0x30);
    sVar5 = sub_080C8C38(uVar9 * (0x1f - uVar6),0x30);
    *puVar10 = ((short)uVar8 + sVar4) * 0x20 | (short)(uVar1 & 0x1f) + sVar3 |
               ((short)uVar6 + sVar5) * 0x400;
  } while (iVar11 != 0);
  iVar11 = uVar9 - 0x18;
  if (-1 < iVar11) {
    if (iVar11 == 0) {
      DAT_03001ba2 = ' ';
      DAT_03001ba0 = DAT_03001ba2;
      DAT_03001ba1 = DAT_03001ba2;
    }
    else {
      cVar2 = sub_080C8AD0(iVar11 * 0x20,0x18);
      DAT_03001ba0 = cVar2 + ' ';
      DAT_03001ba1 = DAT_03001ba0;
      DAT_03001ba2 = DAT_03001ba0;
    }
  }
  return in_lr;
}

