// sub_0805425C at 0x0805425C (thumb)

undefined4 sub_0805425C(int param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 in_lr;
  int local_14;
  int local_10;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_080127E4(param_1,0xa619);
    *(undefined *)(param_1 + 0x12) = 0;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_080128D4(param_1);
  *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x01';
  switch(*(undefined *)(param_1 + 0x12)) {
  case 2:
    sub_080032EC(0x33);
    uVar2 = DAT_0202e188 * 0x343fd + 0x269ec3;
    DAT_0202e188 = uVar2 & 0x7fffffff;
    cVar1 = sub_080EF330(uVar2 * 2 >> 0x11,0x50);
    cVar1 = '\x10' - cVar1;
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      local_14 = 0x400;
    }
    else {
      local_14 = -0x400;
    }
    local_14 = *(int *)(param_1 + 0x54) + local_14;
    local_10 = *(int *)(param_1 + 0x58);
    iVar3 = -0x1c00;
    break;
  default:
    goto switchD_08054294_caseD_3;
  case 10:
    uVar2 = DAT_0202e188 * 0x343fd + 0x269ec3;
    DAT_0202e188 = uVar2 & 0x7fffffff;
    cVar1 = sub_080EF330(uVar2 * 2 >> 0x11,0x50);
    cVar1 = '\x10' - cVar1;
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      local_14 = -0x600;
    }
    else {
      local_14 = 0x600;
    }
    local_14 = *(int *)(param_1 + 0x54) + local_14;
    local_10 = *(int *)(param_1 + 0x58);
    iVar3 = -0x1c00;
    goto LAB_080545b0;
  case 0x1a:
    uVar2 = DAT_0202e188 * 0x343fd + 0x269ec3;
    DAT_0202e188 = uVar2 & 0x7fffffff;
    cVar1 = sub_080EF330(uVar2 * 2 >> 0x11,0x50);
    cVar1 = '\x10' - cVar1;
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      local_14 = 0x800;
    }
    else {
      local_14 = -0x800;
    }
    local_14 = *(int *)(param_1 + 0x54) + local_14;
    local_10 = *(int *)(param_1 + 0x58);
    iVar3 = -0x1c00;
    break;
  case 0x22:
    uVar2 = DAT_0202e188 * 0x343fd + 0x269ec3;
    DAT_0202e188 = uVar2 & 0x7fffffff;
    cVar1 = sub_080EF330(uVar2 * 2 >> 0x11,0x50);
    cVar1 = '\x10' - cVar1;
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      local_14 = 0x200;
    }
    else {
      local_14 = -0x200;
    }
    local_14 = *(int *)(param_1 + 0x54) + local_14;
    local_10 = *(int *)(param_1 + 0x58);
    iVar3 = -0x1c00;
    goto LAB_080545b0;
  case 0x28:
    uVar2 = DAT_0202e188 * 0x343fd + 0x269ec3;
    DAT_0202e188 = uVar2 & 0x7fffffff;
    cVar1 = sub_080EF330(uVar2 * 2 >> 0x11,0x50);
    cVar1 = '\x10' - cVar1;
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      local_14 = 0xc00;
    }
    else {
      local_14 = -0xc00;
    }
    local_14 = *(int *)(param_1 + 0x54) + local_14;
    local_10 = *(int *)(param_1 + 0x58);
    iVar3 = -0x1800;
    break;
  case 0x30:
    uVar2 = DAT_0202e188 * 0x343fd + 0x269ec3;
    DAT_0202e188 = uVar2 & 0x7fffffff;
    cVar1 = sub_080EF330(uVar2 * 2 >> 0x11,0x50);
    cVar1 = '\x10' - cVar1;
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      local_14 = 0x400;
    }
    else {
      local_14 = -0x400;
    }
    local_14 = *(int *)(param_1 + 0x54) + local_14;
    local_10 = *(int *)(param_1 + 0x58);
    iVar3 = -0x1800;
LAB_080545b0:
    local_10 = local_10 + iVar3;
    sub_080A20A4(param_1,&local_14,1,cVar1);
    return in_lr;
  case 0x40:
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    *(undefined *)(param_1 + 0xf) = 0;
    goto switchD_08054294_caseD_3;
  }
  local_10 = local_10 + iVar3;
  sub_080A20A4(param_1,&local_14,0,cVar1);
switchD_08054294_caseD_3:
  return in_lr;
}

