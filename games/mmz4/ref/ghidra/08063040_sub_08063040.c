// sub_08063040 at 0x08063040 (thumb)

undefined4 sub_08063040(int param_1)

{
  int *piVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    if (*(int *)(param_1 + 200) != 0) {
      *(undefined *)(*(int *)(param_1 + 200) + 0xbc) = 1;
    }
    sub_08065A40(param_1,8);
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
  piVar1 = (int *)(param_1 + 200);
  if (*piVar1 != 0) {
    if (1 < *(byte *)(*piVar1 + 0xc)) {
      *piVar1 = 0;
    }
    if (*piVar1 != 0) {
      return in_lr;
    }
  }
  *(undefined *)(param_1 + 0xe) = 4;
  *(undefined *)(param_1 + 0xf) = 0;
  return in_lr;
}

