// sub_080590C8 at 0x080590C8 (thumb)

undefined4 sub_080590C8(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        *(undefined *)(param_1 + 0x13) = 0x1e;
        *(undefined4 *)(param_1 + 100) = 0x600;
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      }
      else if (bVar1 != 3) {
        return in_lr;
      }
      iVar3 = *(int *)(param_1 + 0x2c);
      uVar7 = *(undefined4 *)(param_1 + 0x28);
      if (((*(uint *)(DAT_0202f5c0 + 0xc) & 0xffff00) == 0x400) &&
         ((*(uint *)(iVar3 + 0x8c) & 4) != 0)) {
        sub_0800471C(0x52);
      }
      iVar8 = *(int *)(param_1 + 100) + -100;
      *(int *)(param_1 + 100) = iVar8;
      if (iVar8 < 0x300) {
        *(undefined4 *)(param_1 + 100) = 0x300;
      }
      if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
        cVar2 = (char)((uint)*(undefined4 *)(param_1 + 100) >> 8) + *(char *)(param_1 + 0x12);
      }
      else {
        cVar2 = *(char *)(param_1 + 0x12) - (char)((uint)*(undefined4 *)(param_1 + 100) >> 8);
      }
      *(char *)(param_1 + 0x12) = cVar2;
      sub_08082550(uVar7,*(undefined *)(param_1 + 0x12));
      sub_0808225C(iVar3,0);
      sub_08082550(uVar7,*(undefined *)(param_1 + 0x12));
      cVar2 = *(char *)(param_1 + 0x13) + -1;
      *(char *)(param_1 + 0x13) = cVar2;
      if (cVar2 == '\0') {
        *(undefined *)(param_1 + 0xd) = 0x11;
        *(undefined *)(param_1 + 0xe) = 0;
      }
      sub_080177F4(param_1);
      return in_lr;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    sub_08007390(param_1 + 0x74,&DAT_083606cc);
    *(undefined *)(param_1 + 0x12) = 0;
    *(uint *)(param_1 + 0xb4) = *(uint *)(param_1 + 0xb4) & 0xfffffffe;
    iVar3 = sub_08081E58(param_1);
    *(int *)(param_1 + 0x2c) = iVar3;
    if (iVar3 != 0) {
      iVar8 = sub_08081EDC(iVar3,param_1);
      sub_08081EDC(iVar3,param_1);
      sub_08081EDC(iVar3,param_1);
      sub_08081EDC(iVar3,param_1);
      if (iVar8 != 0) {
        iVar8 = sub_08081FA8(iVar8,param_1);
        *(int *)(param_1 + 0x28) = iVar8;
        iVar6 = *(int *)(param_1 + 0x54);
        iVar5 = iVar6 + 0xa00;
        *(int *)(iVar8 + 0x54) = iVar5;
        if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
          iVar5 = iVar6 + -0xa00;
        }
        *(int *)(iVar8 + 0x54) = iVar5;
        *(int *)(iVar8 + 0x58) = *(int *)(param_1 + 0x58) + -0x2500;
      }
      iVar5 = *(int *)(param_1 + 0x54);
      iVar8 = iVar5 + 0x2c00;
      *(int *)(iVar3 + 0x54) = iVar8;
      if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
        iVar8 = iVar5 + -0x2c00;
      }
      *(int *)(iVar3 + 0x54) = iVar8;
      *(int *)(iVar3 + 0x58) = *(int *)(param_1 + 0x58) + -0x3700;
      iVar8 = *(int *)(param_1 + 0x54) + 0x1100;
      if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
        iVar8 = *(int *)(param_1 + 0x54) + -0x1100;
      }
      sub_08082148(iVar3,iVar8,*(int *)(param_1 + 0x58) + -0x2c00);
      *(undefined *)(iVar3 + 0xb5) = 0;
      *(undefined4 *)(iVar3 + 100) = 0x400;
      *(char *)(param_1 + 0x12) = *(char *)(iVar3 + 0x24) + -0x80;
      sub_080820F0(iVar3,0,0x130);
    }
    *(undefined *)(param_1 + 0x13) = 0x20;
    *(undefined4 *)(param_1 + 100) = 0;
    sub_08017700(param_1,0xb217);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  iVar8 = *(int *)(param_1 + 0x2c);
  *(undefined4 *)(iVar8 + 100) = 0x400;
  iVar3 = FUN_080fe2f8(*(int *)(param_1 + 100) << 8,0x212);
  *(int *)(iVar8 + 100) =
       *(short *)((int)&DAT_080fe64c + ((uint)(iVar3 << 0x18) >> 0x17)) * 5 + 0x400;
  if (((*(uint *)(DAT_0202f5c0 + 0xc) & 0xffff00) == 0x400) && ((*(uint *)(iVar8 + 0x8c) & 4) != 0))
  {
    sub_0800471C(0x52);
  }
  if ((*(byte *)(iVar8 + 0xb4) < 7) &&
     (cVar2 = *(char *)(param_1 + 0x13) + -1, *(char *)(param_1 + 0x13) = cVar2, cVar2 == '\0')) {
    *(undefined *)(param_1 + 0x13) = 8;
    sub_08081EDC(iVar8,param_1);
  }
  uVar7 = *(undefined4 *)(param_1 + 0x28);
  iVar3 = *(int *)(param_1 + 100) + 1;
  *(int *)(param_1 + 100) = iVar3;
  if (2 < iVar3) {
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      cVar2 = *(char *)(param_1 + 0x12) + '\x06';
    }
    else {
      cVar2 = *(char *)(param_1 + 0x12) + -6;
    }
    *(char *)(param_1 + 0x12) = cVar2;
  }
  if (0x90 < *(int *)(param_1 + 100)) {
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      if (*(char *)(param_1 + 0x12) != '\x1c') goto LAB_080592ca;
    }
    else if (*(char *)(param_1 + 0x12) != 'd') goto LAB_080592ca;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
LAB_080592ca:
  if ((*(byte *)(param_1 + 0x12) & 0x1f) < 6) {
    uVar4 = *(byte *)(iVar8 + 0x24) + 0x80 & 0xff;
    iVar3 = *(short *)((int)&DAT_080fe64c + ((uVar4 + 0x40) * 0x1000000 >> 0x17)) * 0x380;
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0xff;
    }
    iVar5 = (short)(&DAT_080fe64c)[uVar4] * 0x380;
    if (iVar5 < 0) {
      iVar5 = iVar5 + 0xff;
    }
    sub_080AA068(*(int *)(iVar8 + 0x54) + (iVar3 >> 8),*(int *)(iVar8 + 0x58) + (iVar5 >> 8));
  }
  if (*(byte *)(param_1 + 0x12) < 6) {
    sub_0800471C(0x96);
  }
  sub_08082550(uVar7,*(undefined *)(param_1 + 0x12));
  sub_0808225C(iVar8,0);
  sub_08082550(uVar7,*(undefined *)(param_1 + 0x12));
  sub_080177F4(param_1);
  return in_lr;
}

