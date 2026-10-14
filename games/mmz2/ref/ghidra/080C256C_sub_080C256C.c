// sub_080C256C at 0x080C256C (thumb)

undefined4 sub_080C256C(int param_1)

{
  char cVar1;
  uint uVar2;
  undefined4 in_lr;
  int local_24;
  int local_20;
  int local_1c;
  
  switch(*(undefined *)(param_1 + 0xd)) {
  case 0:
    DAT_0202e5a2 = 0x200;
    DAT_0202e3a2 = 7;
    sub_08002638(&DAT_08432db4,0x10000);
    sub_08002AEC(&DAT_08432dc0,(DAT_0202e3a2 - 8) * 0x20 + 0x200);
    sub_080127E4(param_1,0x909);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    sub_08006DE4(param_1 + 0x74,&DAT_08348c48,param_1 + 0x54,0);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  case 1:
    sub_080128D4(param_1);
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + -0x80;
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 1) == 0) {
      return in_lr;
    }
    sub_080127E4(param_1,0x900);
    *(undefined *)(param_1 + 0x12) = 0xf;
    break;
  case 2:
    sub_080128D4(param_1);
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != '\0') {
      return in_lr;
    }
    sub_080127E4(param_1,0x901);
    break;
  case 3:
    sub_080128D4(param_1);
    if ((*(uint *)(param_1 + 0x8c) & 0x200) == 0) {
      return in_lr;
    }
    sub_080127E4(param_1,0x903);
    break;
  case 4:
    sub_080128D4(param_1);
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    local_24 = *(int *)(param_1 + 0x54);
    local_20 = *(int *)(param_1 + 0x58) + -0x1800;
    sub_080B0ACC(&local_24,&DAT_08348c78,0,*(byte *)(param_1 + 10) & 0x10);
    sub_080B0ACC(&local_24,&DAT_08348c94,0,*(byte *)(param_1 + 10) & 0x10);
    sub_080B0ACC(&local_24,&DAT_08348cb0,0,*(byte *)(param_1 + 10) & 0x10);
    local_20 = *(int *)(param_1 + 0x58) + -0x1000;
    sub_080AC60C(1,&local_24);
    uVar2 = DAT_0202e188 * 0x343fd + 0x269ec3;
    local_24 = *(int *)(param_1 + 0x54) + (0x10 - (uVar2 * 2 >> 0x11 & 0x1f)) * 0x100;
    uVar2 = (uVar2 & 0x7fffffff) * 0x343fd + 0x269ec3;
    DAT_0202e188 = uVar2 & 0x7fffffff;
    local_20 = *(int *)(param_1 + 0x58) + (uVar2 * 2 >> 0x11 & 0x1f) * -0x100;
    local_1c = 0x343fd;
    sub_080AC60C(2,&local_24);
    uVar2 = local_1c * DAT_0202e188 + 0x269ec3;
    local_24 = *(int *)(param_1 + 0x54) + (0x10 - (uVar2 * 2 >> 0x11 & 0x1f)) * 0x100;
    uVar2 = local_1c * (uVar2 & 0x7fffffff) + 0x269ec3;
    DAT_0202e188 = uVar2 & 0x7fffffff;
    local_20 = *(int *)(param_1 + 0x58) + (uVar2 * 2 >> 0x11 & 0x1f) * -0x100;
    sub_080AC60C(2,&local_24);
    sub_080032EC(0x2a);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    break;
  default:
    goto switchD_080c2586_caseD_5;
  }
  *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
switchD_080c2586_caseD_5:
  return in_lr;
}

