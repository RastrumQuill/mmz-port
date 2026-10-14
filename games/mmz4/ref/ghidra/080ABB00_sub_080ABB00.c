// sub_080ABB00 at 0x080ABB00 (thumb)

undefined4 sub_080ABB00(int param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  int *piVar9;
  int *piVar10;
  undefined4 in_lr;
  int local_c0 [32];
  int local_40;
  int local_3c;
  int local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  int local_24;
  undefined4 uStack_4;
  
  piVar10 = local_c0;
  piVar9 = local_c0;
  iVar8 = *(int *)(param_1 + 8);
  DAT_02000a5a = 0xa0;
  local_40 = (*(int *)(iVar8 + 0x54) + 0x7800) - DAT_0202ea30;
  local_3c = (*(int *)(iVar8 + 0x58) + 0x5000) - DAT_0202ea34;
  uVar7 = (uint)*(byte *)(iVar8 + 0xbd);
  local_34 = (uint)*(ushort *)(iVar8 + 0xc0);
  local_30 = (uint)*(ushort *)(iVar8 + 0xc2);
  uStack_4 = in_lr;
  if ((*(byte *)(iVar8 + 0xbe) & 1) == 0) {
    DAT_02000a5d = 0x30;
    local_38 = 4;
    iVar8 = 0;
    local_28 = (uVar7 + 0x40) * 0x1000000 >> 0x17;
    piVar10 = &DAT_0885f7a8;
    do {
      iVar2 = local_34 * *piVar10;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 0xff;
      }
      iVar3 = local_30 * piVar10[1];
      if (iVar3 < 0) {
        iVar3 = iVar3 + 0xff;
      }
      local_24 = (int)*(short *)((int)&DAT_08128c10 + local_28);
      iVar4 = (int)*(short *)((int)&DAT_08128c10 + local_28) * (iVar2 >> 8);
      if (iVar4 < 0) {
        iVar4 = iVar4 + 0xff;
      }
      sVar1 = (&DAT_08128c10)[uVar7];
      iVar5 = (int)sVar1 * (iVar3 >> 8);
      if (iVar5 < 0) {
        iVar5 = iVar5 + 0xff;
      }
      *piVar9 = local_40 + ((iVar4 >> 8) - (iVar5 >> 8));
      piVar6 = local_c0 + iVar8 * 2 + 1;
      iVar2 = (int)sVar1 * (iVar2 >> 8);
      if (iVar2 < 0) {
        iVar2 = iVar2 + 0xff;
      }
      iVar3 = local_24 * (iVar3 >> 8);
      if (iVar3 < 0) {
        iVar3 = iVar3 + 0xff;
      }
      *piVar6 = local_3c + (iVar2 >> 8) + (iVar3 >> 8);
      *piVar9 = *piVar9 >> 8;
      *piVar6 = *piVar6 >> 8;
      piVar9 = piVar9 + 2;
      piVar10 = piVar10 + 2;
      iVar8 = iVar8 + 1;
    } while (iVar8 < local_38);
  }
  else {
    DAT_02000a5d = 0xfd;
    local_38 = 6;
    iVar8 = 0;
    local_2c = (uVar7 + 0x40) * 0x1000000 >> 0x17;
    piVar9 = &DAT_0885f778;
    do {
      iVar2 = local_34 * *piVar9;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 0xff;
      }
      iVar3 = local_30 * piVar9[1];
      if (iVar3 < 0) {
        iVar3 = iVar3 + 0xff;
      }
      local_24 = (int)*(short *)((int)&DAT_08128c10 + local_2c);
      iVar4 = (int)*(short *)((int)&DAT_08128c10 + local_2c) * (iVar2 >> 8);
      if (iVar4 < 0) {
        iVar4 = iVar4 + 0xff;
      }
      sVar1 = (&DAT_08128c10)[uVar7];
      iVar5 = (int)sVar1 * (iVar3 >> 8);
      if (iVar5 < 0) {
        iVar5 = iVar5 + 0xff;
      }
      *piVar10 = local_40 + ((iVar4 >> 8) - (iVar5 >> 8));
      piVar6 = local_c0 + iVar8 * 2 + 1;
      iVar2 = (int)sVar1 * (iVar2 >> 8);
      if (iVar2 < 0) {
        iVar2 = iVar2 + 0xff;
      }
      iVar3 = local_24 * (iVar3 >> 8);
      if (iVar3 < 0) {
        iVar3 = iVar3 + 0xff;
      }
      *piVar6 = local_3c + (iVar2 >> 8) + (iVar3 >> 8);
      *piVar10 = *piVar10 >> 8;
      *piVar6 = *piVar6 >> 8;
      piVar10 = piVar10 + 2;
      piVar9 = piVar9 + 2;
      iVar8 = iVar8 + 1;
    } while (iVar8 < local_38);
  }
  DAT_02000a5e = 0xff;
  DAT_02000a50 = DAT_02000a50 | 0x4000;
  iVar8 = sub_08000A70(0x140);
  if (iVar8 != 0) {
    sub_08000AB4(0,iVar8,0x140);
    sub_080ABF84(iVar8,local_c0,local_38,0);
    DAT_03001708 = 0x4000042;
    DAT_0300170c = 0xa2600001;
    DAT_03001704 = iVar8;
  }
  return uStack_4;
}

