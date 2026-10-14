// sub_08067DF8 at 0x08067DF8 (thumb)

undefined4 sub_08067DF8(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0801CF00(param_1,0xa90a);
    sub_08002B10(0x65);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_0801CFF0(param_1);
  if ('\x03' < *(char *)(param_1 + 0x71)) {
    *(undefined *)(param_1 + 0xd) = 0x18;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

