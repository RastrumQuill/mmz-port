// sub_0805C7B0 at 0x0805C7B0 (thumb)

undefined4 sub_0805C7B0(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  undefined auStack_14 [8];
  
  sub_08128B5C(auStack_14,&DAT_08129030,6);
  bVar1 = *(byte *)(param_1 + 0x11);
  if (*(char *)(param_1 + 0xf) == '\0') {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    sub_0805EE34(param_1,auStack_14[(uint)*(byte *)(param_1 + 0x10) * 2]);
    iVar3 = DAT_0202ea30;
    *(int *)(param_1 + 0xd0) = DAT_0202ea30;
    iVar3 = iVar3 + ((bVar1 & 1) * 2 + -1) * 0x4800;
    *(int *)(param_1 + 0xd4) = iVar3;
    *(int *)(param_1 + 0x54) = iVar3;
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0xb4) + -0xb000;
    *(undefined4 *)(param_1 + 0x60) = 0x280;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(param_1);
  sub_08005784(param_1 + 0x74,
               *(int *)(*(char *)(param_1 + 0x71) * 4 +
                       (&DAT_0885726c)
                       [*(ushort *)(&DAT_088573d4 + (uint)*(byte *)(param_1 + 0xb8) * 2)]) +
               (uint)*(byte *)(*(int *)(&DAT_08857308 + (uint)*(byte *)(param_1 + 0xb8) * 4) +
                              (int)*(char *)(param_1 + 0x71)) * 0x18);
  iVar2 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x58) = iVar2;
  iVar3 = *(int *)(param_1 + 0xb4) + -0x5000;
  if (iVar3 <= iVar2) {
    *(int *)(param_1 + 0x58) = iVar3;
    *(undefined *)(param_1 + 0xe) = 2;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

