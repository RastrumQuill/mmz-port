// sub_080D73F8 at 0x080D73F8 (thumb)

undefined4 sub_080D73F8(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xd)) {
  case 0:
    DAT_0202fb28 = 0x280;
    DAT_0202f928 = 7;
    if (*(char *)(param_1 + 0x11) == '\0') {
      sub_0800393C(&DAT_085d83e8,0xfe00);
      sub_08003E14(&DAT_085d83f4,(DAT_0202f928 - 6) * 0x20 + 0x200);
    }
    sub_08017700(param_1,0x8c02);
    if ((*(byte *)(param_1 + 0x11) & 2) != 0) {
      *(undefined *)(param_1 + 0x25) = 0xf;
    }
    *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0x54);
    uVar2 = sub_0800A104(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(undefined4 *)(param_1 + 0x58) = uVar2;
    if ((*(byte *)(param_1 + 0x11) & 1) == 0) {
      *(undefined4 *)(param_1 + 0x5c) = 0xffffff00;
      iVar3 = DAT_020302c0 + 0x87ff;
    }
    else {
      *(undefined4 *)(param_1 + 0x5c) = 0x100;
      iVar3 = DAT_020302c0 + -0x8800;
    }
    *(int *)(param_1 + 0x54) = iVar3;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  case 1:
    sub_080177F4(param_1);
    iVar5 = *(int *)(param_1 + 0x5c);
    iVar3 = *(int *)(param_1 + 0x54) + iVar5;
    *(int *)(param_1 + 0x54) = iVar3;
    if (((iVar5 < 0) && (iVar4 = *(int *)(param_1 + 100), iVar3 <= iVar4)) ||
       ((0 < iVar5 && (iVar4 = *(int *)(param_1 + 100), iVar4 <= iVar3)))) {
      *(int *)(param_1 + 0x54) = iVar4;
      sub_08017700(param_1,0x8c00);
      *(undefined *)(param_1 + 0x12) = 8;
LAB_080d7548:
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    }
    break;
  case 2:
    sub_080177F4(param_1);
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != '\0') {
      return in_lr;
    }
    sub_08017700(param_1,0x8c01);
    sub_080177F4(param_1);
    goto LAB_080d7548;
  case 3:
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 1) == 0) {
      return in_lr;
    }
    sub_08017700(param_1,0x8c03);
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  case 4:
    sub_080177F4(param_1);
    break;
  default:
    break;
  }
  return in_lr;
}

