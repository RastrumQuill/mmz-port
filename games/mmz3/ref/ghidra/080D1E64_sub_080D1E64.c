// sub_080D1E64 at 0x080D1E64 (thumb)

undefined4 sub_080D1E64(int param_1)

{
  char cVar1;
  short sVar2;
  int iVar3;
  undefined4 in_lr;
  int local_1c;
  undefined4 local_18;
  
  switch(*(undefined *)(param_1 + 0xd)) {
  case 0:
    DAT_0202fd52 = 0x34d;
    DAT_0202f752 = 9;
    sub_08017700(param_1,0xa114);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
    *(undefined *)(param_1 + 0x4c) = 1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | 0x10;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    sub_0800736C(param_1 + 0x74,&DAT_0836d338,param_1 + 0x54,9);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0;
    *(undefined *)(param_1 + 0x94) = 0x5a;
    sub_0800471C(0xf4);
    *(int *)(param_1 + 0x54) = DAT_020302c0 + 0x87ff;
    *(undefined *)(param_1 + 0x12) = 0x14;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  case 1:
    sub_080177F4(param_1);
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + -0x300;
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != '\0') {
      return in_lr;
    }
    *(undefined *)(param_1 + 0x12) = 8;
    sub_08017700(param_1,0xa100);
    break;
  case 2:
    sub_080177F4(param_1);
    iVar3 = *(int *)(param_1 + 0x54);
    *(int *)(param_1 + 0x54) = iVar3 + -0x200;
    if ((*(byte *)(param_1 + 0x12) & 3) == 0) {
      local_1c = iVar3 + -0xe00;
      local_18 = *(undefined4 *)(param_1 + 0x58);
      sub_080B2484(3,&local_1c);
      local_1c = *(int *)(param_1 + 0x54) + 0x800;
      sub_080B2484(3,&local_1c);
    }
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != '\0') {
      return in_lr;
    }
    sub_08017700(param_1,0xa11b);
    *(undefined4 *)(param_1 + 0x5c) = 0x200;
    *(undefined *)(param_1 + 0x12) = 0x20;
    break;
  case 3:
    sub_080177F4(param_1);
    local_1c = *(int *)(param_1 + 0x5c) * 0xf >> 4;
    *(int *)(param_1 + 0x5c) = local_1c;
    local_1c = *(int *)(param_1 + 0x54) - local_1c;
    *(int *)(param_1 + 0x54) = local_1c;
    if ((*(byte *)(param_1 + 0x12) & 7) == 0) {
      local_1c = local_1c + -0xc00;
      local_18 = *(undefined4 *)(param_1 + 0x58);
      sub_080B2484(3,&local_1c);
      local_1c = *(int *)(param_1 + 0x54) + 0x800;
      sub_080B2484(3,&local_1c);
    }
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    goto joined_r0x080d2252;
  case 4:
    sub_080177F4(param_1);
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 1) == 0) {
      return in_lr;
    }
    sub_08017700(param_1,0xa11c);
    *(undefined *)(param_1 + 0x12) = 0x3c;
    break;
  case 5:
    sub_080177F4(param_1);
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != '\0') {
      return in_lr;
    }
    sub_08017700(param_1,0xa109);
    DAT_0202fa52 = 0x200;
    DAT_0202f852 = 4;
    sub_0800393C(&DAT_085d7b8c,0x10000);
    sub_08003E14(&DAT_085d7b98,(DAT_0202f852 - 4) * 0x20 + 0x200);
    break;
  case 6:
  case 8:
  case 10:
    sub_080177F4(param_1);
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 2) == 0) {
      return in_lr;
    }
    sub_08017700(param_1,0xa10b);
    sub_080D0324(param_1,0xd);
    sub_0800471C(0xf5);
    sub_0801ACF8(2,param_1 + 0x54);
    break;
  case 7:
  case 9:
  case 0xb:
    sub_080177F4(param_1);
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    break;
  case 0xc:
    sub_080177F4(param_1);
    sub_08017700(param_1,0xa100);
    cVar1 = '\x0e';
    goto LAB_080d22ae;
  default:
    goto switchD_080d1e7a_caseD_d;
  case 0xe:
    sub_080177F4(param_1);
    if ((*(uint *)(param_1 + 0x8c) & 1) == 0) {
      return in_lr;
    }
    sub_08017700(param_1,0xa114);
    sub_0800471C(0xf4);
    sub_0800471C(0x52);
    *(undefined *)(param_1 + 0x12) = 8;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  case 0xf:
    sub_080177F4(param_1);
    iVar3 = *(int *)(param_1 + 0x54);
    *(int *)(param_1 + 0x54) = iVar3 + -0x200;
    if ((*(byte *)(param_1 + 0x12) & 3) == 0) {
      local_1c = iVar3 + -0xe00;
      local_18 = *(undefined4 *)(param_1 + 0x58);
      sub_080B2484(3,&local_1c);
      local_1c = *(int *)(param_1 + 0x54) + 0x800;
      sub_080B2484(3,&local_1c);
    }
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != '\0') {
      return in_lr;
    }
    sub_08017700(param_1,0xa11b);
    *(undefined4 *)(param_1 + 0x5c) = 0x400;
    *(undefined *)(param_1 + 0x12) = 0x18;
    break;
  case 0x10:
    sub_080177F4(param_1);
    local_1c = *(int *)(param_1 + 0x5c) * 7 >> 3;
    *(int *)(param_1 + 0x5c) = local_1c;
    local_1c = *(int *)(param_1 + 0x54) - local_1c;
    *(int *)(param_1 + 0x54) = local_1c;
    if ((*(byte *)(param_1 + 0x12) & 7) == 0) {
      local_1c = local_1c + -0xc00;
      local_18 = *(undefined4 *)(param_1 + 0x58);
      sub_080B2484(3,&local_1c);
      local_1c = *(int *)(param_1 + 0x54) + 0x800;
      sub_080B2484(3,&local_1c);
    }
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
joined_r0x080d2252:
    if (cVar1 != '\0') {
      return in_lr;
    }
    break;
  case 0x11:
    sub_080177F4(param_1);
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 4) == 0) {
      return in_lr;
    }
    sub_08017700(param_1,0xa11c);
    break;
  case 0x12:
    sub_080177F4(param_1);
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    sub_08017700(param_1,0xa100);
    break;
  case 0x13:
    sVar2 = sub_080D03E8(param_1,0xa100,1);
    if (sVar2 == 0) {
      return in_lr;
    }
  }
  cVar1 = *(char *)(param_1 + 0xd) + '\x01';
LAB_080d22ae:
  *(char *)(param_1 + 0xd) = cVar1;
switchD_080d1e7a_caseD_d:
  return in_lr;
}

