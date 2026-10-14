// sub_080D4434 at 0x080D4434 (thumb)

undefined4 sub_080D4434(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xd)) {
  case 0:
    uVar5 = sub_0800A104(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(undefined4 *)(param_1 + 0x58) = uVar5;
    sub_080258F0(0,8);
    *(undefined2 *)(param_1 + 0x20) = 0x200;
    *(undefined *)(param_1 + 0x22) = 4;
    sub_08017700(param_1,0x3f05);
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  case 1:
    sub_080177F4(param_1);
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 1) == 0) {
      return in_lr;
    }
    *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0x54);
    *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x58) + -0xc00;
    sub_0800471C(0x11a);
    iVar3 = sub_080BCE88(param_1 + 100,3,0);
    *(int *)(param_1 + 0x28) = iVar3;
    *(undefined *)(iVar3 + 0x7c) = 0;
    *(undefined *)(*(int *)(param_1 + 0x28) + 0x74) = 0;
    *(undefined *)(*(int *)(param_1 + 0x28) + 0x75) = 0;
    *(undefined *)(*(int *)(param_1 + 0x28) + 0x76) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x78) = 0;
    *(undefined *)(param_1 + 0x12) = 0;
    *(undefined *)(param_1 + 0x13) = 0;
    break;
  case 2:
    sub_080177F4(param_1);
    *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + '\x01';
    *(int *)(*(int *)(param_1 + 0x28) + 0x78) =
         (short)(&DAT_080fe64c)[*(byte *)(param_1 + 0x12) >> 1] * 0x18;
    *(uint *)(*(int *)(param_1 + 0x28) + 0x78) =
         *(int *)(*(int *)(param_1 + 0x28) + 0x78) + (*(byte *)(param_1 + 0x13) & 1) * 0x800;
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 1) != 0) {
      if (*(char *)(param_1 + 0x12) < '\0') {
        return in_lr;
      }
      *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x03';
      return in_lr;
    }
    if (3 < *(byte *)(param_1 + 0x12)) {
      *(byte *)(param_1 + 0x12) = *(byte *)(param_1 + 0x12) - 3;
      return in_lr;
    }
    *(undefined *)(*(int *)(param_1 + 0x28) + 0x77) = 1;
    break;
  case 3:
    sub_080177F4(param_1);
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 2) == 0) {
      return in_lr;
    }
    *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0x54);
    *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x58) + -0xc00;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    sub_0800736C(param_1 + 0x74,&DAT_0836d448,param_1 + 0x54,1);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0;
    sub_0800471C(0x11a);
    iVar3 = sub_080BCE88(param_1 + 100,3,0);
    *(int *)(param_1 + 0x28) = iVar3;
    *(undefined *)(iVar3 + 0x7c) = 0;
    *(undefined *)(*(int *)(param_1 + 0x28) + 0x74) = 0;
    *(undefined *)(*(int *)(param_1 + 0x28) + 0x75) = 0;
    *(undefined *)(*(int *)(param_1 + 0x28) + 0x76) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x78) = 0;
    *(undefined *)(param_1 + 0x12) = 0;
    *(undefined *)(param_1 + 0x13) = 0;
    break;
  case 4:
    sub_080177F4(param_1);
    *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + '\x01';
    if (*(byte *)(param_1 + 0x12) < 0x40) {
      *(byte *)(param_1 + 0x12) = *(byte *)(param_1 + 0x12) + 0x10;
    }
    if (((*(byte *)(param_1 + 0x13) & 1) == 0) ||
       ((3 < *(byte *)(param_1 + 0x13) &&
        (uVar4 = DAT_0202f608 * 0x343fd + 0x269ec3, DAT_0202f608 = uVar4 & 0x7fffffff,
        (uVar4 * 2 >> 0x11 & 1) != 0)))) {
      *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x78) = 0;
    }
    else {
      *(int *)(*(int *)(param_1 + 0x28) + 0x78) =
           (int)(short)(&DAT_080fe64c)[*(byte *)(param_1 + 0x12)] << 6;
    }
    if (*(byte *)(param_1 + 0x13) < 0x41) {
      return in_lr;
    }
    *(undefined *)(*(int *)(param_1 + 0x28) + 0x77) = 1;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    break;
  case 5:
    sub_080177F4(param_1);
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 4) == 0) {
      return in_lr;
    }
    break;
  case 6:
    sub_08017700(param_1,0x3501);
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  case 7:
    sub_080177F4(param_1);
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    break;
  case 8:
    sub_08017700(param_1,0);
    *(undefined *)(param_1 + 0x12) = 3;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  case 9:
    sub_080177F4(param_1);
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 != '\0') {
      return in_lr;
    }
    break;
  case 10:
    sub_08017700(param_1,0x3300);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    sub_0800736C(param_1 + 0x74,&DAT_0836d460,param_1 + 0x54,1);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0;
    *(undefined *)(param_1 + 0x12) = 0;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  case 0xb:
    sub_080177F4(param_1);
    if ((CONCAT11(*(undefined *)(param_1 + 0x1e),*(undefined *)(param_1 + 0x70)) != 0) &&
       (*(char *)(param_1 + 0x73) == '\x03')) {
      sub_08017700(param_1,0);
    }
    if ((*(uint *)(param_1 + 0x8c) & 1) != 0) {
      bVar1 = *(char *)(param_1 + 0x12) + 1;
      *(byte *)(param_1 + 0x12) = bVar1;
      if ((bVar1 & 1) == 0) {
        sub_08017700(param_1,0x3200);
      }
      else {
        sub_08017700(param_1,0x3100);
      }
      sub_0800471C(0x13b);
    }
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 8) == 0) {
      return in_lr;
    }
    *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0x54);
    *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x58) + -0xc00;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    sub_0800736C(param_1 + 0x74,&DAT_0836d448,param_1 + 0x54,1);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0;
    sub_0800471C(0x11a);
    iVar3 = sub_080BCE88(param_1 + 100,3,0);
    *(int *)(param_1 + 0x28) = iVar3;
    *(undefined *)(iVar3 + 0x7c) = 0;
    *(undefined *)(*(int *)(param_1 + 0x28) + 0x74) = 0;
    *(undefined *)(*(int *)(param_1 + 0x28) + 0x75) = 0;
    *(undefined *)(*(int *)(param_1 + 0x28) + 0x76) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x78) = 0;
    *(undefined *)(param_1 + 0x12) = 0;
    *(undefined *)(param_1 + 0x13) = 0;
    break;
  case 0xc:
    sub_080177F4(param_1);
    if ((CONCAT11(*(undefined *)(param_1 + 0x1e),*(undefined *)(param_1 + 0x70)) != 0) &&
       (*(char *)(param_1 + 0x73) == '\x03')) {
      sub_08017700(param_1,0);
    }
    *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + '\x01';
    if (*(byte *)(param_1 + 0x12) < 0x40) {
      *(byte *)(param_1 + 0x12) = *(byte *)(param_1 + 0x12) + 0x10;
    }
    if (((*(byte *)(param_1 + 0x13) & 1) == 0) ||
       ((3 < *(byte *)(param_1 + 0x13) &&
        (uVar4 = DAT_0202f608 * 0x343fd + 0x269ec3, DAT_0202f608 = uVar4 & 0x7fffffff,
        (uVar4 * 2 >> 0x11 & 1) != 0)))) {
      *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x78) = 0;
    }
    else {
      *(int *)(*(int *)(param_1 + 0x28) + 0x78) =
           (int)(short)(&DAT_080fe64c)[*(byte *)(param_1 + 0x12)] << 6;
    }
    if (*(byte *)(param_1 + 0x13) < 0x41) {
      return in_lr;
    }
    *(undefined *)(*(int *)(param_1 + 0x28) + 0x77) = 1;
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 0x10) != 0) {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
      sub_0800736C(param_1 + 0x74,&DAT_0836d478,param_1 + 0x54,1);
      *(int *)(param_1 + 0xa0) = param_1;
      *(undefined4 *)(param_1 + 0x98) = 0;
      sub_08017700(param_1,0x3500);
      break;
    }
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    sub_0800736C(param_1 + 0x74,&DAT_0836d460,param_1 + 0x54,1);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0;
    cVar2 = '\v';
    goto LAB_080d49ac;
  case 0xd:
    sub_080177F4(param_1);
    if (*(char *)(param_1 + 0x73) != '\x04') {
      return in_lr;
    }
    sub_08017700(param_1,0x3f05);
    break;
  case 0xe:
    sub_080177F4(param_1);
    if ((*(uint *)(param_1 + 0x8c) & 1) == 0) {
      return in_lr;
    }
    sub_08017700(param_1,0x3200);
    if (((DAT_020301a8 & 1) != 0) && ((DAT_020301b2 & 1) == 0)) {
      DAT_020301a8 = DAT_020301a8 & 0xfffe | 0x10;
    }
    uVar5 = sub_080C73F8(param_1,&DAT_0836d5d0);
    *(undefined4 *)(param_1 + 0x2c) = uVar5;
    break;
  case 0xf:
    sub_080177F4(param_1);
    if (*(byte *)(*(int *)(param_1 + 0x2c) + 0xc) < 2) {
      return in_lr;
    }
    DAT_020301b2 = DAT_020301b2 | 2;
    break;
  default:
    goto switchD_080d4448_caseD_10;
  }
  cVar2 = *(char *)(param_1 + 0xd) + '\x01';
LAB_080d49ac:
  *(char *)(param_1 + 0xd) = cVar2;
switchD_080d4448_caseD_10:
  return in_lr;
}

