// sub_0805E3AC at 0x0805E3AC (thumb)

undefined4 sub_0805E3AC(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_0805EE34(param_1,0x1f);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(param_1);
  sub_08005784(param_1 + 0x74,
               *(int *)(*(char *)(param_1 + 0x71) * 4 +
                       (&DAT_0885726c)
                       [*(ushort *)(&DAT_088573d4 + (uint)*(byte *)(param_1 + 0xb8) * 2)]) +
               (uint)*(byte *)(*(int *)(&DAT_08857308 + (uint)*(byte *)(param_1 + 0xb8) * 4) +
                              (int)*(char *)(param_1 + 0x71)) * 0x18);
  iVar1 = *(int *)(param_1 + 0xcc);
  if ((iVar1 != 0) && (1 < *(byte *)(iVar1 + 0xc))) {
    *(int *)(param_1 + 0xcc) = 0;
  }
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined *)(param_1 + 0xe) = 3;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

