// sub_08058E58 at 0x08058E58 (thumb)

undefined4 sub_08058E58(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    sub_08017700(param_1,0xb21e);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
switchD_08058e72_caseD_1:
    sub_08082550(*(undefined4 *)(param_1 + 0x28),0x40);
    sub_0808225C(*(undefined4 *)(param_1 + 0x2c),0);
    sub_080177F4(param_1);
    if (*(char *)(param_1 + 0x73) == '\x03') {
      cVar1 = *(char *)(param_1 + 0xe) + '\x01';
LAB_08059016:
      *(char *)(param_1 + 0xe) = cVar1;
    }
switchD_08058e72_caseD_6:
    return in_lr;
  case 1:
    goto switchD_08058e72_caseD_1;
  case 2:
    iVar2 = *(int *)(param_1 + 0x2c);
    cVar1 = *(char *)(iVar2 + 0xb4);
    while (cVar1 != '\0') {
      sub_0808200C(iVar2);
      cVar1 = *(char *)(iVar2 + 0xb4);
    }
    iVar3 = *(int *)(param_1 + 0x28);
    *(byte *)(iVar3 + 10) = *(byte *)(iVar3 + 10) & 0xfc;
    *(undefined4 *)(iVar3 + 0x8c) = 0;
    *(undefined4 *)(iVar3 + 0x90) = 0;
    *(undefined *)(iVar3 + 0x94) = 0;
    *(byte *)(iVar3 + 10) = *(byte *)(iVar3 + 10) & 0xfb;
    *(undefined4 *)(iVar3 + 0xc) = 3;
    *(undefined4 *)(iVar3 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(iVar3 + 9) * 4) + 0xc);
    *(byte *)(iVar2 + 10) = *(byte *)(iVar2 + 10) & 0xfc;
    *(undefined4 *)(iVar2 + 0x8c) = 0;
    *(undefined4 *)(iVar2 + 0x90) = 0;
    *(undefined *)(iVar2 + 0x94) = 0;
    *(byte *)(iVar2 + 10) = *(byte *)(iVar2 + 10) & 0xfb;
    *(undefined4 *)(iVar2 + 0xc) = 3;
    *(undefined4 *)(iVar2 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(iVar2 + 9) * 4) + 0xc);
    *(uint *)(param_1 + 0xb4) = *(uint *)(param_1 + 0xb4) | 1;
    *(undefined4 *)(param_1 + 0x60) = 0;
    sub_08017700(param_1,0xb211);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 3:
    iVar2 = *(int *)(param_1 + 0x60) + 0x40;
    *(int *)(param_1 + 0x60) = iVar2;
    if (0x700 < iVar2) {
      *(undefined4 *)(param_1 + 0x60) = 0x700;
    }
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    sub_080177F4(param_1);
    sub_08007390(param_1 + 0x74,
                 &DAT_08360594 + (uint)(byte)(&DAT_083612e8)[*(char *)(param_1 + 0x71)] * 0x18);
    iVar2 = sub_08009B28(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    if (-1 < iVar2) {
      return in_lr;
    }
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar2;
    cVar1 = *(char *)(param_1 + 0xe) + '\x01';
    goto LAB_08059016;
  case 4:
    sub_0800471C(0x91);
    sub_08007390(param_1 + 0x74,&DAT_083605ac);
    sub_08017700(param_1,0xb209);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 5:
    sub_080177F4(param_1);
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    cVar1 = '\0';
    *(undefined *)(param_1 + 0xd) = 0;
    goto LAB_08059016;
  default:
    goto switchD_08058e72_caseD_6;
  }
}

