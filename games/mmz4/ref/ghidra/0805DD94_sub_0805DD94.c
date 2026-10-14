// sub_0805DD94 at 0x0805DD94 (thumb)

undefined4 sub_0805DD94(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_08002B10(0x5c);
    sub_0805EE34(param_1,0xd);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(param_1);
  sub_08005784(param_1 + 0x74,
               *(int *)(*(char *)(param_1 + 0x71) * 4 +
                       (&DAT_0885726c)
                       [*(ushort *)(&DAT_088573d4 + (uint)*(byte *)(param_1 + 0xb8) * 2)]) +
               (uint)*(byte *)(*(int *)(&DAT_08857308 + (uint)*(byte *)(param_1 + 0xb8) * 4) +
                              (int)*(char *)(param_1 + 0x71)) * 0x18);
  if (*(char *)(param_1 + 0x73) == '\x04') {
    *(undefined *)(param_1 + 0xe) = 1;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

