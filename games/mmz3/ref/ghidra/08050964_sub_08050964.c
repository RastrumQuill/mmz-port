// sub_08050964 at 0x08050964 (thumb)

undefined4 sub_08050964(int param_1)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    *(undefined *)(param_1 + 0x12) = 0x3c;
    sub_080177F4(param_1);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 1:
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 == '\0') {
      cVar1 = *(char *)(param_1 + 0xe) + '\x01';
LAB_08050ac8:
      *(char *)(param_1 + 0xe) = cVar1;
    }
    break;
  case 2:
    *(uint *)(param_1 + 0xc0) = *(uint *)(param_1 + 0xc0) | 4;
    uVar3 = sub_080FE124(0x680);
    *(char *)(param_1 + 0x12) = (char)(uVar3 & 0xffff);
    *(uint *)(param_1 + 0x5c) = (uVar3 & 0xffff) << 4;
    *(byte *)(param_1 + 0x4c) = (*(byte *)(param_1 + 10) >> 4 ^ 1) & 1;
    uVar3 = (*(byte *)(param_1 + 10) >> 4 ^ 1) & 1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar3 << 4);
    if (uVar3 == 0) {
      bVar2 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar2;
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0xb8) + 0x9800;
      *(int *)(param_1 + 0x5c) = -*(int *)(param_1 + 0x5c);
      *(undefined4 *)(param_1 + 100) = 0x10;
    }
    else {
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0xb8) + -0x9800;
      *(undefined4 *)(param_1 + 100) = 0xfffffff0;
    }
    sub_08017700(param_1,0xaf01);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 3:
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 == '\0') {
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + *(int *)(param_1 + 100);
    sub_08050148(param_1);
    sub_080177F4(param_1);
    break;
  case 4:
    sub_08050148(param_1);
    sub_080177F4(param_1);
    if ((*(uint *)(param_1 + 0xc0) & 4) != 0) {
      return in_lr;
    }
    iVar4 = (int)*(short *)(param_1 + 0xd0);
    if (iVar4 != -1) {
      sub_08004768(iVar4);
      *(short *)(param_1 + 0xd0) = -1;
    }
    cVar1 = '\x01';
    *(undefined *)(param_1 + 0xd) = 1;
    goto LAB_08050ac8;
  default:
    break;
  }
  return in_lr;
}

