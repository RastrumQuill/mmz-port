// sub_0803E860 at 0x0803E860 (thumb)

undefined4 sub_0803E860(int param_1)

{
  char cVar1;
  uint uVar2;
  uint *puVar3;
  undefined4 in_lr;
  
  sub_080041E4(0xb);
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    if (((DAT_020301a8 & 1) != 0) && ((DAT_020301b2 & 1) == 0)) {
      DAT_020301a8 = DAT_020301a8 & 0xfffe | 0x10;
    }
    *(undefined *)(param_1 + 0x12) = 0x3c;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 1:
    *(int *)(param_1 + 0x58) =
         *(int *)(param_1 + 0x58) +
         ((*(int *)(param_1 + 0xb8) - *(int *)(param_1 + 0x58)) * 0x20 >> 8);
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 0x80) == 0) {
      return in_lr;
    }
    *(uint *)(param_1 + 0xd4) = *(uint *)(param_1 + 0xd4) | 2;
    *(undefined *)(param_1 + 0x12) = 0x3c;
    break;
  case 2:
    puVar3 = (uint *)(param_1 + 0xd4);
    *puVar3 = *puVar3 & 0xfffffffd;
    if ((*(char *)(param_1 + 0x12) == '\0') ||
       (cVar1 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar1, cVar1 == '\0')) {
      uVar2 = DAT_0202f608 * 0x343fd + 0x269ec3;
      DAT_0202f608 = uVar2 & 0x7fffffff;
      *(byte *)(param_1 + 0x12) = ((byte)(uVar2 * 2 >> 0x11) & 0xf) + 0x28;
      sub_08017BF8(param_1);
    }
    *(int *)(param_1 + 0x58) =
         *(int *)(param_1 + 0x58) +
         ((*(int *)(param_1 + 0xb8) - *(int *)(param_1 + 0x58)) * 0x20 >> 8);
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 1) == 0) {
      return in_lr;
    }
    *puVar3 = *puVar3 | 8;
    break;
  case 3:
    puVar3 = (uint *)(param_1 + 0xd4);
    *puVar3 = *puVar3 & 0xfffffff7;
    *(int *)(param_1 + 0x58) =
         *(int *)(param_1 + 0x58) +
         ((*(int *)(param_1 + 0xb8) - *(int *)(param_1 + 0x58)) * 0x20 >> 8);
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 1) != 0) {
      return in_lr;
    }
    *puVar3 = *puVar3 | 2;
    *(undefined *)(param_1 + 0x12) = 0x3c;
    break;
  case 4:
    puVar3 = (uint *)(param_1 + 0xd4);
    *puVar3 = *puVar3 & 0xfffffffd;
    *(int *)(param_1 + 0x58) =
         *(int *)(param_1 + 0x58) +
         ((*(int *)(param_1 + 0xb8) - *(int *)(param_1 + 0x58)) * 0x20 >> 8);
    if ((*(char *)(param_1 + 0x12) == '\0') ||
       (cVar1 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar1, cVar1 == '\0')) {
      uVar2 = DAT_0202f608 * 0x343fd + 0x269ec3;
      DAT_0202f608 = uVar2 & 0x7fffffff;
      *(byte *)(param_1 + 0x12) = ((byte)(uVar2 * 2 >> 0x11) & 0xf) + 0x28;
      sub_08017BF8(param_1);
    }
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 1) == 0) {
      return in_lr;
    }
    *puVar3 = *puVar3 | 8;
    break;
  case 5:
    *(uint *)(param_1 + 0xd4) = *(uint *)(param_1 + 0xd4) & 0xfffffff7;
    *(int *)(param_1 + 0x58) =
         *(int *)(param_1 + 0x58) +
         ((*(int *)(param_1 + 0xb8) - *(int *)(param_1 + 0x58)) * 0x20 >> 8);
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 0x80) == 0) {
      return in_lr;
    }
    break;
  default:
    goto switchD_0803e87a_caseD_6;
  }
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
switchD_0803e87a_caseD_6:
  return in_lr;
}

