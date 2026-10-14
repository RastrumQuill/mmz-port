// sub_08090174 at 0x08090174 (thumb)

undefined4 sub_08090174(int param_1)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined4 in_lr;
  
  iVar8 = *(int *)(param_1 + 0x28);
  bVar2 = *(byte *)(iVar8 + 10) >> 4;
  uVar6 = bVar2 & 1;
  bVar1 = *(byte *)(param_1 + 0xb7);
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_08005784(param_1 + 0x74,&DAT_0885cb50);
    bVar5 = *(byte *)(param_1 + 10);
    *(byte *)(param_1 + 10) = bVar5 | 1;
    if ((bVar2 & 1) == 0) {
      bVar5 = bVar5 & 0xef | 1;
    }
    else {
      bVar5 = bVar5 | 0x11;
    }
    *(byte *)(param_1 + 10) = bVar5;
    *(char *)(param_1 + 0x4c) = (char)uVar6;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar6 << 4);
    sub_0801CF00(param_1,0x3909);
    *(int *)(param_1 + 0x5c) =
         (int)*(short *)((int)&DAT_08128c10 + ((bVar1 + 0x40) * 0x1000000 >> 0x17)) << 6;
    *(int *)(param_1 + 0x60) = (int)(short)(&DAT_08128c10)[bVar1] << 6;
    *(undefined *)(param_1 + 0x12) = 0xc;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(param_1);
  if (*(char *)(param_1 + 0x12) != '\0') {
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
  }
  iVar3 = FUN_081288bc((uint)*(byte *)(param_1 + 0x12) << 6,0xc);
  uVar6 = (uint)*(ushort *)((int)&DAT_08128c10 + ((uint)(iVar3 << 0x18) >> 0x17));
  iVar7 = *(int *)(iVar8 + 0x54);
  iVar3 = FUN_081288bc(uVar6 * *(int *)(param_1 + 0x5c),0x100);
  if ((*(byte *)(iVar8 + 10) & 0x10) == 0) {
    iVar4 = -0x400;
  }
  else {
    iVar4 = 0x400;
  }
  *(int *)(param_1 + 0x54) = iVar7 + iVar3 + iVar4;
  iVar3 = FUN_081288bc(uVar6 * *(int *)(param_1 + 0x60),0x100);
  *(int *)(param_1 + 0x58) = *(int *)(iVar8 + 0x58) + iVar3 + -0x200;
  if (*(char *)(param_1 + 0x12) == '\0') {
    *(undefined *)(param_1 + 0xb6) = 1;
  }
  return in_lr;
}

