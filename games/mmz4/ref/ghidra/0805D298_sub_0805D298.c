// sub_0805D298 at 0x0805D298 (thumb)

undefined4 sub_0805D298(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 in_lr;
  undefined auStack_24 [8];
  int local_1c;
  int local_18;
  
  sub_08128B5C(auStack_24,&DAT_08129098,6);
  iVar2 = DAT_0202dbf0;
  local_1c = -0xe00;
  local_18 = 0xe00;
  bVar1 = *(byte *)(param_1 + 10);
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_0805EE34(param_1,auStack_24[(uint)*(byte *)(param_1 + 0x10) * 2]);
    *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x58) + -0x5000;
    *(undefined4 *)(param_1 + 0x60) = 0xfffffe80;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(param_1);
  sub_08005784(param_1 + 0x74,
               *(int *)(*(char *)(param_1 + 0x71) * 4 +
                       (&DAT_0885726c)
                       [*(ushort *)(&DAT_088573d4 + (uint)*(byte *)(param_1 + 0xb8) * 2)]) +
               (uint)*(byte *)(*(int *)(&DAT_08857308 + (uint)*(byte *)(param_1 + 0xb8) * 4) +
                              (int)*(char *)(param_1 + 0x71)) * 0x18);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  if ((iVar2 == 0) || ((*(uint *)(param_1 + 0x8c) & 0x800) == 0)) {
    *(undefined *)(param_1 + 0xe) = 7;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  else {
    *(undefined4 *)(iVar2 + 0x60) = 0;
    *(uint *)(iVar2 + 0x54) =
         *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0xc0) +
         local_1c * ((bVar1 >> 4 & 1) * 2 + -1);
    *(int *)(iVar2 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0xc4) + local_18;
    if (*(int *)(param_1 + 0x58) <= *(int *)(param_1 + 0x5c)) {
      *(undefined *)(param_1 + 0xe) = 4;
      *(undefined *)(param_1 + 0xf) = 0;
    }
  }
  return in_lr;
}

