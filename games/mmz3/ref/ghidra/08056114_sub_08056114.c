// sub_08056114 at 0x08056114 (thumb)

undefined4 sub_08056114(int param_1)

{
  char cVar1;
  undefined2 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_08017700(param_1,0xb30a);
    *(undefined *)(param_1 + 0xe) = 0;
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      *(undefined4 *)(param_1 + 0x5c) = 0xfffffc80;
      uVar2 = 8;
    }
    else {
      *(undefined4 *)(param_1 + 0x5c) = 0x380;
      uVar2 = 0xfff8;
    }
    *(undefined2 *)(param_1 + 200) = uVar2;
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined *)(param_1 + 0x12) = 0;
    if (*(char *)(param_1 + 0xde) == '\0') {
      sub_08007390(param_1 + 0x74,&DAT_08360410);
      sub_0800471C(0x46);
    }
    else {
      sub_08007390(param_1 + 0x74,&DAT_08360470);
      sub_0800471C(0x46);
    }
    sub_080A7B98(param_1,1,0);
    *(char *)(param_1 + 0xde) = '\0';
  }
  sub_080177F4(param_1);
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  cVar1 = *(char *)(param_1 + 0x12);
  *(char *)(param_1 + 0x12) = cVar1 + '\x01';
  iVar5 = *(int *)(param_1 + 0x58);
  if (iVar5 < *(int *)(param_1 + 0xb8) + 0xf000) {
    *(char *)(param_1 + 0x12) = cVar1 + '\x02';
    if (*(int *)(DAT_0202f5c0 + 0x58) < iVar5) {
      *(int *)(param_1 + 0x58) = iVar5 + -0x200;
    }
    iVar5 = *(int *)(param_1 + 0x54);
    if ((iVar5 < *(int *)(param_1 + 0xb4) + 0x1000) || (*(int *)(param_1 + 0xb4) + 0x14000 < iVar5))
    {
      *(undefined *)(param_1 + 0xd) = 0xb;
      *(undefined *)(param_1 + 0xe) = 1;
    }
    iVar3 = *(int *)(DAT_0202f5c0 + 0x54);
    if ((bool)(~(*(byte *)(param_1 + 10) >> 4) & 1) == iVar3 < iVar5) {
      return in_lr;
    }
    iVar6 = iVar3 - iVar5;
    if (iVar6 < 0) {
      iVar6 = iVar5 - iVar3;
    }
    if (iVar6 < 0x4001) {
      return in_lr;
    }
    if (*(byte *)(param_1 + 0x12) < 0x29) {
      return in_lr;
    }
    if (*(char *)(param_1 + 0xc6) == '\0') {
      *(undefined *)(param_1 + 0xd) = 10;
      *(undefined *)(param_1 + 0xf) = 0x15;
      *(undefined4 *)(param_1 + 0x5c) = 0;
      *(undefined4 *)(param_1 + 0x60) = 0;
      goto LAB_0805629e;
    }
  }
  else {
    iVar5 = *(int *)(param_1 + 0x5c) + (int)*(short *)(param_1 + 200);
    *(int *)(param_1 + 0x5c) = iVar5;
    if (iVar5 < 0) {
      iVar5 = -iVar5;
    }
    if (iVar5 < 0x400) {
      if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
        uVar4 = 0xfffffc00;
      }
      else {
        uVar4 = 0x400;
      }
      *(undefined4 *)(param_1 + 0x5c) = uVar4;
    }
    if (*(byte *)(param_1 + 0x12) < 0x29) {
      return in_lr;
    }
  }
  *(undefined *)(param_1 + 0xd) = 0xb;
LAB_0805629e:
  *(undefined *)(param_1 + 0xe) = 1;
  return in_lr;
}

