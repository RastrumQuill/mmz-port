// sub_08098B58 at 0x08098B58 (thumb)

undefined4 sub_08098B58(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    sub_08017700(param_1,0xd503);
    sub_08007390(param_1 + 0x74,&DAT_08366ca0);
    if (*(int *)(DAT_0202f5c0 + 0x54) < *(int *)(param_1 + 0x54)) {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
      *(undefined *)(param_1 + 0x4c) = 0;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
      *(undefined *)(param_1 + 0xb8) = 0;
    }
    else {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
      *(undefined *)(param_1 + 0x4c) = 1;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | 0x10;
      *(undefined *)(param_1 + 0xb8) = 1;
    }
    *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) >> 1;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
switchD_08098b6c_caseD_1:
    sub_080177F4(param_1);
    iVar2 = *(int *)(param_1 + 0x60) + 0x40;
    *(int *)(param_1 + 0x60) = iVar2;
    if (0x700 < iVar2) {
      *(undefined4 *)(param_1 + 0x60) = 0x700;
    }
    iVar4 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x58) = iVar4;
    iVar2 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x54) = iVar2;
    if (*(int *)(param_1 + 0x5c) < 1) {
      iVar3 = 0x800;
    }
    else {
      iVar3 = -0x800;
    }
    iVar2 = sub_08009B28(iVar2 + iVar3,iVar4);
    if (iVar2 != 0) {
      *(undefined4 *)(param_1 + 0x60) = 0;
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar2;
LAB_08098c9a:
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
switchD_08098b6c_caseD_6:
    return in_lr;
  case 1:
    goto switchD_08098b6c_caseD_1;
  case 2:
    *(char *)(param_1 + 0xbb) = *(char *)(param_1 + 0xbb) + '\x01';
    sub_08017700(param_1,0xd504);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 3:
    sub_080177F4(param_1);
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    goto LAB_08098c9a;
  case 4:
    sub_08017700(param_1,0xd500);
    *(undefined *)(param_1 + 0x12) = 0x14;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 5:
    sub_080177F4(param_1);
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 == '\0') {
      *(undefined *)(param_1 + 0xd) = 2;
      *(undefined *)(param_1 + 0xe) = 0;
    }
  default:
    goto switchD_08098b6c_caseD_6;
  }
}

