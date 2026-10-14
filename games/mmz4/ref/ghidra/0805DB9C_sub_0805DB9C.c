// sub_0805DB9C at 0x0805DB9C (thumb)

undefined4 sub_0805DB9C(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  undefined auStack_14 [8];
  
  sub_08128B5C(auStack_14,&DAT_08129030,6);
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_0805EE34(param_1,auStack_14[(uint)*(byte *)(param_1 + 0x10) * 2]);
    *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0xb4) + -0x6a40;
    *(undefined4 *)(param_1 + 0x60) = 0xffffffe0;
    *(undefined4 *)(param_1 + 0x68) = 0xffffffe0;
    *(undefined *)(param_1 + 0x12) = 1;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(param_1);
  sub_08005784(param_1 + 0x74,
               *(int *)(*(char *)(param_1 + 0x71) * 4 +
                       (&DAT_0885726c)
                       [*(ushort *)(&DAT_088573d4 + (uint)*(byte *)(param_1 + 0xb8) * 2)]) +
               (uint)*(byte *)(*(int *)(&DAT_08857308 + (uint)*(byte *)(param_1 + 0xb8) * 4) +
                              (int)*(char *)(param_1 + 0x71)) * 0x18);
  if (*(char *)(param_1 + 0x12) != '\0') {
    iVar2 = -*(int *)(param_1 + 0x60);
    iVar1 = iVar2 + -0x20;
    if (iVar1 < 0) {
      iVar1 = iVar2 + -1;
    }
    if (*(int *)(param_1 + 0x58) +
        (((iVar1 >> 5) + 1) * (*(int *)(param_1 + 0x60) * 2 + (iVar1 >> 5) * 0x20) >> 1) <=
        *(int *)(param_1 + 0x5c)) {
      *(undefined4 *)(param_1 + 0x68) = 0x20;
      *(undefined *)(param_1 + 0x12) = 0;
    }
  }
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  iVar2 = *(int *)(param_1 + 0x60) + *(int *)(param_1 + 0x68);
  *(int *)(param_1 + 0x60) = iVar2;
  if (iVar2 < -0x280) {
    *(undefined4 *)(param_1 + 0x60) = 0xfffffd80;
  }
  if (*(int *)(param_1 + 0x58) <= *(int *)(param_1 + 0x5c)) {
    *(undefined *)(param_1 + 0xe) = 2;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

