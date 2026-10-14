// sub_0808DFD0 at 0x0808DFD0 (thumb)

undefined4 sub_0808DFD0(int param_1)

{
  byte bVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  ushort *puVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x28);
  bVar1 = *(byte *)(param_1 + 0x11);
  uVar10 = (uint)*(byte *)(param_1 + 0xd);
  if (*(char *)(param_1 + 0xf) == '\0') {
    if ((((*(short *)(param_1 + 0xb8) == 0xb0) && (*(short *)(&DAT_0885c618 + uVar10 * 2) == 0xb0))
        && (*(char *)(param_1 + 0x12) == '\0')) && ((&DAT_0885c62a)[uVar10] == '\0')) {
      sub_0808E6FC(param_1);
      sub_0801CF00(param_1,0x2c04);
      *(undefined *)(param_1 + 0x13) = 0;
    }
    else {
      sub_0808E764(param_1);
      sub_0801CF00(param_1,0x2c05);
      *(short *)(param_1 + 0xbc) =
           *(short *)(&DAT_0885c618 + uVar10 * 2) - *(short *)(param_1 + 0xb8);
      *(ushort *)(param_1 + 0xbe) =
           ((byte)(&DAT_0885c62a)[uVar10] + 0x80 & 0xff) - (*(byte *)(param_1 + 0x12) + 0x80 & 0xff)
      ;
      *(undefined *)(param_1 + 0x13) = 1;
    }
    *(uint *)(param_1 + 0xc0) =
         *(int *)(&DAT_0885c5d0 + uVar10 * 8) * ((uint)bVar1 * 2 + -1) - *(int *)(param_1 + 100);
    *(int *)(param_1 + 0x5c) = *(int *)(&DAT_0885c5d4 + uVar10 * 8) - *(int *)(param_1 + 0x68);
    iVar5 = (int)*(short *)(param_1 + 0xba);
    if (iVar5 == 0) {
      iVar5 = 1;
    }
    *(int *)(param_1 + 0x60) = iVar5;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  puVar7 = (ushort *)(param_1 + 0xba);
  if (*puVar7 != 0) {
    *puVar7 = *puVar7 - 1;
  }
  uVar8 = (uint)*puVar7;
  uVar6 = *(uint *)(param_1 + 0x60) & 0xffff;
  iVar9 = *(int *)(&DAT_0885c5d0 + uVar10 * 8);
  iVar12 = *(int *)(iVar4 + 0x54);
  iVar5 = FUN_081288bc(*(int *)(param_1 + 0xc0) * uVar8,uVar6);
  iVar5 = (iVar12 + iVar9 * ((uint)bVar1 * 2 + -1)) - iVar5;
  *(int *)(param_1 + 0x54) = iVar5;
  iVar11 = *(int *)(iVar4 + 0x58);
  iVar9 = *(int *)(&DAT_0885c5d4 + uVar10 * 8);
  iVar12 = FUN_081288bc(*(int *)(param_1 + 0x5c) * uVar8,uVar6);
  iVar12 = (iVar11 + iVar9) - iVar12;
  *(int *)(param_1 + 0x58) = iVar12;
  *(int *)(param_1 + 100) = iVar5 - *(int *)(iVar4 + 0x54);
  *(int *)(param_1 + 0x68) = iVar12 - *(int *)(iVar4 + 0x58);
  if (*(char *)(param_1 + 0x13) != '\0') {
    sVar3 = FUN_081288bc((int)*(short *)(param_1 + 0xbc) * uVar8,uVar6);
    sVar3 = *(short *)(&DAT_0885c618 + uVar10 * 2) - sVar3;
    *(short *)(param_1 + 0x50) = sVar3;
    *(short *)(param_1 + 0x52) = sVar3;
    *(short *)(param_1 + 0xb8) = sVar3;
    cVar2 = FUN_081288bc((int)*(short *)(param_1 + 0xbe) * uVar8,uVar6);
    cVar2 = (&DAT_0885c62a)[uVar10] - cVar2;
    *(char *)(param_1 + 0x24) = cVar2;
    *(char *)(param_1 + 0x12) = cVar2;
    if (((*(short *)(param_1 + 0xb8) == 0xb0) && (cVar2 == '\0')) && (uVar8 == 0)) {
      sub_0808E6FC(param_1);
      sub_0801CF00(param_1,0x2c04);
      *(undefined *)(param_1 + 0x13) = 0;
    }
  }
  sub_0801CFF0(param_1);
  return in_lr;
}

