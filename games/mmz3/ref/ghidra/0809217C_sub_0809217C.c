// sub_0809217C at 0x0809217C (thumb)

undefined4 sub_0809217C(int param_1)

{
  char cVar1;
  byte *pbVar2;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    if (*(char *)(param_1 + 0x10) == '\0') {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef | 1;
      *(undefined *)(param_1 + 0x4c) = 0;
      pbVar2 = (byte *)(param_1 + 0x4a);
      *pbVar2 = *pbVar2 & 0xef;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xdf;
      *(undefined *)(param_1 + 0x4d) = 0;
      *pbVar2 = *pbVar2 & 0xdf;
      *(undefined *)(param_1 + 0x24) = 0;
      sub_08017700(param_1,0xb601);
      *(undefined *)(param_1 + 0xe) = 1;
    }
    else {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef | 1;
      *(undefined *)(param_1 + 0x4c) = 0;
      pbVar2 = (byte *)(param_1 + 0x4a);
      *pbVar2 = *pbVar2 & 0xef;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xdf;
      *(undefined *)(param_1 + 0x4d) = 0;
      *pbVar2 = *pbVar2 & 0xdf;
      *(undefined *)(param_1 + 0x24) = 0;
    }
    sub_080177F4(param_1);
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined *)(param_1 + 0x12) = 0x14;
    break;
  case 1:
    if (*(char *)(param_1 + 0x10) == '\0') {
      *(int *)(param_1 + 0x58) =
           *(int *)(param_1 + 0x58) +
           ((*(int *)(*(int *)(param_1 + 0x28) + 0x58) - (*(int *)(param_1 + 0x58) + 0x3800)) * 0x18
           >> 8);
    }
    sub_080177F4(param_1);
    break;
  case 10:
    sub_080177F4(param_1);
    if ((*(char *)(param_1 + 0x73) == '\x03') &&
       (cVar1 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar1, cVar1 == '\0')) {
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    break;
  case 0xb:
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + -0x2e00;
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + -0x5000;
    sub_08017700(param_1,0xb601);
    sub_080177F4(param_1);
    goto LAB_080923da;
  case 0xf:
    sub_080177F4(param_1);
    if ((*(char *)(param_1 + 0x73) == '\x03') &&
       ((*(char *)(param_1 + 0x12) == '\0' ||
        (cVar1 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar1, cVar1 == '\0')))
       ) {
      if (*(byte *)(param_1 + 0x13) < 0xfc) {
        *(byte *)(param_1 + 0x13) = *(byte *)(param_1 + 0x13) + 3;
      }
      else {
        *(undefined *)(param_1 + 0x13) = 0xff;
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      }
      *(undefined *)(param_1 + 0x24) = *(undefined *)(param_1 + 0x13);
    }
    break;
  case 0x10:
    sub_08017700(param_1,0xb600);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
    *(undefined *)(param_1 + 0x4c) = 0;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
    *(undefined *)(param_1 + 0x12) = 10;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 0x11:
    sub_080177F4(param_1);
    if ((*(char *)(param_1 + 0x12) == '\0') ||
       (cVar1 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar1, cVar1 == '\0')) {
LAB_080923da:
      *(undefined *)(param_1 + 0xe) = 0x14;
    }
    break;
  case 0x14:
    sub_080177F4(param_1);
    if (*(char *)(param_1 + 0x10) == '\x01') {
      *(int *)(param_1 + 0x54) =
           *(int *)(param_1 + 0x54) +
           ((*(int *)(*(int *)(param_1 + 0x28) + 0x54) - (*(int *)(param_1 + 0x54) + 0x1300)) * 0x18
           >> 8);
      *(int *)(param_1 + 0x58) =
           *(int *)(param_1 + 0x58) +
           ((*(int *)(*(int *)(param_1 + 0x28) + 0x58) - (*(int *)(param_1 + 0x58) + 0x3a00)) * 0x18
           >> 8);
    }
    break;
  case 0x1e:
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

