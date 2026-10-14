// sub_08063E68 at 0x08063E68 (thumb)

undefined4 sub_08063E68(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  undefined4 local_1c [3];
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_08065A40(param_1,0x10);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(param_1);
  sub_08005784(param_1 + 0x74,
               *(int *)(*(char *)(param_1 + 0x71) * 4 +
                       (&DAT_08857a44)
                       [*(ushort *)(&DAT_08857b64 + (uint)*(byte *)(param_1 + 0xb4) * 2)]) +
               (uint)*(byte *)(*(int *)((uint)*(byte *)(param_1 + 0xb4) * 4 +
                                       *(int *)(&DAT_08857b5c + (uint)*(byte *)(param_1 + 0xb5) * 4)
                                       ) + (int)*(char *)(param_1 + 0x71)) * 0x18);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    local_1c[0] = 0x60;
    local_1c[1] = 0x56;
    local_1c[2] = 0x4c;
    iVar1 = sub_0806610C(param_1,&stack0xfffffff0);
    *(char *)(param_1 + 0xe0) = (char)local_1c[iVar1];
    *(undefined *)(param_1 + 0xd) = 0xd;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

