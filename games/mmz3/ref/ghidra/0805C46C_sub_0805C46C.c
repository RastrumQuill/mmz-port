// sub_0805C46C at 0x0805C46C (thumb)

undefined4 sub_0805C46C(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_08017528();
    sub_080176EC(param_1);
    sub_08017700(param_1,0xb509);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + -0x1000;
    *(undefined *)(param_1 + 0x12) = 0x30;
    *(undefined *)(param_1 + 0x13) = 0;
    sub_08007390(param_1 + 0x74,&DAT_083616f0);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080177F4(param_1);
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    cVar1 = *(char *)(param_1 + 0x12);
    if (cVar1 == ' ') {
      uVar2 = 0xb0;
    }
    else {
      if (cVar1 != '\x10') {
        if (cVar1 == '\0') {
          sub_080AD018(param_1,0,0xd0);
          sub_0800471C(0x51);
        }
        goto LAB_0805c520;
      }
      uVar2 = 0xc0;
    }
  }
  else {
    cVar1 = *(char *)(param_1 + 0x12);
    if (cVar1 == ' ') {
      uVar2 = 0x50;
    }
    else if (cVar1 == '\x10') {
      uVar2 = 0x40;
    }
    else {
      if (cVar1 != '\0') goto LAB_0805c520;
      uVar2 = 0x30;
    }
  }
  sub_080AD018(param_1,0,uVar2);
  sub_0800471C(0x51);
LAB_0805c520:
  cVar1 = *(char *)(param_1 + 0x13) + '\x10';
  *(char *)(param_1 + 0x13) = cVar1;
  *(char *)(param_1 + 0x24) = cVar1;
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == -1) {
    *(undefined *)(param_1 + 0xd) = 0xc;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

