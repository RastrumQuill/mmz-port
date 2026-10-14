// sub_080ABD68 at 0x080ABD68 (thumb)

undefined4 sub_080ABD68(int param_1)

{
  byte bVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  int iVar10;
  int *piVar11;
  undefined4 in_lr;
  int local_bc;
  undefined auStack_b8 [124];
  int local_3c;
  int local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  undefined *local_28;
  int local_24;
  undefined4 uStack_4;
  
  piVar9 = &local_bc;
  iVar10 = *(int *)(param_1 + 8);
  DAT_02000a5a = 0xa0;
  local_3c = (*(int *)(iVar10 + 0x54) + 0x7800) - DAT_0202ea30;
  local_38 = (*(int *)(iVar10 + 0x58) + 0x5000) - DAT_0202ea34;
  bVar1 = *(byte *)(iVar10 + 0xbd);
  local_34 = (uint)*(ushort *)(iVar10 + 0xc0);
  local_30 = (uint)*(ushort *)(iVar10 + 0xc2);
  DAT_02000a50 = DAT_02000a50 | 0x4000;
  DAT_02000a5d = 0xfd;
  DAT_02000a5e = 0xff;
  iVar10 = 0;
  local_28 = auStack_b8;
  local_2c = (bVar1 + 0x40) * 0x1000000 >> 0x17;
  piVar11 = &DAT_0885f778;
  uStack_4 = in_lr;
  do {
    local_24 = iVar10 << 3;
    iVar4 = local_34 * *piVar11;
    if (iVar4 < 0) {
      iVar4 = iVar4 + 0xff;
    }
    iVar5 = local_30 * piVar11[1];
    if (iVar5 < 0) {
      iVar5 = iVar5 + 0xff;
    }
    sVar2 = *(short *)((int)&DAT_08128c10 + local_2c);
    iVar6 = (int)sVar2 * (iVar4 >> 8);
    if (iVar6 < 0) {
      iVar6 = iVar6 + 0xff;
    }
    sVar3 = (&DAT_08128c10)[bVar1];
    iVar7 = (int)sVar3 * (iVar5 >> 8);
    if (iVar7 < 0) {
      iVar7 = iVar7 + 0xff;
    }
    *piVar9 = local_3c + ((iVar6 >> 8) - (iVar7 >> 8));
    piVar8 = (int *)(local_28 + local_24);
    iVar4 = (int)sVar3 * (iVar4 >> 8);
    if (iVar4 < 0) {
      iVar4 = iVar4 + 0xff;
    }
    iVar5 = (int)sVar2 * (iVar5 >> 8);
    if (iVar5 < 0) {
      iVar5 = iVar5 + 0xff;
    }
    *piVar8 = local_38 + (iVar4 >> 8) + (iVar5 >> 8);
    *piVar9 = *piVar9 >> 8;
    *piVar8 = *piVar8 >> 8;
    piVar9 = piVar9 + 2;
    piVar11 = piVar11 + 2;
    iVar10 = iVar10 + 1;
  } while (iVar10 < 6);
  iVar10 = sub_08000A70(0x140);
  if (iVar10 != 0) {
    sub_08000AB4(0,iVar10,0x140);
    sub_080ABF84(iVar10,&local_bc,6,0);
    DAT_03001708 = 0x4000042;
    DAT_0300170c = 0xa2600001;
    DAT_03001704 = iVar10;
  }
  return uStack_4;
}

