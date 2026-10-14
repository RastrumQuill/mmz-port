// sub_0805CDFC at 0x0805CDFC (thumb)

undefined4 sub_0805CDFC(int param_1)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  undefined4 in_lr;
  undefined auStack_2c [8];
  ushort auStack_24 [4];
  
  sub_08128B5C(auStack_2c,&DAT_0812904c,6);
  sub_08128B5C(auStack_24,&DAT_08129052,6);
  bVar1 = *(byte *)(param_1 + 0x10);
  bVar2 = *(byte *)(param_1 + 10);
  if (*(char *)(param_1 + 0xf) == '\0') {
    iVar3 = sub_0805F118(param_1);
    sub_0805EE34(param_1,auStack_2c[(uint)bVar1 * 2]);
    *(uint *)(param_1 + 0x5c) = (uint)auStack_24[iVar3] * ((bVar2 >> 4 & 1) * -2 + 1);
    *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_1 + 0x54);
    *(undefined *)(param_1 + 0x12) = 0x40;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(param_1);
  sub_08005784(param_1 + 0x74,
               *(int *)(*(char *)(param_1 + 0x71) * 4 +
                       (&DAT_0885726c)
                       [*(ushort *)(&DAT_088573d4 + (uint)*(byte *)(param_1 + 0xb8) * 2)]) +
               (uint)*(byte *)(*(int *)(&DAT_08857308 + (uint)*(byte *)(param_1 + 0xb8) * 4) +
                              (int)*(char *)(param_1 + 0x71)) * 0x18);
  iVar3 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x54) = iVar3;
  if (0x5ffe < (*(int *)(param_1 + 0x60) - iVar3) + 0x2fffU) {
    *(undefined *)(param_1 + 0xe) = 1;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

