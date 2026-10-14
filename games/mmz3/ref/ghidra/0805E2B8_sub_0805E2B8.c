// sub_0805E2B8 at 0x0805E2B8 (thumb)

undefined4 sub_0805E2B8(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        sub_08017700(param_1,0x3f01);
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      }
      else if (bVar1 != 3) {
        return in_lr;
      }
      sub_080177F4(param_1);
      if (*(char *)(param_1 + 0x73) != '\x03') {
        return in_lr;
      }
      *(undefined *)(param_1 + 0xd) = 0;
      *(undefined *)(param_1 + 0xe) = 0;
      return in_lr;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    sub_080C34B4(param_1);
    *(undefined *)(param_1 + 0x12) = 0x1e;
    *(undefined *)(param_1 + 0x13) = 0;
    sub_08017700(param_1,0x3f00);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if (cVar2 == '\0') {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  if ((*(char *)(param_1 + 0x13) == '\0') && (*(char *)(param_1 + 0x71) == '\x03')) {
    sub_0800471C(0xf1);
    sub_080C35A0(param_1);
    sub_080ADCDC(param_1);
    *(undefined *)(param_1 + 0x13) = 1;
  }
  sub_080177F4(param_1);
  return in_lr;
}

