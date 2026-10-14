// sub_080D4BD0 at 0x080D4BD0 (thumb)

undefined4 sub_080D4BD0(int param_1)

{
  char cVar1;
  short sVar2;
  int iVar3;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xd)) {
  case 0:
    DAT_0202fd8c = 0x3c0;
    DAT_0202f78c = 9;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  case 1:
    sVar2 = sub_080D0554(param_1,0xbe03,1);
    if (sVar2 == 0) {
      return in_lr;
    }
    sub_08017700(param_1,0xbe14);
    *(undefined4 *)(param_1 + 0x5c) = 0;
    break;
  case 2:
    sub_080177F4(param_1);
    if (*(int *)(param_1 + 0x5c) < 0x400) {
      *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + 0x40;
    }
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    sub_08017700(param_1,0xbe15);
    break;
  case 3:
    sub_080177F4(param_1);
    if (*(int *)(param_1 + 0x5c) < 0x400) {
      *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + 0x40;
    }
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    break;
  case 4:
    sub_080177F4(param_1);
    if (*(int *)(param_1 + 0x5c) < 0x400) {
      *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + 0x40;
    }
    iVar3 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x54) = iVar3;
    if (iVar3 < 0xb1801) {
      return in_lr;
    }
    sub_08017700(param_1,0xbe16);
    sub_0800471C(0xf9);
    *(undefined *)(param_1 + 0x12) = 0;
    break;
  case 5:
    sub_080177F4(param_1);
    cVar1 = *(char *)(param_1 + 0x12) + '\x01';
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 == '\x06') {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
      sub_0800736C(param_1 + 0x74,&DAT_0836d490,param_1 + 0x54,1);
      *(int *)(param_1 + 0xa0) = param_1;
      *(undefined4 *)(param_1 + 0x98) = 0;
    }
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    sub_08017700(param_1,0xbe17);
    sub_0800471C(0xf9);
    *(undefined *)(param_1 + 0x12) = 0;
    break;
  case 6:
    sub_080177F4(param_1);
    cVar1 = *(char *)(param_1 + 0x12) + '\x01';
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 == '\n') {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
      sub_0800736C(param_1 + 0x74,&DAT_0836d4a8,param_1 + 0x54,1);
      *(int *)(param_1 + 0xa0) = param_1;
      *(undefined4 *)(param_1 + 0x98) = 0;
    }
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    sub_08017700(param_1,0xbe18);
    sub_0800471C(0xf9);
    *(undefined *)(param_1 + 0x12) = 0;
    break;
  case 7:
    sub_080177F4(param_1);
    cVar1 = *(char *)(param_1 + 0x12) + '\x01';
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 == '\n') {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
      sub_0800736C(param_1 + 0x74,&DAT_0836d4c0,param_1 + 0x54,1);
      *(int *)(param_1 + 0xa0) = param_1;
      *(undefined4 *)(param_1 + 0x98) = 0;
    }
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    sub_0800736C(param_1 + 0x74,&DAT_0836d4d8,param_1 + 0x54,1);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0;
    break;
  case 8:
    sub_080177F4(param_1);
    if ((*(uint *)(param_1 + 0x8c) & 1) == 0) {
      return in_lr;
    }
    sub_08017700(param_1,0xbe0c);
    sub_0800471C(0xf8);
    *(undefined4 *)(param_1 + 0x5c) = 0x300;
    *(undefined4 *)(param_1 + 0x60) = 0xfffffc00;
    break;
  case 9:
    sub_080177F4(param_1);
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) - *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    iVar3 = *(int *)(param_1 + 0x60) + 0x20;
    *(int *)(param_1 + 0x60) = iVar3;
    if (-0x101 < iVar3) {
      *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) * 0xf >> 4;
    }
    if (*(int *)(param_1 + 0x60) < 0) {
      return in_lr;
    }
    sub_08017700(param_1,0xbe0d);
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_1 + 0x58);
    *(undefined *)(param_1 + 0x12) = 0;
    break;
  case 10:
    sub_080177F4(param_1);
    iVar3 = *(int *)(param_1 + 0x5c) * 7 >> 3;
    *(int *)(param_1 + 0x5c) = iVar3;
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) - iVar3;
    iVar3 = *(byte *)(param_1 + 0x12) + 1;
    *(char *)(param_1 + 0x12) = (char)iVar3;
    *(int *)(param_1 + 0x58) =
         *(int *)(param_1 + 0x68) +
         *(short *)((int)&DAT_080fe64c + ((uint)(iVar3 * 0x2000000) >> 0x17)) * 4;
  default:
    goto switchD_080d4be4_caseD_b;
  }
  *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
switchD_080d4be4_caseD_b:
  return in_lr;
}

