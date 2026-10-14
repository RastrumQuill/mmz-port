// sub_0808FF84 at 0x0808FF84 (thumb)

undefined4 sub_0808FF84(int param_1)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x28);
  bVar2 = *(byte *)(iVar3 + 10) >> 4;
  uVar7 = bVar2 & 1;
  bVar1 = *(byte *)(param_1 + 0xb7);
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_08005784(param_1 + 0x74,&DAT_0885cb50);
    bVar6 = *(byte *)(param_1 + 10);
    *(byte *)(param_1 + 10) = bVar6 | 1;
    if ((bVar2 & 1) == 0) {
      bVar6 = bVar6 & 0xef | 1;
    }
    else {
      bVar6 = bVar6 | 0x11;
    }
    *(byte *)(param_1 + 10) = bVar6;
    *(char *)(param_1 + 0x4c) = (char)uVar7;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar7 << 4);
    sub_0801CF00(param_1,0x3907);
    *(int *)(param_1 + 0x5c) =
         (int)*(short *)((int)&DAT_08128c10 + ((bVar1 + 0x40) * 0x1000000 >> 0x17)) << 6;
    *(int *)(param_1 + 0x60) = (int)(short)(&DAT_08128c10)[bVar1] << 6;
    *(undefined *)(param_1 + 0x12) = 0x14;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  if (*(char *)(param_1 + 0x12) == '\x04') {
    sub_0801CF00(param_1,0x3908);
  }
  sub_0801CFF0(param_1);
  if (*(char *)(param_1 + 0x12) != '\0') {
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
  }
  iVar4 = FUN_081288bc((uint)*(byte *)(param_1 + 0x12) << 6,0x14);
  uVar7 = (uint)*(ushort *)((int)&DAT_08128c10 + ((uint)(iVar4 << 0x18) >> 0x17));
  iVar9 = *(int *)(iVar3 + 0x54);
  iVar8 = *(int *)(param_1 + 0x5c);
  iVar4 = FUN_081288bc(uVar7 * iVar8,0x100);
  if ((*(byte *)(iVar3 + 10) & 0x10) == 0) {
    iVar5 = -0x400;
  }
  else {
    iVar5 = 0x400;
  }
  *(int *)(param_1 + 0x54) = (iVar9 + iVar8 + iVar5) - iVar4;
  iVar4 = *(int *)(param_1 + 0x60);
  iVar8 = *(int *)(iVar3 + 0x58);
  iVar3 = FUN_081288bc(uVar7 * iVar4,0x100);
  *(int *)(param_1 + 0x58) = (iVar8 + iVar4 + -0x200) - iVar3;
  if ((*(char *)(param_1 + 0x12) == '\0') && (*(char *)(param_1 + 0x73) == '\x03')) {
    *(undefined *)(param_1 + 0xe) = 1;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

