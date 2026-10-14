// sub_080F475C at 0x080F475C (thumb)

undefined4 sub_080F475C(int param_1)

{
  char cVar1;
  int *piVar2;
  undefined4 in_lr;
  undefined4 local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  undefined4 local_14;
  int local_10;
  
  switch(*(undefined *)(param_1 + 0xd)) {
  case 0:
    *(undefined *)(param_1 + 0x12) = 8;
    local_34 = *(undefined4 *)(param_1 + 0x54);
    local_30 = *(int *)(param_1 + 0x58) + 0x1400;
    sub_080D0894(2,&local_34);
    sub_08002B10(0x35);
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  case 1:
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != '\0') {
      return in_lr;
    }
    piVar2 = &local_2c;
    local_28 = *(int *)(param_1 + 0x58) + 0x400;
    local_2c = *(int *)(param_1 + 0x54) + -0xc00;
    sub_080D0894(2,piVar2);
    local_2c = local_2c + 0x1800;
    break;
  case 2:
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != '\0') {
      return in_lr;
    }
    piVar2 = &local_24;
    local_20 = *(int *)(param_1 + 0x58) + 0x1200;
    local_24 = *(int *)(param_1 + 0x54) + -0x1000;
    sub_080D0894(2,piVar2);
    local_24 = local_24 + 0x2000;
    break;
  case 3:
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != '\0') {
      return in_lr;
    }
    piVar2 = &local_1c;
    local_18 = *(int *)(param_1 + 0x58) + 0x400;
    local_1c = *(int *)(param_1 + 0x54) + -0xc00;
    sub_080D0894(2,piVar2);
    local_1c = local_1c + 0x1800;
    break;
  case 4:
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 == '\0') {
      local_14 = *(undefined4 *)(param_1 + 0x54);
      local_10 = *(int *)(param_1 + 0x58) + 0xc00;
      sub_080D0894(1);
      sub_08002B10(0x35);
      DAT_0202dad4 = DAT_0202dad4 + '\x01';
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
      *(undefined4 *)(param_1 + 0x8c) = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xf7;
      *(undefined4 *)(param_1 + 0xc) = 4;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_08865dc4 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
    }
  default:
    goto switchD_080f4772_caseD_5;
  }
  sub_080D0894(2,piVar2);
  sub_08002B10(0x35);
  *(undefined *)(param_1 + 0x12) = 8;
  *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
switchD_080f4772_caseD_5:
  return in_lr;
}

