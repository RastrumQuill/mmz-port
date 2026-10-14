// sub_0805134C at 0x0805134C (thumb)

undefined4 sub_0805134C(int param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 in_lr;
  int local_30;
  int local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    sub_080127E4(param_1,0xa402);
    *(undefined *)(param_1 + 0x12) = 0x3c;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 1:
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 == '\0') {
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    sub_080128D4(param_1);
    return in_lr;
  case 2:
    iVar4 = 4;
    do {
      uVar3 = DAT_0202e188 * 0x343fd + 0x269ec3;
      uVar2 = (uVar3 & 0x7fffffff) * 0x343fd + 0x269ec3;
      local_30 = (uVar3 * 2 >> 0x11 & 0xf) * 0x100 + *(int *)(param_1 + 0x54) +
                 (uVar2 * 2 >> 0x11 & 0x1f) * -0x100;
      uVar2 = (uVar2 & 0x7fffffff) * 0x343fd + 0x269ec3;
      DAT_0202e188 = uVar2 & 0x7fffffff;
      local_2c = *(int *)(param_1 + 0x58) + (uVar2 * 2 >> 0x11 & 0xf) * -0x100;
      sub_080AC60C(1,&local_30);
      iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
    sub_080032EC(0x35);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 3:
    local_30 = *(int *)(param_1 + 0x54);
    local_2c = *(int *)(param_1 + 0x58) + -0x1000;
    local_28 = 0xffffff40;
    local_24 = 0xfffffc40;
    sub_080A0344(param_1,&local_30,&local_28,0);
    local_28 = 0xfffffe80;
    local_24 = 0xfffffd80;
    sub_080A0344(param_1,&local_30,&local_28,0);
    local_28 = 0x80;
    local_24 = 0xfffffce0;
    sub_080A0344(param_1,&local_30,&local_28,1);
    local_28 = 0x160;
    local_24 = 0xfffffd00;
    sub_080A0344(param_1,&local_30,&local_28,1);
    break;
  case 4:
    *(undefined *)(param_1 + 0x12) = 0xb4;
    break;
  case 5:
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != '\0') {
      return in_lr;
    }
    DAT_0202ec42 = DAT_0202ec42 | 2;
    sub_0804EA2C(param_1);
    break;
  default:
    goto switchD_0805136a_caseD_6;
  }
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
switchD_0805136a_caseD_6:
  return in_lr;
}

