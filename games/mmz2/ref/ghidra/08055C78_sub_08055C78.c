// sub_08055C78 at 0x08055C78 (thumb)

undefined4 sub_08055C78(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  int local_10;
  int local_c;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_080127E4(param_1,0xa625);
    *(undefined *)(param_1 + 0x12) = 0x18;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_080128D4(param_1);
  if ((*(byte *)(param_1 + 0x12) & 3) == 0) {
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      local_10 = -0x1400;
    }
    else {
      local_10 = 0x1400;
    }
    local_10 = *(int *)(param_1 + 0x54) + local_10;
    local_c = *(int *)(param_1 + 0x58) + -0x1800;
    sub_080A20A4(param_1,&local_10,2,0);
    if (*(char *)(param_1 + 0x12) == '\f') {
      sub_080032EC(0x95);
    }
  }
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == '\0') {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

