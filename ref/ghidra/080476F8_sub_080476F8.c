// sub_080476F8 at 0x080476F8 (thumb)

undefined4 sub_080476F8(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_08029778(param_1,8);
    *(undefined *)(param_1 + 0xe) = 0;
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + -0x1000;
    *(undefined *)(param_1 + 0x12) = 0x30;
    *(undefined *)(param_1 + 0x13) = 0;
    sub_0800561C(param_1 + 0x74,&DAT_082aea18);
  }
  sub_080297C0(param_1);
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + '\x10';
    cVar1 = *(char *)(param_1 + 0x12);
    if (cVar1 == ' ') {
      uVar2 = 0xb0;
    }
    else {
      if (cVar1 != '\x10') {
        if (cVar1 == '\0') {
          sub_08087330(param_1,0,0xd0);
          sub_08001EAC(0xb9);
        }
        goto LAB_080477aa;
      }
      uVar2 = 0xc0;
    }
  }
  else {
    *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + -0x10;
    cVar1 = *(char *)(param_1 + 0x12);
    if (cVar1 == ' ') {
      uVar2 = 0x50;
    }
    else if (cVar1 == '\x10') {
      uVar2 = 0x40;
    }
    else {
      if (cVar1 != '\0') goto LAB_080477aa;
      uVar2 = 0x30;
    }
  }
  sub_08087330(param_1,0,uVar2);
  sub_08001EAC(0xb9);
LAB_080477aa:
  *(undefined *)(param_1 + 0x1f) = *(undefined *)(param_1 + 0x13);
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == -1) {
    *(undefined *)(param_1 + 0xd) = 0xc;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  return in_lr;
}

