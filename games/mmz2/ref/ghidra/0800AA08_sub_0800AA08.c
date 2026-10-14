// sub_0800AA08 at 0x0800AA08 (thumb)

undefined4 sub_0800AA08(int param_1)

{
  ushort uVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  short *psVar5;
  uint uVar6;
  ushort *puVar7;
  uint uVar8;
  undefined4 in_lr;
  
  uVar8 = *(uint *)(param_1 + 0x5c) & 0xffff;
  if (*(char *)(param_1 + 0xe) == '\0') {
    uVar6 = (*(uint *)(param_1 + 0x5c) << 0x10) >> 0x14;
    uVar4 = *(uint *)(param_1 + 0x60) | *(uint *)(param_1 + 100);
    (&DAT_02000f94)[uVar6] = (ushort)uVar4 | 0x44;
    (&DAT_02000f9c)[uVar6] = 0;
    sub_080EEF68(&DAT_08374358,(uVar4 & 0x1f00) * 8 + 0x6000000,0x200);
    DAT_02000f90 = DAT_02000f90 & ~(ushort)(uVar8 << 8);
    *(undefined2 *)(param_1 + 0x68) = 0;
    *(undefined2 *)(param_1 + 0x6a) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  if (DAT_0202e01c == '\0') {
    if (*(short *)(param_1 + 0x68) != 0) {
      *(short *)(param_1 + 0x68) = 0;
      goto LAB_0800aaea;
    }
LAB_0800aaf2:
    puVar7 = (ushort *)(param_1 + 0x6a);
    uVar1 = *puVar7;
    if (0 < (short)*puVar7) {
      *puVar7 = (ushort)(uVar1 - 1);
      iVar3 = (uVar1 - 1) * 0x10000;
      if (iVar3 >> 0x10 == 0) {
        DAT_02000f90 = DAT_02000f90 & ~(ushort)(uVar8 << 8);
        DAT_02000fd0 = (undefined2)((uint)iVar3 >> 0x10);
        sub_08002EF0(0x1c);
      }
    }
  }
  else {
    if (*(short *)(param_1 + 0x68) == 0) {
      if (DAT_0202e01c == '\x01') {
        *(undefined2 *)(param_1 + 0x6a) = 0x100;
      }
      else {
        *(undefined2 *)(param_1 + 0x6a) = 0;
      }
      DAT_02000f90 = (ushort)(uVar8 << 8) | DAT_02000f90;
      DAT_02000fd0 = 0x3b44;
      sub_08002D68(0x1c,0);
      *(short *)(param_1 + 0x68) = 1;
LAB_0800aaea:
      if (*(short *)(param_1 + 0x68) == 0) goto LAB_0800aaf2;
    }
    psVar5 = (short *)(param_1 + 0x6a);
    if (DAT_0202e01c == '\x03') {
      if (0x17f < *psVar5) goto LAB_0800ab56;
    }
    else if (0xff < *psVar5) goto LAB_0800ab56;
    *psVar5 = *psVar5 + 1;
  }
LAB_0800ab56:
  sVar2 = *(short *)(param_1 + 0x6a);
  if (sVar2 < 0x100) {
    uVar1 = sVar2 >> 5;
    DAT_02000fd2 = uVar1 & 0x1f | (0x10 - uVar1) * 0x100;
  }
  else {
    iVar3 = *(short *)(param_1 + 0x6a) + -0x100;
    DAT_02000fd2 = 8U - (short)(iVar3 >> 6) & 0x1f | (8 - (short)(iVar3 >> 5)) * 0x100;
  }
  *(short *)(&DAT_02000f9c + (uVar8 >> 4)) = *(short *)(&DAT_02000f9c + (uVar8 >> 4)) + 0xc;
  psVar5 = (short *)((int)&DAT_02000f9c + (uVar8 >> 4) * 4 + 2);
  *psVar5 = *psVar5 + -2;
  sub_08002EA0(0x1c);
  return in_lr;
}

