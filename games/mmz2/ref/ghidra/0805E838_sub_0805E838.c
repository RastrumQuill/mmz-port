// sub_0805E838 at 0x0805E838 (thumb)

undefined4 sub_0805E838(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0xaa08);
    *(undefined *)(param_1 + 0xf) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  bVar1 = *(byte *)(param_1 + 0xf);
  if (bVar1 == 1) {
    sub_080127E4(param_1,0xaa0b);
    sub_080A4E3C(param_1,0,2);
    sub_080032EC(0x7b);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 != 0) {
        return in_lr;
      }
      sub_080128D4(param_1);
      if (*(char *)(param_1 + 0x73) != '\x03') {
        return in_lr;
      }
      *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
      return in_lr;
    }
    if (bVar1 != 2) {
      if (bVar1 != 3) {
        return in_lr;
      }
      sub_080128D4(param_1);
      cVar2 = *(char *)(param_1 + 0x12) + -1;
      *(char *)(param_1 + 0x12) = cVar2;
      if (cVar2 != -1) {
        return in_lr;
      }
      *(undefined *)(param_1 + 0xd) = 0xe;
      *(undefined *)(param_1 + 0xe) = 0;
      return in_lr;
    }
  }
  sub_080128D4(param_1);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
    *(undefined *)(param_1 + 0x12) = 4;
  }
  return in_lr;
}

