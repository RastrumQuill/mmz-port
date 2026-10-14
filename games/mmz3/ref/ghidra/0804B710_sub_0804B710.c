// sub_0804B710 at 0x0804B710 (thumb)

undefined4 sub_0804B710(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    sub_08017700(param_1,0xa801);
    *(undefined *)(param_1 + 0x12) = 0x3c;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 1:
    sub_080177F4(param_1);
    if (*(char *)(param_1 + 0x73) == '\x03') {
LAB_0804b790:
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    break;
  case 2:
    *(int *)(param_1 + 0x58) =
         *(int *)(param_1 + 0x58) +
         (((*(int *)(param_1 + 0xd4) + -0x4800) - *(int *)(param_1 + 0x58)) * 0x20 >> 8);
    sub_080177F4(param_1);
    if ((*(char *)(param_1 + 0x12) != '\0') &&
       (cVar2 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar2, cVar2 != '\0')) {
      return in_lr;
    }
    goto LAB_0804b790;
  case 3:
    sub_08017700(param_1,0xa802);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 4:
    sub_080177F4(param_1);
    if ((*(char *)(param_1 + 0x73) == '\x03') && (bVar1 = DAT_020301b2 & 1, (DAT_020301b2 & 1) == 0)
       ) {
      *(undefined *)(param_1 + 0xd) = 3;
      *(byte *)(param_1 + 0xe) = bVar1;
    }
    break;
  default:
    break;
  }
  return in_lr;
}

