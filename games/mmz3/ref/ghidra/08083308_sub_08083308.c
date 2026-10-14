// sub_08083308 at 0x08083308 (thumb)

undefined4 sub_08083308(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  int local_14;
  int local_10;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x68);
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 1:
    sub_080177F4(param_1);
    iVar3 = *(int *)(param_1 + 0x60) + -0x40;
    *(int *)(param_1 + 0x60) = iVar3;
    if (iVar3 < -0x300) {
      *(undefined4 *)(param_1 + 0x60) = 0xfffffd00;
    }
    iVar3 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x58) = iVar3;
    iVar4 = *(int *)(param_1 + 0x68) + -0x7a00;
    if (iVar4 <= iVar3) {
      return in_lr;
    }
    *(int *)(param_1 + 0x58) = iVar4;
    *(undefined *)(param_1 + 0x12) = 0x14;
    break;
  case 2:
    if (*(char *)(param_1 + 0x12) == '\0') {
      return in_lr;
    }
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    goto joined_r0x080835bc;
  case 3:
    sub_08007390(param_1 + 0x74,&DAT_08364a00);
    *(undefined *)(param_1 + 0xf) = 4;
    *(undefined *)(param_1 + 0x12) = 0x40;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 4:
    sub_08017700(param_1,0x902);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
    *(undefined *)(param_1 + 0x4c) = 1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | 0x10;
    *(undefined *)(param_1 + 0x24) = 0;
    sub_08007390(param_1 + 0x74,&DAT_08364a60);
    *(undefined4 *)(param_1 + 0xbc) = 0;
    *(undefined4 *)(param_1 + 0x5c) = 0xfffffe00;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
switchD_0808331e_caseD_5:
    piVar2 = (int *)(param_1 + 0xbc);
    if ((*piVar2 < -0x7800) &&
       (iVar3 = *(int *)(param_1 + 0x5c) + -0x40, *(int *)(param_1 + 0x5c) = iVar3, iVar3 < -0x80))
    {
      *(undefined4 *)(param_1 + 0x5c) = 0xffffff80;
    }
    iVar3 = *piVar2 + *(int *)(param_1 + 0x5c);
    *piVar2 = iVar3;
    *(int *)(param_1 + 0x54) = iVar3 + *(int *)(*(int *)(param_1 + 0x28) + 0x54) + -0x1300;
    sub_080177F4(param_1);
    if (-0x8001 < *piVar2) {
LAB_0808354e:
      if (*(char *)(param_1 + 0x12) == '\0') {
        return in_lr;
      }
      cVar1 = *(char *)(param_1 + 0x12) + -1;
      *(char *)(param_1 + 0x12) = cVar1;
      if (cVar1 != '\0') {
        return in_lr;
      }
      *(undefined *)(param_1 + 0xe) = 10;
      return in_lr;
    }
    cVar1 = *(char *)(param_1 + 0xf) + -1;
    *(char *)(param_1 + 0xf) = cVar1;
    if (cVar1 != '\0') {
      *(undefined *)(param_1 + 0xe) = 6;
      return in_lr;
    }
LAB_08083548:
    *(undefined *)(param_1 + 0xe) = 0x14;
    return in_lr;
  case 5:
    goto switchD_0808331e_caseD_5;
  case 6:
    sub_08017700(param_1,0x902);
    sub_08007390(param_1 + 0x74,&DAT_08364a60);
    *(undefined4 *)(param_1 + 0xbc) = 0xffff8000;
    *(undefined4 *)(param_1 + 0x5c) = 0x200;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 7:
    piVar2 = (int *)(param_1 + 0xbc);
    if ((-0x800 < *piVar2) &&
       (iVar3 = *(int *)(param_1 + 0x5c) + 0x40, *(int *)(param_1 + 0x5c) = iVar3, 0x80 < iVar3)) {
      *(undefined4 *)(param_1 + 0x5c) = 0x80;
    }
    iVar3 = *piVar2 + *(int *)(param_1 + 0x5c);
    *piVar2 = iVar3;
    *(int *)(param_1 + 0x54) = iVar3 + *(int *)(*(int *)(param_1 + 0x28) + 0x54) + -0x1300;
    sub_080177F4(param_1);
    if (*(int *)(param_1 + 0x54) <= *(int *)(*(int *)(param_1 + 0x28) + 0x54) + -0x1300)
    goto LAB_0808354e;
    cVar1 = *(char *)(param_1 + 0xf) + -1;
    *(char *)(param_1 + 0xf) = cVar1;
    if (cVar1 != '\0') {
      *(undefined *)(param_1 + 0xe) = 4;
      return in_lr;
    }
    goto LAB_08083548;
  default:
    goto switchD_0808331e_caseD_8;
  case 10:
    *(undefined *)(param_1 + 0x12) = 0x1e;
    if ((*(byte *)(param_1 + 0xf) & 1) == 0) {
      local_14 = *(int *)(param_1 + 0x54) + -0x600;
    }
    else {
      local_14 = *(int *)(param_1 + 0x54) + 0x600;
    }
    local_10 = *(int *)(param_1 + 0x58) + 0xe00;
    sub_0800471C(0x12d);
    sub_080AC298(&local_14,500,7,param_1);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 0xb:
    if (*(char *)(param_1 + 0x12) == '\0') {
      return in_lr;
    }
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
joined_r0x080835bc:
    if (cVar1 != '\0') {
      return in_lr;
    }
    break;
  case 0xc:
    *(undefined *)(param_1 + 0x12) = 0x40;
    if ((*(byte *)(param_1 + 0xf) & 1) != 0) {
      *(undefined *)(param_1 + 0xe) = 7;
      return in_lr;
    }
    *(undefined *)(param_1 + 0xe) = 5;
    return in_lr;
  case 0x14:
    sub_08017700(param_1,0x900);
    *(undefined *)(param_1 + 0x24) = 0;
    sub_08007390(param_1 + 0x74,&DAT_08364a00);
    *(int *)(param_1 + 0x54) = *(int *)(*(int *)(param_1 + 0x28) + 0x54) + -0x1300;
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined *)(param_1 + 0x12) = 0x28;
    break;
  case 0x15:
    cVar1 = *(char *)(param_1 + 0x12);
    if (cVar1 == '\0') {
      return in_lr;
    }
    *(char *)(param_1 + 0x12) = cVar1 + -1;
    if (cVar1 != '\x01') {
      return in_lr;
    }
    sub_08007390(param_1 + 0x74,&DAT_083649e8);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
    *(char *)(param_1 + 0x4c) = cVar1 + -1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
    break;
  case 0x16:
    sub_080177F4(param_1);
    iVar3 = *(int *)(param_1 + 0x60) + 0x80;
    *(int *)(param_1 + 0x60) = iVar3;
    if (0x300 < iVar3) {
      *(undefined4 *)(param_1 + 0x60) = 0x300;
    }
    iVar4 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x58) = iVar4;
    iVar3 = *(int *)(*(int *)(param_1 + 0x28) + 0x58) + -0x3a00;
    if (iVar4 <= iVar3) {
      return in_lr;
    }
    *(int *)(param_1 + 0x58) = iVar3;
    break;
  case 0x17:
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 0x18:
    *(int *)(param_1 + 0x58) = *(int *)(*(int *)(param_1 + 0x28) + 0x58) + -0x3a00;
    sub_080177F4(param_1);
    if (*(char *)(*(int *)(param_1 + 0x28) + 0xd) == '\x05') {
      return in_lr;
    }
    *(undefined *)(param_1 + 0xd) = 2;
    *(undefined *)(param_1 + 0xe) = 0;
    return in_lr;
  }
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
switchD_0808331e_caseD_8:
  return in_lr;
}

