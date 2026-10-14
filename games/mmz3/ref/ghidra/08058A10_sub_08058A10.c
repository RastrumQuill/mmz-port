// sub_08058A10 at 0x08058A10 (thumb)

undefined4 sub_08058A10(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    sub_0800471C(0x93);
    sub_08017700(param_1,0xb20b);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
switchD_08058a24_caseD_1:
    sub_080177F4(param_1);
    sub_08007390(param_1 + 0x74,
                 &DAT_08360594 + (uint)(byte)(&DAT_0836129b)[*(char *)(param_1 + 0x71)] * 0x18);
    if ((*(uint *)(param_1 + 0x70) & 0xffff00) == 0x10200) {
LAB_08058b9e:
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
switchD_08058a24_caseD_6:
    return in_lr;
  case 1:
    goto switchD_08058a24_caseD_1;
  case 2:
    *(uint *)(param_1 + 0xb4) = *(uint *)(param_1 + 0xb4) & 0xfffffffe;
    iVar1 = sub_08081E58(param_1);
    *(int *)(param_1 + 0x2c) = iVar1;
    if (iVar1 != 0) {
      iVar2 = sub_08081EDC(iVar1,param_1);
      sub_08081EDC(iVar1,param_1);
      sub_08081EDC(iVar1,param_1);
      sub_08081EDC(iVar1,param_1);
      if (iVar2 != 0) {
        iVar2 = sub_08081FA8(iVar2,param_1);
        *(int *)(param_1 + 0x28) = iVar2;
        iVar4 = *(int *)(param_1 + 0x54);
        iVar3 = iVar4 + 0xa00;
        *(int *)(iVar2 + 0x54) = iVar3;
        if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
          iVar3 = iVar4 + -0xa00;
        }
        *(int *)(iVar2 + 0x54) = iVar3;
        *(int *)(iVar2 + 0x58) = *(int *)(param_1 + 0x58) + -0x2d00;
      }
      iVar3 = *(int *)(param_1 + 0x54);
      iVar2 = iVar3 + 0xa00;
      *(int *)(iVar1 + 0x54) = iVar2;
      if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
        iVar2 = iVar3 + -0xa00;
      }
      *(int *)(iVar1 + 0x54) = iVar2;
      iVar3 = *(int *)(param_1 + 0x58);
      *(int *)(iVar1 + 0x58) = iVar3 + -0x200;
      sub_08082148(iVar1,iVar2,iVar3 + -0x1e00);
      *(undefined *)(iVar1 + 0xb5) = 0;
      *(undefined4 *)(iVar1 + 100) = 0x700;
    }
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 3:
    sub_08082550(*(undefined4 *)(param_1 + 0x28),0x40);
    sub_0808225C(*(undefined4 *)(param_1 + 0x2c),0);
    sub_080177F4(param_1);
    sub_08007390(param_1 + 0x74,
                 &DAT_08360594 + (uint)(byte)(&DAT_0836129b)[*(char *)(param_1 + 0x71)] * 0x18);
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    goto LAB_08058b9e;
  case 4:
    sub_0800471C(0x92);
    sub_08017700(param_1,0xb20c);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 5:
    sub_08082550(*(undefined4 *)(param_1 + 0x28),0x40);
    sub_0808225C(*(undefined4 *)(param_1 + 0x2c),0);
    sub_080177F4(param_1);
    if (*(char *)(param_1 + 0x73) == '\x03') {
      *(undefined *)(param_1 + 0xd) = 0xd;
      *(undefined *)(param_1 + 0xe) = 0;
    }
  default:
    goto switchD_08058a24_caseD_6;
  }
}

