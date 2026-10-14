// sub_08077B40 at 0x08077B40 (thumb)

undefined4 sub_08077B40(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    *(undefined *)(*(int *)(param_1 + 0xcc) + 0xb6) = 2;
    *(undefined *)(*(int *)(param_1 + 0xcc) + 0xb9) = 1;
    sub_08078ED4(param_1);
    *(undefined *)(param_1 + 0x12) = 0x80;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(param_1);
  sub_08005784(param_1 + 0x74,
               *(undefined4 *)
                (*(char *)(param_1 + 0x71) * 4 +
                (&DAT_08859dac)[*(ushort *)(&DAT_08859db4 + (uint)*(byte *)(param_1 + 0xc4) * 2)]));
  sub_08078E18(param_1);
  if (*(char *)(param_1 + 0x12) != '\0') {
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
  }
  if (((*(char *)(*(int *)(param_1 + 0xcc) + 0xb8) != '\0') &&
      (*(char *)(*(int *)(param_1 + 0xcc) + 0xb9) == '\0')) && (*(char *)(param_1 + 0x12) == '\0'))
  {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

