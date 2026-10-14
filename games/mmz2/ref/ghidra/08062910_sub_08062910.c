// sub_08062910 at 0x08062910 (thumb)

undefined4 sub_08062910(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    *(undefined *)(param_1 + 0x12) = 8;
    *(uint *)(param_1 + 0xb4) = *(uint *)(param_1 + 0xb4) | 4;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 1:
    sub_080128D4(param_1);
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 == '\0') {
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    break;
  case 2:
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(undefined *)(param_1 + 0xc1) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 3:
    sub_080128D4(param_1);
    sub_080622D8(param_1);
    if (*(char *)(param_1 + 0xc1) != '\0') {
      *(uint *)(param_1 + 0xb4) = *(uint *)(param_1 + 0xb4) & 0xfffffffb;
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    sub_080128D4(param_1);
    break;
  case 4:
    sub_08062340(param_1);
    if (*(char *)(param_1 + 0xc1) == '\0') {
      if ((*(uint *)(param_1 + 0xb4) & 8) == 0) {
        *(undefined *)(param_1 + 0xd) = 8;
        *(undefined *)(param_1 + 0xe) = 0;
      }
      else {
        *(undefined *)(param_1 + 0xd) = 6;
        *(undefined *)(param_1 + 0xe) = 0;
      }
    }
    sub_080128D4(param_1);
  }
  return in_lr;
}

