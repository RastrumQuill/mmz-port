// sub_08058590 at 0x08058590 (thumb)

undefined4 sub_08058590(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        *(undefined *)(param_1 + 0x12) = 0x20;
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      }
      else if (bVar1 != 3) {
        return in_lr;
      }
      if (*(char *)(param_1 + 0x12) == '\x10') {
        *(uint *)(param_1 + 0xb4) = *(uint *)(param_1 + 0xb4) & 0xfffffffd;
      }
      cVar2 = *(char *)(param_1 + 0x12) + -1;
      *(char *)(param_1 + 0x12) = cVar2;
      if (cVar2 == '\0') {
        *(undefined *)(param_1 + 0xd) = 10;
        *(undefined *)(param_1 + 0xe) = 0;
      }
      sub_080177F4(param_1);
      return in_lr;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    sub_0800471C(0x8e);
    sub_08007390(param_1 + 0x74,&DAT_08361164);
    *(uint *)(param_1 + 0xb4) = *(uint *)(param_1 + 0xb4) & 0xfffffffe;
    iVar3 = sub_08081E58(param_1);
    uVar4 = sub_08081EDC(iVar3,param_1);
    *(undefined4 *)(param_1 + 0x28) = uVar4;
    *(int *)(param_1 + 0x2c) = iVar3;
    iVar6 = *(int *)(param_1 + 0x54);
    iVar5 = iVar6 + -0x2f00;
    *(int *)(iVar3 + 0x54) = iVar5;
    if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
      iVar5 = iVar6 + 0x2f00;
    }
    *(int *)(iVar3 + 0x54) = iVar5;
    *(int *)(iVar3 + 0x58) = *(int *)(param_1 + 0x58) + -0x2900;
    *(undefined4 *)(param_1 + 0x5c) = 0xfffffd00;
    uVar4 = 0xfffffd00;
    if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
      uVar4 = 0x300;
    }
    *(undefined4 *)(param_1 + 0x5c) = uVar4;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  iVar3 = *(int *)(param_1 + 0x2c);
  *(int *)(iVar3 + 0x54) = *(int *)(iVar3 + 0x54) + *(int *)(param_1 + 0x5c);
  if (((*(uint *)(DAT_0202f5c0 + 0xc) & 0xffff00) == 0x400) && ((*(uint *)(iVar3 + 0x8c) & 4) != 0))
  {
    sub_0800471C(0x52);
  }
  iVar5 = *(int *)(iVar3 + 0x54);
  if ((iVar5 - *(int *)(param_1 + 0x54)) + 0x8000U < 0x10001) {
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      if (*(int *)(param_1 + 0xbc) + -0xac00 <= iVar5 + -0x1a00) goto LAB_080586fa;
      *(uint *)(param_1 + 0xb4) = *(uint *)(param_1 + 0xb4) | 2;
      iVar5 = *(int *)(param_1 + 0xbc);
      iVar6 = -0xac00;
    }
    else {
      if (iVar5 + 0x1a00 <= *(int *)(param_1 + 0xbc) + 0xac00) goto LAB_080586fa;
      *(uint *)(param_1 + 0xb4) = *(uint *)(param_1 + 0xb4) | 2;
      iVar5 = *(int *)(param_1 + 0xbc);
      iVar6 = 0xac00;
    }
    *(int *)(param_1 + 0xc4) = iVar5 + iVar6;
    sub_0801ACF8(3,param_1 + 0x54);
  }
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
LAB_080586fa:
  iVar5 = *(int *)(param_1 + 0x54) + -0x1700;
  if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
    iVar5 = *(int *)(param_1 + 0x54) + 0x1700;
  }
  iVar6 = *(int *)(param_1 + 0x58) + -0x2900;
  sub_08082068(iVar3,param_1,iVar5,iVar6);
  sub_08082148(iVar3,iVar5,iVar6);
  sub_080177F4(param_1);
  return in_lr;
}

