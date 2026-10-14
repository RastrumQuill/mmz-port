// sub_08041074 at 0x08041074 (thumb)

/* WARNING: Type propagation algorithm not settling */

undefined4 sub_08041074(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    sub_08007390(param_1 + 0x74,&DAT_0835e68c);
    *(undefined *)(param_1 + 0x12) = 4;
    sub_08017700(param_1,0xa404);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 1:
    sub_080177F4(param_1);
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 == '\0') {
      cVar1 = *(char *)(param_1 + 0xe) + '\x01';
LAB_08041238:
      *(char *)(param_1 + 0xe) = cVar1;
    }
    break;
  case 2:
    sub_0800471C(0x67);
    iVar2 = *(int *)(param_1 + 0xbc) - *(int *)(param_1 + 0x54);
    if (0x6000 < iVar2 + 0x3000U) {
      if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
        if (0 < iVar2) goto LAB_08041122;
      }
      else if (0 >= iVar2) {
LAB_08041122:
        *(undefined *)(param_1 + 0xd) = 4;
        *(undefined *)(param_1 + 0xe) = 0;
        sub_08041240(param_1);
        return in_lr;
      }
    }
    sub_08017700(param_1,0xa405);
    *(undefined4 *)(param_1 + 0x5c) = 0xfffffd00;
    uVar3 = 0xfffffd00;
    if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
      uVar3 = 0x300;
    }
    *(undefined4 *)(param_1 + 0x5c) = uVar3;
    *(undefined4 *)(param_1 + 0x60) = 0xfffffc00;
    *(undefined *)(param_1 + 0x12) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 3:
    iVar2 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x54) = iVar2;
    if (0xc000 < (*(int *)(param_1 + 0xbc) - iVar2) + 0x6000U) {
      *(int *)(param_1 + 0x54) = iVar2 - *(int *)(param_1 + 0x5c);
    }
    iVar2 = *(int *)(param_1 + 0x60) + 0x40;
    *(int *)(param_1 + 0x60) = iVar2;
    if (0x700 < iVar2) {
      *(undefined4 *)(param_1 + 0x60) = 0x700;
    }
    if ((*(char *)(param_1 + 0x12) == '\0') && (0 < *(int *)(param_1 + 0x60))) {
      sub_08017700(param_1,0xa406);
      *(undefined *)(param_1 + 0x12) = 1;
    }
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    iVar2 = sub_08009B28(*(undefined4 *)(param_1 + 0x54));
    if (iVar2 < 0) {
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar2;
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    sub_080177F4(param_1);
    break;
  case 4:
    *(undefined *)(param_1 + 0x12) = 4;
    sub_08017700(param_1,0xa407);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 5:
    sub_080177F4(param_1);
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != '\0') {
      return in_lr;
    }
    iVar2 = *(int *)(param_1 + 0xb8) - *(int *)(param_1 + 0x54);
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      if (*(int *)(param_1 + 0xb8) != *(int *)(param_1 + 0x54) && -1 < iVar2) goto LAB_08041230;
LAB_08041236:
      cVar1 = '\x02';
    }
    else {
      if (0 < iVar2) goto LAB_08041236;
LAB_08041230:
      cVar1 = '\0';
      *(undefined *)(param_1 + 0xd) = 0;
    }
    goto LAB_08041238;
  default:
    break;
  }
  return in_lr;
}

