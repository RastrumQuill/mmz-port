// sub_080A74FC at 0x080A74FC (thumb)

undefined4 sub_080A74FC(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 in_lr;
  
  if (1 < *(byte *)(*(int *)(param_1 + 0x28) + 0xc)) goto LAB_080a76c0;
  if ((*(int *)(*(int *)(param_1 + 0x28) + 0xc0) != 0) && (*(char *)(param_1 + 0xe) != '\x03')) {
    *(undefined *)(param_1 + 0xe) = 3;
  }
  if ((*(char *)(*(int *)(param_1 + 0x28) + 0xd) == '\v') && (*(char *)(param_1 + 0xe) != '\x03')) {
    *(undefined *)(param_1 + 0xe) = 3;
  }
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    if (*(char *)(param_1 + 0x11) == '\0') {
      iVar4 = sub_0800A4B4(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
      cVar1 = *(char *)(param_1 + 0xb5);
      if (cVar1 == '\0') {
        iVar2 = 0xc00;
      }
      else if (cVar1 == '\x01') {
        iVar2 = 0x4c00;
      }
      else if (cVar1 == '\x02') {
        iVar2 = 0x8c00;
      }
      else {
        if (cVar1 != '\x03') goto LAB_080a75be;
        iVar2 = 0xcc00;
      }
LAB_080a75bc:
      iVar4 = iVar4 + iVar2;
    }
    else {
      iVar4 = sub_0800A4B4(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
      if (*(char *)(param_1 + 0xb5) == '\0') {
        iVar2 = 0x2c00;
        goto LAB_080a75bc;
      }
      if (*(char *)(param_1 + 0xb5) == '\x01') {
        iVar2 = 0xac00;
        goto LAB_080a75bc;
      }
    }
LAB_080a75be:
    sub_08017700(param_1,0xb110);
    *(undefined *)(param_1 + 0x12) = 0x32;
    iVar2 = *(int *)(param_1 + 0x54);
    uVar3 = FUN_080fe2f8(iVar4 - iVar2,0x32);
    *(undefined4 *)(param_1 + 0x5c) = uVar3;
    iVar4 = sub_0800A104(iVar2,*(undefined4 *)(param_1 + 0x58));
    iVar4 = FUN_080fe2f8(80000 - (iVar4 - *(int *)(param_1 + 0x58)),*(undefined *)(param_1 + 0x12));
    *(int *)(param_1 + 0x60) = -iVar4;
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
    *(undefined *)(param_1 + 0x13) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 1:
    iVar4 = *(int *)(param_1 + 0x60) + 0x40;
    *(int *)(param_1 + 0x60) = iVar4;
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar4;
    if (0 < iVar4) {
      if (*(char *)(param_1 + 0x13) == '\0') {
        *(undefined *)(param_1 + 0x13) = 1;
        sub_08017700(param_1,0xb111);
      }
      if ((*(char *)(param_1 + 0x13) == '\x01') && (*(char *)(param_1 + 0x73) == '\x03')) {
        *(undefined *)(param_1 + 0x13) = 2;
        sub_08007390(param_1 + 0x74,&DAT_083684a4);
        sub_08017700(param_1,0xb112);
      }
    }
    sub_080177F4(param_1);
    if ((*(char *)(param_1 + 0x12) == '\0') ||
       (cVar1 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar1, cVar1 == '\0')) {
      *(undefined *)(param_1 + 0x12) = 0x28;
LAB_080a769a:
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    break;
  case 2:
    sub_080177F4(param_1);
    if ((*(char *)(param_1 + 0x12) != '\0') &&
       (cVar1 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar1, cVar1 != '\0')) {
      return in_lr;
    }
    goto LAB_080a769a;
  case 3:
    sub_08017700(param_1,0xb113);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 4:
    sub_080177F4(param_1);
    if (*(char *)(param_1 + 0x73) == '\x03') {
LAB_080a76c0:
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_083670d4)[*(byte *)(param_1 + 9)] + 8)
      ;
    }
    break;
  default:
    break;
  }
  return in_lr;
}

