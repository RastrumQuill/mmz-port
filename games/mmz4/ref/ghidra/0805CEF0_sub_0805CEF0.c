// sub_0805CEF0 at 0x0805CEF0 (thumb)

undefined4 sub_0805CEF0(int param_1)

{
  byte bVar1;
  byte bVar2;
  undefined uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 in_lr;
  undefined auStack_44 [8];
  ushort auStack_3c [4];
  ushort auStack_34 [4];
  ushort auStack_2c [4];
  int local_24;
  
  sub_08128B5C(auStack_44,&DAT_08129058,6);
  sub_08128B5C(auStack_3c,&DAT_08129052,6);
  sub_08128B5C(auStack_34,&DAT_0812905e,6);
  sub_08128B5C(auStack_2c,&DAT_08129064,6);
  local_24 = DAT_0202dbf0;
  bVar1 = *(byte *)(param_1 + 0x10);
  bVar2 = *(byte *)(param_1 + 10);
  uVar4 = sub_0805F118(param_1);
  uVar4 = uVar4 & 0xff;
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_0805EE34(param_1,auStack_44[(uint)bVar1 * 2]);
    *(uint *)(param_1 + 100) = (bVar2 >> 4 & 1) * 2 + -1;
    *(uint *)(param_1 + 0x5c) = (uint)auStack_3c[uVar4];
    *(uint *)(param_1 + 0x60) = (uint)auStack_34[uVar4];
    *(uint *)(param_1 + 0x68) = -(uint)auStack_2c[uVar4];
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(param_1);
  sub_08005784(param_1 + 0x74,
               *(int *)(*(char *)(param_1 + 0x71) * 4 +
                       (&DAT_0885726c)
                       [*(ushort *)(&DAT_088573d4 + (uint)*(byte *)(param_1 + 0xb8) * 2)]) +
               (uint)*(byte *)(*(int *)(&DAT_08857308 + (uint)*(byte *)(param_1 + 0xb8) * 4) +
                              (int)*(char *)(param_1 + 0x71)) * 0x18);
  if ((local_24 == 0) || ((*(uint *)(param_1 + 0x8c) & 0x800) == 0)) {
    if (((*(uint *)(param_1 + 0x8c) & 1) == 0) ||
       (iVar5 = *(int *)(param_1 + 0x5c) +
                ((int)*(short *)(param_1 + 0xca) - (int)*(short *)(param_1 + 0xa4)) * -0x40,
       *(int *)(param_1 + 0x5c) = iVar5, 0x100 < iVar5)) {
      iVar6 = *(int *)(param_1 + 100);
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar6 * *(int *)(param_1 + 0x5c);
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
      iVar5 = *(int *)(param_1 + 0x60) + *(int *)(param_1 + 0x68);
      *(int *)(param_1 + 0x60) = iVar5;
      if (iVar5 < 0) {
        *(undefined4 *)(param_1 + 0x60) = 0;
      }
      iVar5 = *(int *)(param_1 + 0xd0) + iVar6 * 0x5800;
      if (iVar6 * (*(int *)(param_1 + 0x54) - iVar5) < 0) {
        return in_lr;
      }
      *(int *)(param_1 + 0x54) = iVar5;
      uVar3 = 8;
    }
    else {
      uVar3 = 7;
    }
    *(undefined *)(param_1 + 0xe) = uVar3;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  else {
    *(undefined4 *)(local_24 + 0x60) = 0;
    sub_08098078(param_1,0,0);
    *(undefined *)(param_1 + 0xe) = 2;
    *(undefined *)(param_1 + 0xf) = 0;
    sub_08128884(param_1,0x805d0b1);
  }
  return in_lr;
}

