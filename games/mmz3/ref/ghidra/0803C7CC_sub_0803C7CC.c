// sub_0803C7CC at 0x0803C7CC (thumb)

undefined4 sub_0803C7CC(int param_1)

{
  short sVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  byte bVar5;
  uint uVar6;
  byte *pbVar7;
  uint uVar8;
  int iVar9;
  undefined4 in_lr;
  
  iVar9 = *(int *)(param_1 + 0xb4);
  sub_0801749C(param_1);
  sub_080176EC(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
  sub_08017700(param_1,*(undefined2 *)(&DAT_0835dea0 + (uint)*(byte *)(param_1 + 0x10) * 2));
  bVar5 = *(byte *)(param_1 + 10);
  *(byte *)(param_1 + 10) = bVar5 | 1;
  bVar2 = *(byte *)(iVar9 + 10) >> 4;
  uVar6 = bVar2 & 1;
  if ((bVar2 & 1) == 0) {
    bVar5 = bVar5 & 0xef | 1;
  }
  else {
    bVar5 = bVar5 | 0x11;
  }
  *(byte *)(param_1 + 10) = bVar5;
  *(undefined *)(param_1 + 0x4c) = (char)uVar6;
  pbVar7 = (byte *)(param_1 + 0x4a);
  *pbVar7 = *pbVar7 & 0xef | (byte)(uVar6 << 4);
  if ((*(char *)(param_1 + 0x10) == '\0') || (*(char *)(param_1 + 0x10) == '\x03')) {
    bVar5 = *(byte *)(iVar9 + 10);
    if ((bVar5 & 0x10) == 0) {
      uVar8 = 0x80;
      uVar6 = (uint)*(byte *)(param_1 + 0x10);
    }
    else {
      uVar8 = 0;
      uVar6 = (uint)*(byte *)(param_1 + 0x10);
    }
  }
  else {
    uVar6 = (uint)*(byte *)(param_1 + 0x10);
    uVar8 = (uint)(byte)(&DAT_0835de9c)[uVar6];
    bVar5 = *(byte *)(iVar9 + 10);
  }
  if ((bVar5 & 0x10) == 0) {
    iVar3 = *(int *)(iVar9 + 0x54) + (char)(&DAT_0835de94)[uVar6] * 0x100;
  }
  else {
    iVar3 = *(int *)(iVar9 + 0x54) + (char)(&DAT_0835de94)[uVar6] * -0x100;
  }
  *(int *)(param_1 + 0x54) = iVar3;
  *(int *)(param_1 + 0x58) =
       *(int *)(iVar9 + 0x58) + (char)(&DAT_0835de98)[*(byte *)(iVar9 + 0x10)] * 0x100;
  iVar3 = (int)*(short *)((int)&DAT_080fe64c + ((uVar8 + 0x40) * 0x1000000 >> 0x17));
  *(int *)(param_1 + 0x5c) = iVar3 * 4;
  if (*(char *)(param_1 + 0x10) == '\x03') {
    *(int *)(param_1 + 0x5c) = iVar3 * -4;
    uVar6 = ~(uint)(*(byte *)(iVar9 + 10) >> 4) & 1;
    if (uVar6 == 0) {
      bVar5 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar5 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar5;
    *(undefined *)(param_1 + 0x4c) = (char)uVar6;
    *pbVar7 = *pbVar7 & 0xef | (byte)(uVar6 << 4);
  }
  sVar1 = (&DAT_080fe64c)[uVar8];
  *(int *)(param_1 + 0x60) = sVar1 * 4;
  uVar4 = FUN_080fe2f8(*(undefined4 *)(param_1 + 0x5c),0x1a);
  *(undefined4 *)(param_1 + 100) = uVar4;
  uVar4 = FUN_080fe2f8(sVar1 * 4,0x1a);
  *(undefined4 *)(param_1 + 0x68) = uVar4;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0835b5d0)[*(byte *)(param_1 + 9)] + 4);
  sub_0803C960(param_1);
  return in_lr;
}

