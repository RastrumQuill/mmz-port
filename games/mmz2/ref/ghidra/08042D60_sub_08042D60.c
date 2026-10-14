// sub_08042D60 at 0x08042D60 (thumb)

undefined4 sub_08042D60(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_080127E4(param_1,0xa303);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_080128D4(param_1);
  uVar2 = sub_08044D54(param_1,*(undefined *)(param_1 + 0xb5));
  *(undefined4 *)(param_1 + 0x54) = uVar2;
  if (*(char *)(param_1 + 0xf) == '\x01') {
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    cVar1 = sub_08044EA4(param_1,0);
    if (cVar1 != '\0') {
      sub_080127E4(param_1,0xa30e);
      *(undefined *)(param_1 + 0xb6) = 0;
      *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
    }
  }
  else if (*(char *)(param_1 + 0x73) == '\x03') {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

