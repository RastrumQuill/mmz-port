// sub_0800FA30 at 0x0800FA30 (thumb)

undefined4 sub_0800FA30(int param_1)

{
  undefined2 uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 in_lr;
  undefined4 local_30;
  int local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  local_28 = 0x3c000000;
  local_24 = 0x7800ee00;
  if (DAT_0202e01c == '\0') {
    DAT_02000f90 = DAT_02000f90 & ~(ushort)(*(int *)(param_1 + 0x5c) << 8);
  }
  else {
    uVar2 = *(int *)(param_1 + 0x5c) << 0x10;
    if (*(char *)(param_1 + 0xe) == '\0') {
      uVar3 = *(uint *)(param_1 + 100);
      (&DAT_02000f94)[uVar2 >> 0x14] = (ushort)uVar3 | 0x8044;
      sub_08002824(&DAT_08379bb0,(uVar3 & 0x1f00) << 3,0x800);
      sub_08002880(0,((ushort)(&DAT_02000f94)[uVar2 >> 0x14] & 0x1f00) * 8 + 0x800,0x800);
      DAT_02000f90 = (ushort)(*(int *)(param_1 + 0x5c) << 8) | DAT_02000f90;
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    iVar4 = *(int *)(param_1 + 0x38) + (DAT_0202e030 >> 1) + -0x4b0;
    if (iVar4 < -0xb4) {
      iVar4 = -0xb4;
    }
    if (0x30 < iVar4) {
      iVar4 = 0x30;
    }
    local_30 = 0xd9800;
    local_2c = (DAT_0202e030 >> 1) * -0x100 + 0x4b000;
    sub_080099BC(0xe001,0xf,&local_30,&local_28);
    uVar2 = uVar2 >> 0x14;
    uVar1 = sub_080EF1E8(*(undefined4 *)(param_1 + 0x34),0xf0);
    *(undefined2 *)(&DAT_02000f9c + uVar2) = uVar1;
    *(short *)((int)&DAT_02000f9c + uVar2 * 4 + 2) = (short)iVar4;
  }
  return in_lr;
}

