// sub_0800FD74 at 0x0800FD74 (thumb)

undefined4 sub_0800FD74(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  ushort *puVar5;
  undefined4 in_lr;
  short local_24;
  
  iVar1 = DAT_0202e028;
  iVar3 = DAT_0202e024;
  uVar2 = *(uint *)(param_1 + 0x5c) & 0xffff;
  if (*(ushort *)(param_1 + 0x10) != (ushort)DAT_0202e020) {
    *(undefined *)(param_1 + 0xe) = 0;
  }
  if (*(char *)(param_1 + 0xe) == '\0') {
    puVar5 = &DAT_02000f94 + ((*(uint *)(param_1 + 0x5c) << 0x10) >> 0x14);
    *puVar5 = (ushort)*(undefined4 *)(param_1 + 0x60) | (ushort)*(undefined4 *)(param_1 + 100) |
              0x4044;
    if (DAT_0202e020 == 0) {
      DAT_02000f90 = DAT_02000f90 & ~(ushort)(uVar2 << 8);
    }
    else if (DAT_0202e020 == 1) {
      DAT_02000f90 = (ushort)(uVar2 << 8) | DAT_02000f90;
      sub_08002824(&DAT_08374b60,(*puVar5 & 0x1f00) << 3,0x800);
      sub_08002880(0xa000a000,(*puVar5 & 0x1f00) * 8 + 0x800,0x800);
    }
    *(ushort *)(param_1 + 0x10) = (ushort)DAT_0202e020;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  if (DAT_0202e020 == 1) {
    iVar4 = *(int *)(param_1 + 0x34) - (iVar3 >> 8);
    local_24 = (short)iVar4 + 0x30;
    iVar3 = (*(int *)(param_1 + 0x38) - (iVar1 >> 8)) + 0x60;
    if (((iVar4 + 0x12fU < 0x17f) && (iVar3 < 0x70)) && (-0x8c < iVar3)) {
      *(short *)(&DAT_02000f9c + (uVar2 >> 4)) = local_24;
      *(short *)((int)&DAT_02000f9c + (uVar2 >> 4) * 4 + 2) = (short)iVar3;
    }
    else {
      *(undefined2 *)((int)&DAT_02000f9c + (uVar2 >> 4) * 4 + 2) = 0x70;
    }
  }
  return in_lr;
}

