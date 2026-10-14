// sub_0805D770 at 0x0805D770 (thumb)

undefined4 sub_0805D770(int param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  undefined auStack_34 [8];
  undefined auStack_2c [8];
  undefined auStack_24 [4];
  
  sub_08128B5C(auStack_34,&DAT_081290b4,6);
  sub_08128B5C(auStack_2c,&DAT_08129030,6);
  sub_08128BBC(auStack_24,0,3);
  uVar2 = (uint)*(byte *)(param_1 + 0x10);
  if (*(char *)(param_1 + 0xf) == '\0') {
    *(undefined *)(param_1 + 0x25) = 0x18;
    sub_0805EE34(param_1,auStack_34[uVar2 * 2]);
    *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0xd4);
    *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0xb4) + -0x5000;
    iVar3 = sub_0810CD64(param_1 + 0x54,param_1 + 100);
    iVar4 = *(short *)((int)&DAT_08128c10 + ((uint)((iVar3 + 0x40) * 0x1000000) >> 0x17)) * 3;
    *(int *)(param_1 + 0x5c) = iVar4;
    *(int *)(param_1 + 0x60) = *(short *)((int)&DAT_08128c10 + ((uint)(iVar3 << 0x18) >> 0x17)) * 3;
    iVar3 = *(int *)(param_1 + 100) - *(int *)(param_1 + 0x54);
    cVar1 = FUN_081288bc(iVar3,iVar4);
    *(char *)(param_1 + 0x12) = cVar1;
    iVar4 = sub_08128954(iVar3,iVar4);
    if (iVar4 != 0) {
      *(char *)(param_1 + 0x12) = cVar1 + '\x01';
    }
    *(undefined *)(param_1 + 0x13) = 1;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  if ((*(char *)(param_1 + 0x13) != '\0') && (*(char *)(param_1 + 0x73) == '\x03')) {
    sub_0805EE34(param_1,auStack_2c[uVar2 * 2]);
    *(undefined *)(param_1 + 0x13) = 0;
  }
  sub_0801CFF0(param_1);
  sub_08005784(param_1 + 0x74,
               *(int *)(*(char *)(param_1 + 0x71) * 4 +
                       (&DAT_0885726c)
                       [*(ushort *)(&DAT_088573d4 + (uint)*(byte *)(param_1 + 0xb8) * 2)]) +
               (uint)*(byte *)(*(int *)(&DAT_08857308 + (uint)*(byte *)(param_1 + 0xb8) * 4) +
                              (int)*(char *)(param_1 + 0x71)) * 0x18);
  if (*(char *)(param_1 + 0x12) != '\0') {
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
  }
  *(uint *)(param_1 + 0x54) =
       *(int *)(param_1 + 100) + -*(int *)(param_1 + 0x5c) * (uint)*(byte *)(param_1 + 0x12);
  *(uint *)(param_1 + 0x58) =
       *(int *)(param_1 + 0x68) + -*(int *)(param_1 + 0x60) * (uint)*(byte *)(param_1 + 0x12);
  if (*(char *)(param_1 + 0x12) == '\0') {
    *(undefined *)(param_1 + 0xd) = auStack_24[uVar2];
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

