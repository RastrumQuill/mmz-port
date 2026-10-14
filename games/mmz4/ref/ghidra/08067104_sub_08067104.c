// sub_08067104 at 0x08067104 (thumb)

undefined4 sub_08067104(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    if (CONCAT11(*(undefined *)(param_1 + 0x1e),*(undefined *)(param_1 + 0x70)) != -0x56ff) {
      sub_0801CF00(param_1);
    }
    sub_08005784(param_1 + 0x74,&DAT_08857cc0);
    *(undefined *)(param_1 + 0x25) = 0x18;
    *(undefined *)(param_1 + 0x12) = 0x1e;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_0801CFF0(param_1);
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == -1) {
    *(undefined *)(param_1 + 0xd) = 2;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

