// sub_08062380 at 0x08062380 (thumb)

undefined4 sub_08062380(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  undefined4 local_18;
  undefined4 local_14;
  
  local_18 = 0x104;
  local_14 = 0x105;
  if (*(char *)(param_1 + 0xf) == '\0') {
    *(int *)(param_1 + 0xd0) = DAT_0202ea30 + -0x7800;
    *(int *)(param_1 + 0xd4) = DAT_0202ea34 + -0xb002;
    iVar1 = 0;
    if (DAT_0202e910 == 0x10) {
      iVar1 = 4;
    }
    sub_08002B10(*(undefined2 *)((int)&local_18 + iVar1));
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
    *(undefined *)(param_1 + 0xe) = 2;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

