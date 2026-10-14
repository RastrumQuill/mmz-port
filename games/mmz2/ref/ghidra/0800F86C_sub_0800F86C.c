// sub_0800F86C at 0x0800F86C (thumb)

undefined4 sub_0800F86C(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  ushort *puVar5;
  undefined4 in_lr;
  short local_24;
  
  iVar1 = DAT_0202e02c;
  iVar3 = DAT_0202e028;
  uVar2 = *(uint *)(param_1 + 0x5c) & 0xffff;
  if (*(ushort *)(param_1 + 0x10) != (ushort)DAT_0202e021) {
    *(undefined *)(param_1 + 0xe) = 0;
  }
  if (*(char *)(param_1 + 0xe) == '\0') {
    puVar5 = &DAT_02000f94 + ((*(uint *)(param_1 + 0x5c) << 0x10) >> 0x14);
    *puVar5 = (ushort)*(undefined4 *)(param_1 + 0x60) | (ushort)*(undefined4 *)(param_1 + 100) |
              0x4044;
    if (DAT_0202e021 == 0) {
      DAT_02000f90 = DAT_02000f90 & ~(ushort)(uVar2 << 8);
    }
    else if (DAT_0202e021 == 1) {
      DAT_02000f90 = (ushort)(uVar2 << 8) | DAT_02000f90;
      sub_08002824(&DAT_08374b60,(*puVar5 & 0x1f00) << 3,0x800);
      sub_08002880(0xa000a000,(*puVar5 & 0x1f00) * 8 + 0x800,0x800);
    }
    *(ushort *)(param_1 + 0x10) = (ushort)DAT_0202e021;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  if (DAT_0202e021 == 1) {
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
    if ((DAT_0202e024 != 0) &&
       ((*(uint *)(&DAT_0202e160 + (uint)(*(byte *)(DAT_0202e024 + 0x1d) >> 5) * 4) &
        1 << (*(byte *)(DAT_0202e024 + 0x1d) & 0x1f)) != 0)) {
      DAT_03002ec4 = 0x120;
      DAT_03002ec6 = 0x20;
    }
  }
  return in_lr;
}

