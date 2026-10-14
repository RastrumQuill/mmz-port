// sub_0805D44C at 0x0805D44C (thumb)

undefined4 sub_0805D44C(int param_1)

{
  char *pcVar1;
  char *pcVar2;
  uint uVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined *)(param_1 + 0xbe) = 2;
    *(undefined *)(param_1 + 0x13) = 0;
    pcVar1 = (char *)(param_1 + 0xc0);
    *pcVar1 = '\0';
    *(char *)(param_1 + 0xc1) = '\0';
    *(char *)(param_1 + 0xc2) = '\0';
    *(char *)(param_1 + 0xc3) = '\0';
    uVar3 = 0xff;
    do {
      if (uVar3 == 0xff) {
        uVar3 = DAT_0202e188 * 0x343fd + 0x269ec3;
        DAT_0202e188 = uVar3 & 0x7fffffff;
        uVar3 = uVar3 * 2 >> 0x11;
      }
      else {
        uVar3 = uVar3 + 1;
      }
      uVar3 = uVar3 & 3;
      pcVar2 = pcVar1 + uVar3;
      if (*pcVar2 == '\0') {
        if (*(char *)(*(int *)(param_1 + 0xb4 + (uVar3 + 4) * 4) + 0x11) == '\0') {
          *pcVar2 = *(char *)(param_1 + 0x13) * '0' + '\x01';
          *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + '\x01';
        }
        else {
          *pcVar2 = -1;
        }
        uVar3 = 0xff;
      }
    } while ((((*pcVar1 == '\0') || (*(char *)(param_1 + 0xc1) == '\0')) ||
             (*(char *)(param_1 + 0xc2) == '\0')) || (*(char *)(param_1 + 0xc3) == '\0'));
    *(undefined *)(param_1 + 0x12) = 0xff;
    sub_080032EC(0x74);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else {
    *(undefined *)(param_1 + 0xbe) = 0;
    *(undefined *)(param_1 + 0xd) = 3;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  sub_080128D4(param_1);
  return in_lr;
}

