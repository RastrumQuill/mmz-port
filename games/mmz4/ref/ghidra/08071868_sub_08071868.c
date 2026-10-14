// sub_08071868 at 0x08071868 (thumb)

undefined4 sub_08071868(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined4 *)(param_1 + 0x68) = 0x20;
    *(undefined *)(param_1 + 0x13) = 1;
    *(undefined *)(param_1 + 0xf) = 1;
  }
  if ((*(char *)(param_1 + 0x13) != '\0') && (0x1ff < *(int *)(param_1 + 0x60))) {
    sub_080735E0(param_1,10);
    *(undefined *)(param_1 + 0x13) = 0;
  }
  sub_0801CFF0(param_1);
  sub_08005784(param_1 + 0x74,
               *(int *)(*(char *)(param_1 + 0x71) * 4 +
                       (&DAT_088595cc)
                       [*(ushort *)(&DAT_088596c8 + (uint)*(byte *)(param_1 + 0xb8) * 2)]) +
               (uint)*(byte *)(*(int *)((uint)*(byte *)(param_1 + 0xb8) * 4 +
                                       *(int *)(&DAT_088596c0 + (uint)*(byte *)(param_1 + 0xb9) * 4)
                                       ) + (int)*(char *)(param_1 + 0x71)) * 0x18);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  iVar1 = sub_0807376C(param_1);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x60) + *(int *)(param_1 + 0x68);
    *(int *)(param_1 + 0x60) = iVar1;
    if (0x300 < iVar1) {
      *(undefined4 *)(param_1 + 0x60) = 0x300;
    }
  }
  else {
    sub_08073984(param_1);
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

