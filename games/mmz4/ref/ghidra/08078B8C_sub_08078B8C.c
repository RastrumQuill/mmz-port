// sub_08078B8C at 0x08078B8C (thumb)

undefined4 sub_08078B8C(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_08078ED4(param_1,0);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(param_1);
  sub_08005784(param_1 + 0x74,
               *(undefined4 *)
                (*(char *)(param_1 + 0x71) * 4 +
                (&DAT_08859dac)[*(ushort *)(&DAT_08859db4 + (uint)*(byte *)(param_1 + 0xc4) * 2)]));
  sub_08078E20(param_1);
  if ((((*(char *)(*(int *)(param_1 + 200) + 0xb4) != '\0') &&
       (*(char *)(*(int *)(param_1 + 200) + 0xb6) == '\0')) &&
      (*(char *)(*(int *)(param_1 + 0xcc) + 0xb8) != '\0')) &&
     (*(char *)(*(int *)(param_1 + 0xcc) + 0xb9) == '\0')) {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

