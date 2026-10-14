// sub_080C7F54 at 0x080C7F54 (thumb)

undefined4 sub_080C7F54(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    sub_080175BC(param_1);
    *(undefined *)(param_1 + 0x24) = 0;
    *(undefined2 *)(param_1 + 0x50) = 0x100;
    *(undefined2 *)(param_1 + 0x52) = 0x100;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
    *(undefined *)(param_1 + 0x74) = 0;
    *(undefined4 *)(param_1 + 0x54) = 0xf000;
    *(undefined4 *)(param_1 + 0x58) = 0xa000;
    cVar1 = *(char *)(param_1 + 0x11);
    if (cVar1 == '\0') {
      *(undefined4 *)(param_1 + 0x54) = 0x11000;
      *(undefined4 *)(param_1 + 0x58) = 0xa800;
      *(undefined *)(param_1 + 0x13) = 0;
    }
    else {
      if (cVar1 == '\x01') {
        iVar2 = 0x800;
      }
      else {
        if (cVar1 != '\x02') goto LAB_080c7ff6;
        iVar2 = 0x3800;
      }
      *(int *)(param_1 + 0x54) = iVar2 + 0xf000;
      *(undefined4 *)(param_1 + 0x58) = 0xac00;
      *(char *)(param_1 + 0x13) = cVar1;
    }
LAB_080c7ff6:
    sub_08017700(param_1,*(undefined2 *)(&DAT_0836c160 + (uint)*(byte *)(param_1 + 0x13) * 2));
    *(undefined4 *)(param_1 + 0x60) = 0x100;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 1:
    if (*(char *)(param_1 + 0x74) != '\0') {
      *(undefined *)(param_1 + 0x12) = 5;
LAB_080c8052:
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
LAB_080c8058:
    sub_080177F4(param_1);
    break;
  case 2:
    iVar2 = *(int *)(param_1 + 0x60) + -0x33;
    *(int *)(param_1 + 0x60) = iVar2;
    if (iVar2 < 0) {
      *(undefined4 *)(param_1 + 0x60) = 0;
    }
    *(undefined2 *)(param_1 + 0x50) = (short)*(undefined4 *)(param_1 + 0x60);
    if ((*(char *)(param_1 + 0x12) == '\0') ||
       (cVar1 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar1, cVar1 == '\0')) {
      *(undefined2 *)(param_1 + 0x50) = 0;
      goto LAB_080c8052;
    }
    goto LAB_080c8058;
  case 3:
    if (*(char *)(param_1 + 0x74) == '\x01') {
      if (*(char *)(param_1 + 0x13) == '\0') {
        cVar1 = '\x02';
      }
      else {
        cVar1 = *(char *)(param_1 + 0x13) + -1;
      }
    }
    else if (*(byte *)(param_1 + 0x13) < 2) {
      cVar1 = *(byte *)(param_1 + 0x13) + 1;
    }
    else {
      cVar1 = '\0';
    }
    *(char *)(param_1 + 0x13) = cVar1;
    iVar2 = sub_080FE4D8(*(undefined *)(param_1 + 0x13),3);
    sub_08017700(param_1,*(undefined2 *)(&DAT_0836c160 + ((uint)(iVar2 << 0x18) >> 0x17)));
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined *)(param_1 + 0x12) = 5;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 4:
    iVar2 = *(int *)(param_1 + 0x60) + 0x33;
    *(int *)(param_1 + 0x60) = iVar2;
    if (0x100 < iVar2) {
      *(undefined4 *)(param_1 + 0x60) = 0x100;
    }
    *(undefined2 *)(param_1 + 0x50) = (short)*(undefined4 *)(param_1 + 0x60);
    sub_080177F4(param_1);
    if ((*(char *)(param_1 + 0x12) == '\0') ||
       (cVar1 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar1, cVar1 == '\0')) {
      *(undefined *)(param_1 + 0x74) = 0;
      *(undefined2 *)(param_1 + 0x50) = 0x100;
      *(undefined *)(param_1 + 0xe) = 1;
    }
    break;
  default:
    break;
  }
  return in_lr;
}

