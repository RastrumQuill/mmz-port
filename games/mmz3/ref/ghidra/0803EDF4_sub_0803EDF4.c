// sub_0803EDF4 at 0x0803EDF4 (thumb)

undefined4 sub_0803EDF4(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    sub_08017700(param_1,*(short *)(param_1 + 200) + 3U | 0xa200);
    if (((((*(uint *)(param_1 + 0x8c) & 0x200) == 0) && (*(short *)(param_1 + 0xa4) != 0)) ||
        ((DAT_020301a8 & 8) != 0)) || (cVar1 = *(char *)(param_1 + 0xf), cVar1 != '\x01')) {
      cVar1 = '\n';
    }
    *(char *)(param_1 + 0xe) = cVar1;
    *(uint *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined4 *)(param_1 + 0x5c) = 0;
  case 1:
  case 10:
    sub_080177F4(param_1);
    break;
  case 2:
    *(undefined4 *)(param_1 + 0x60) = 0;
    sub_0800471C(0x2f,*(undefined *)(param_1 + 10));
    break;
  case 3:
    if (*(int *)(param_1 + 0xc4) == 0) {
      sub_0809BE34(param_1,param_1 + 0x54,0xa21a,*(byte *)(param_1 + 10) >> 4 & 1);
    }
    else {
      sub_0809BE34(param_1,param_1 + 0x54,0xa205,*(byte *)(param_1 + 10) >> 4 & 1);
    }
    sub_08017700(param_1,*(short *)(param_1 + 200) + 4U | 0xa200);
    sub_080177F4(param_1);
    *(undefined *)(param_1 + 0x12) = 0x44;
    break;
  case 4:
    sub_080177F4(param_1);
    if ((*(char *)(param_1 + 0x12) != '\0') &&
       (cVar1 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar1, cVar1 != '\0')) {
      return in_lr;
    }
  case 0xb:
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 0x80) == 0) {
      return in_lr;
    }
    *(undefined *)(param_1 + 0xe) = 0x14;
    return in_lr;
  default:
    goto switchD_0803ee08_caseD_5;
  case 0x14:
    *(undefined *)(param_1 + 0x12) = 0x50;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 0x15:
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 0x80) == 0) {
      return in_lr;
    }
    break;
  case 0x16:
    if (*(char *)(param_1 + 0xf) == '\x01') {
      if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
        puVar3 = &DAT_0835e5b0;
      }
      else {
        puVar3 = &DAT_0835e5b8;
      }
    }
    else if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      puVar3 = &DAT_0835e5a0;
    }
    else {
      puVar3 = &DAT_0835e5a8;
    }
    uVar2 = sub_080C73F8(param_1,puVar3);
    *(undefined4 *)(param_1 + 0xc0) = uVar2;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 0x17:
    if (*(byte *)(*(int *)(param_1 + 0xc0) + 0xc) < 2) {
      return in_lr;
    }
    break;
  case 0x18:
    *(undefined *)(param_1 + 0x12) = 0x30;
    DAT_020301b2 = DAT_020301b2 | 2;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 0x19:
    if ((*(char *)(param_1 + 0x12) == '\0') ||
       (cVar1 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar1, cVar1 == '\0')) {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    }
    goto switchD_0803ee08_caseD_5;
  }
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
switchD_0803ee08_caseD_5:
  return in_lr;
}

