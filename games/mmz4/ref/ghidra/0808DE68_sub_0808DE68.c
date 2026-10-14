// sub_0808DE68 at 0x0808DE68 (thumb)

undefined4 sub_0808DE68(int param_1)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  undefined2 uVar4;
  int iVar5;
  ushort *puVar6;
  int iVar7;
  undefined4 in_lr;
  
  iVar5 = *(int *)(param_1 + 0x28);
  bVar1 = *(byte *)(param_1 + 0x11);
  if (*(char *)(param_1 + 0xf) == '\0') {
    *(undefined *)(param_1 + 0x12) = *(undefined *)(param_1 + 0xb9);
    *(undefined *)(param_1 + 0x13) = *(undefined *)(param_1 + 0xba);
    iVar7 = (uint)*(byte *)(param_1 + 0xd) * 2;
    *(undefined *)(param_1 + 0xb9) = (&DAT_0885c5bc)[iVar7];
    *(undefined *)(param_1 + 0xba) = (&DAT_0885c5bd)[iVar7];
    iVar7 = (int)*(short *)(param_1 + 0xbc);
    if (iVar7 == 0) {
      iVar7 = 1;
    }
    *(int *)(param_1 + 0xc0) = iVar7;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(param_1);
  puVar6 = (ushort *)(param_1 + 0xbc);
  if (*puVar6 != 0) {
    *puVar6 = *puVar6 - 1;
  }
  uVar3 = *puVar6;
  uVar4 = *(undefined2 *)(param_1 + 0xc0);
  bVar2 = *(byte *)(param_1 + 0xb9);
  iVar7 = FUN_081288bc((uint)uVar3 *
                       ((bVar2 + 0x80 & 0xff) - (*(byte *)(param_1 + 0x12) + 0x80 & 0xff)),uVar4);
  *(uint *)(param_1 + 0x54) =
       *(int *)(iVar5 + 0x54) +
       ((uint)bVar1 * 2 + -1) *
       (*(short *)((int)&DAT_08128c10 + (((uint)bVar2 - iVar7) * 0x1000000 + 0x40000000 >> 0x17)) *
        4 + 0x3600);
  bVar1 = *(byte *)(param_1 + 0xba);
  iVar7 = FUN_081288bc((uint)uVar3 *
                       ((bVar1 + 0x40 & 0xff) - (*(byte *)(param_1 + 0x13) + 0x40 & 0xff)),uVar4);
  *(int *)(param_1 + 0x58) =
       *(int *)(iVar5 + 0x58) + 0xc00 +
       *(short *)((int)&DAT_08128c10 + (((uint)bVar1 - iVar7) * 0x1000000 >> 0x17)) * 6;
  return in_lr;
}

