// sub_0808E1D4 at 0x0808E1D4 (thumb)

undefined4 sub_0808E1D4(int param_1)

{
  byte bVar1;
  char cVar2;
  char cVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  short *psVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined4 in_lr;
  
  iVar5 = *(int *)(param_1 + 0x28);
  bVar1 = *(byte *)(param_1 + 0x11);
  uVar8 = (uint)*(byte *)(param_1 + 0xd);
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_0808E764(param_1);
    sub_0801CF00(param_1,0x2c05);
    *(uint *)(param_1 + 0xc0) =
         *(int *)(&DAT_0885c5d0 + uVar8 * 8) * ((uint)bVar1 * 2 + -1) - *(int *)(param_1 + 100);
    *(int *)(param_1 + 0x5c) = *(int *)(&DAT_0885c5d4 + uVar8 * 8) - *(int *)(param_1 + 0x68);
    *(short *)(param_1 + 0xbc) = *(short *)(&DAT_0885c618 + uVar8 * 2) - *(short *)(param_1 + 0xb8);
    *(ushort *)(param_1 + 0xbe) =
         ((byte)(&DAT_0885c62a)[uVar8] + 0x80 & 0xff) - (*(byte *)(param_1 + 0x12) + 0x80 & 0xff);
    iVar6 = (int)*(short *)(param_1 + 0xba);
    if (iVar6 == 0) {
      iVar6 = 1;
    }
    *(int *)(param_1 + 0x60) = iVar6;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(param_1);
  psVar9 = (short *)(param_1 + 0xba);
  if (*psVar9 != 0) {
    *psVar9 = *psVar9 + -1;
  }
  iVar6 = FUN_081288bc((int)*psVar9 << 6,*(undefined4 *)(param_1 + 0x60));
  uVar7 = (uint)*(ushort *)
                 ((int)&DAT_08128c10 +
                 (((uint)(*(ushort *)((int)&DAT_08128c10 + ((uint)(iVar6 << 0x18) >> 0x17)) >> 2) <<
                  0x18) >> 0x17));
  iVar10 = *(int *)(&DAT_0885c5d0 + uVar8 * 8);
  iVar12 = *(int *)(iVar5 + 0x54);
  iVar6 = FUN_081288bc(*(int *)(param_1 + 0xc0) * uVar7,0x100);
  iVar6 = (iVar12 + iVar10 * ((uint)bVar1 * 2 + -1)) - iVar6;
  *(int *)(param_1 + 0x54) = iVar6;
  iVar11 = *(int *)(iVar5 + 0x58);
  iVar10 = *(int *)(&DAT_0885c5d4 + uVar8 * 8);
  iVar12 = FUN_081288bc(*(int *)(param_1 + 0x5c) * uVar7,0x100);
  iVar12 = (iVar11 + iVar10) - iVar12;
  *(int *)(param_1 + 0x58) = iVar12;
  *(int *)(param_1 + 100) = iVar6 - *(int *)(iVar5 + 0x54);
  *(int *)(param_1 + 0x68) = iVar12 - *(int *)(iVar5 + 0x58);
  sVar4 = FUN_081288bc((int)*(short *)(param_1 + 0xbc) * uVar7,0x100);
  sVar4 = *(short *)(&DAT_0885c618 + uVar8 * 2) - sVar4;
  *(short *)(param_1 + 0x50) = sVar4;
  *(short *)(param_1 + 0x52) = sVar4;
  *(short *)(param_1 + 0xb8) = sVar4;
  cVar3 = FUN_081288bc((int)*(short *)(param_1 + 0xbe) * uVar7,0x100);
  cVar2 = (&DAT_0885c62a)[uVar8];
  *(char *)(param_1 + 0x24) = cVar2 - cVar3;
  *(char *)(param_1 + 0x12) = cVar2 - cVar3;
  return in_lr;
}

