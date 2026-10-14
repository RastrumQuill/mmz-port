// sub_080D0C74 at 0x080D0C74 (thumb)

undefined4 sub_080D0C74(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xd)) {
  case 0:
    uVar3 = sub_0800A104(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(undefined4 *)(param_1 + 0x58) = uVar3;
    if (*(char *)(param_1 + 0x11) == '\0') {
      sub_0800393C(&DAT_085d83e8,(DAT_0202fb28 - 0x290) * 0x20 + 0x10000);
      sub_08003E14(&DAT_085d83f4,(DAT_0202f928 - 6) * 0x20 + 0x200);
    }
    sub_08017700(param_1,0x8c05);
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  case 1:
    sub_080177F4(param_1);
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 1) != 0) {
      sub_08017700(param_1,0x8c06);
      *(undefined *)(param_1 + 0x12) = 0x2d;
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    }
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 2) != 0) {
      sub_08017700(param_1,0x8c07);
      *(undefined *)(param_1 + 0x12) = 0xe;
      *(undefined *)(param_1 + 0xd) = 3;
    }
    break;
  case 2:
    bVar1 = *(byte *)(param_1 + 0x12);
    *(byte *)(param_1 + 0x12) = bVar1 + 1;
    if (0x2c < bVar1) {
      sub_0800471C(0x59);
      *(undefined *)(param_1 + 0x12) = 0;
    }
    sub_080177F4(param_1);
    break;
  case 3:
    sub_080177F4(param_1);
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 0x1c0;
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 != '\0') {
      return in_lr;
    }
    sub_08017700(param_1,0x8c05);
    *(undefined *)(param_1 + 0x12) = 8;
    goto LAB_080d0e08;
  case 4:
    sub_080177F4(param_1);
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 != '\0') {
      return in_lr;
    }
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
    *(undefined *)(param_1 + 0x4c) = 0;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
    *(undefined *)(param_1 + 0x12) = 8;
    goto LAB_080d0e08;
  case 5:
    sub_080177F4(param_1);
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 != '\0') {
      return in_lr;
    }
    sub_08017700(param_1,0x8c06);
LAB_080d0e08:
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    break;
  case 6:
    sub_080177F4(param_1);
  }
  return in_lr;
}

