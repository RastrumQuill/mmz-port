// sub_080B7D18 at 0x080B7D18 (thumb)

undefined4 sub_080B7D18(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0801CF00(param_1,0xb201);
    *(undefined *)(param_1 + 0xf) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  if (*(char *)(param_1 + 0xf) == '\0') {
    *(int *)(param_1 + 0x54) = *(int *)(*(int *)(param_1 + 0x28) + 0xb4) + 0x800;
    *(int *)(param_1 + 0x58) = *(int *)(*(int *)(param_1 + 0x28) + 0xb8) + 0x3000;
    if (*(char *)(param_1 + 0x73) == '\x03') {
      sub_0801CC9C(param_1);
      sub_0801CEEC(param_1);
      sub_0801CF00(param_1,0xb204);
      *(undefined *)(param_1 + 0x25) = 0x17;
      sub_08005784(param_1 + 0x74,&DAT_08860c50);
      *(int *)(param_1 + 0x54) = *(int *)(*(int *)(param_1 + 0x28) + 0xb4) + -0x1b00;
      *(int *)(param_1 + 0x58) = *(int *)(*(int *)(param_1 + 0x28) + 0xb8) + 0x3700;
      *(undefined *)(param_1 + 0x13) = 8;
      *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
    }
  }
  else {
    *(int *)(param_1 + 0x54) = *(int *)(*(int *)(param_1 + 0x28) + 0xb4) + -0x1b00;
    *(int *)(param_1 + 0x58) = *(int *)(*(int *)(param_1 + 0x28) + 0xb8) + 0x3700;
    if ((*(char *)(param_1 + 0x73) == '\x03') &&
       (cVar1 = *(char *)(param_1 + 0x13) + -1, *(char *)(param_1 + 0x13) = cVar1, cVar1 == -1)) {
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
      *(undefined *)(param_1 + 0xe) = 0;
    }
  }
  sub_0801CFF0(param_1);
  return in_lr;
}

