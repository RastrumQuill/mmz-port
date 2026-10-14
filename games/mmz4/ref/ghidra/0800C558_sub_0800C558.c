// sub_0800C558 at 0x0800C558 (thumb)

undefined4 sub_0800C558(int param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x68);
  iVar6 = *(int *)(param_1 + 0x6c);
  uVar8 = 0;
  uVar7 = 0;
  uVar5 = 0;
  do {
    iVar4 = (int)(*(ushort *)(param_1 + 0x70) + uVar5) >> 6;
    uVar7 = uVar7 + (int)*(short *)((int)&DAT_08128c10 +
                                   ((uint)((iVar4 + 0x40) * 0x1000000) >> 0x17));
    uVar8 = uVar8 + (int)*(short *)((int)&DAT_08128c10 + ((uint)(iVar4 << 0x18) >> 0x17));
    uVar5 = uVar5 + 1 & 0xff;
  } while (uVar5 < 0x40);
  sVar1 = sub_08128A24((uVar7 >> 6) << 8,0x100);
  DAT_02000a1c = sVar1;
  DAT_02000a1e = sub_08128A24((uVar8 >> 6) << 8,0x100);
  DAT_02000a20 = sub_08128A24((uVar8 >> 6) * -0x100,0x100);
  DAT_02000a22 = sVar1;
  iVar3 = *(int *)(param_1 + 0x34) * 0x100 - iVar3;
  iVar4 = iVar3 * DAT_02000a1c;
  if (iVar4 < 0) {
    iVar4 = iVar4 + 0xff;
  }
  iVar6 = *(int *)(param_1 + 0x38) * 0x100 - iVar6;
  iVar2 = iVar6 * DAT_02000a1e;
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xff;
  }
  DAT_02000a24 = (iVar4 >> 8) + (iVar2 >> 8) + *(int *)(param_1 + 0x74);
  iVar3 = iVar3 * DAT_02000a20;
  if (iVar3 < 0) {
    iVar3 = iVar3 + 0xff;
  }
  iVar6 = iVar6 * sVar1;
  if (iVar6 < 0) {
    iVar6 = iVar6 + 0xff;
  }
  DAT_02000a28 = (iVar3 >> 8) + (iVar6 >> 8) + *(int *)(param_1 + 0x78);
  return in_lr;
}

