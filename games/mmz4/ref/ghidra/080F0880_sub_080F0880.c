// sub_080F0880 at 0x080F0880 (thumb)

undefined4 sub_080F0880(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0x11)) {
  case 0:
    DAT_0202e3c4 = 0x200;
    DAT_0202ddc4 = 4;
    sub_0801CF00(param_1,0xc200);
    *(char *)(param_1 + 0x11) = *(char *)(param_1 + 0x11) + '\x01';
    break;
  case 1:
    break;
  case 2:
    goto switchD_080f0894_caseD_2;
  case 3:
    goto switchD_080f0894_caseD_3;
  case 4:
    goto switchD_080f0894_caseD_4;
  case 5:
    goto switchD_080f0894_caseD_5;
  case 6:
    goto switchD_080f0894_caseD_6;
  case 7:
    goto switchD_080f0894_caseD_7;
  case 8:
    goto switchD_080f0894_caseD_8;
  case 9:
    goto switchD_080f0894_caseD_9;
  case 10:
    goto switchD_080f0894_caseD_a;
  default:
    goto switchD_080f0894_caseD_b;
  }
  if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 1) != 0) {
    sub_0801CF00(param_1,0xc202);
    *(char *)(param_1 + 0x11) = *(char *)(param_1 + 0x11) + '\x01';
switchD_080f0894_caseD_2:
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 0x180;
    if (((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 2) != 0) &&
       (*(char *)(param_1 + 0x73) == '\x04')) {
      sub_0801CF00(param_1,0xc200);
      *(char *)(param_1 + 0x11) = *(char *)(param_1 + 0x11) + '\x01';
switchD_080f0894_caseD_3:
      if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 4) != 0) {
        sub_0801CF00(param_1,0xc206);
        *(char *)(param_1 + 0x11) = *(char *)(param_1 + 0x11) + '\x01';
switchD_080f0894_caseD_4:
        if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 8) != 0) {
          sub_0801CF00(param_1,0xc219);
          *(char *)(param_1 + 0x11) = *(char *)(param_1 + 0x11) + '\x01';
switchD_080f0894_caseD_5:
          if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 0x10) != 0) {
            sub_0801CF00(param_1,0xc206);
            *(char *)(param_1 + 0x11) = *(char *)(param_1 + 0x11) + '\x01';
switchD_080f0894_caseD_6:
            if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 0x20) != 0) {
              sub_0801CF00(param_1,0xc219);
              *(undefined *)(param_1 + 0x12) = 0x1e;
              *(char *)(param_1 + 0x11) = *(char *)(param_1 + 0x11) + '\x01';
switchD_080f0894_caseD_7:
              cVar1 = *(char *)(param_1 + 0x12) + -1;
              *(char *)(param_1 + 0x12) = cVar1;
              if (cVar1 == '\0') {
                sub_0801CF00(param_1,0xc201);
                *(undefined *)(param_1 + 0x12) = 0x1e;
                *(char *)(param_1 + 0x11) = *(char *)(param_1 + 0x11) + '\x01';
switchD_080f0894_caseD_8:
                cVar1 = *(char *)(param_1 + 0x12) + -1;
                *(char *)(param_1 + 0x12) = cVar1;
                if (cVar1 == '\0') {
                  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
                  *(undefined *)(param_1 + 0x4c) = 0;
                  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
                  sub_0801CF00(param_1,0xc200);
                  *(undefined *)(param_1 + 0x12) = 8;
                  *(char *)(param_1 + 0x11) = *(char *)(param_1 + 0x11) + '\x01';
switchD_080f0894_caseD_9:
                  cVar1 = *(char *)(param_1 + 0x12) + -1;
                  *(char *)(param_1 + 0x12) = cVar1;
                  if (cVar1 == '\0') {
                    sub_0801CF00(param_1,0xc20e);
                    *(char *)(param_1 + 0x11) = *(char *)(param_1 + 0x11) + '\x01';
switchD_080f0894_caseD_a:
                    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + -0x100;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
switchD_080f0894_caseD_b:
  sub_0801CFF0(param_1);
  return in_lr;
}

