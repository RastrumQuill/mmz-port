// sub_080F0F5C at 0x080F0F5C (thumb)

undefined4 sub_080F0F5C(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0x11)) {
  case 0:
    sub_0801CF00(param_1,0x4900);
    *(undefined *)(param_1 + 0x25) = 0x10;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
    *(undefined *)(param_1 + 0x4c) = 1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | 0x10;
    *(char *)(param_1 + 0x11) = *(char *)(param_1 + 0x11) + '\x01';
  case 1:
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 1) != 0) {
      *(char *)(param_1 + 0x11) = *(char *)(param_1 + 0x11) + '\x01';
switchD_080f0f70_caseD_2:
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 0xc0;
      if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 2) != 0) {
        sub_0801CF00(param_1,0);
        *(char *)(param_1 + 0x11) = *(char *)(param_1 + 0x11) + '\x01';
switchD_080f0f70_caseD_3:
        if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 4) != 0) {
          sub_0801CF00(param_1,0x4c00);
          *(char *)(param_1 + 0x11) = *(char *)(param_1 + 0x11) + '\x01';
switchD_080f0f70_caseD_4:
          if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 8) != 0) {
            *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
            *(undefined *)(param_1 + 0x4c) = 0;
            *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
            *(undefined *)(param_1 + 0x12) = 8;
            *(char *)(param_1 + 0x11) = *(char *)(param_1 + 0x11) + '\x01';
switchD_080f0f70_caseD_5:
            cVar1 = *(char *)(param_1 + 0x12) + -1;
            *(char *)(param_1 + 0x12) = cVar1;
            if (cVar1 == '\0') {
              sub_0801CF00(param_1,0x4900);
              *(char *)(param_1 + 0x11) = *(char *)(param_1 + 0x11) + '\x01';
            }
          }
        }
      }
    }
    break;
  case 2:
    goto switchD_080f0f70_caseD_2;
  case 3:
    goto switchD_080f0f70_caseD_3;
  case 4:
    goto switchD_080f0f70_caseD_4;
  case 5:
    goto switchD_080f0f70_caseD_5;
  case 6:
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + -0xc0;
  }
  sub_0801CFF0(param_1);
  return in_lr;
}

