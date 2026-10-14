// sub_0803847C at 0x0803847C (thumb)

undefined4 sub_0803847C(int param_1)

{
  undefined uVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  short *psVar5;
  int iVar6;
  int iVar7;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0xb4);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0835b5d0)[*(byte *)(param_1 + 9)] + 4);
  sub_0801749C(param_1);
  sub_080176EC(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_08017700(param_1,*(undefined2 *)(&DAT_0835b838 + (uint)*(byte *)(param_1 + 0x10) * 2));
  iVar7 = **(int **)(&DAT_0835ca10 + (uint)*(byte *)(param_1 + 0x10) * 4);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_0800736C(param_1 + 0x74,iVar7,param_1 + 0x54,1);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  psVar5 = (short *)(&DAT_0835b868 + (uint)*(byte *)(param_1 + 0x10) * 2);
  if (*psVar5 != 0) {
    if (*(byte *)(param_1 + 0x10) == 0xd) {
      if (*(char *)(iVar4 + 0x12a) == '\0') {
        sub_0800471C(*psVar5);
      }
      else {
        sub_0800471C(0x11);
      }
    }
    else {
      sub_0800471C(*psVar5);
    }
  }
  if (*(char *)(param_1 + 0x10) == '\r') {
    iVar6 = *(int *)(param_1 + 0xb4);
    if (*(char *)(iVar6 + 0x12a) == '\0') {
      if (*(char *)(iVar6 + 0xc2) == '\x03') {
        sub_0803C068(iVar6,param_1,1);
      }
      else {
        sub_0803C068(iVar6,param_1,0);
      }
    }
    else {
      sub_0803A914(iVar6,param_1,0);
    }
  }
  cVar2 = *(char *)(param_1 + 0x10);
  if ((((cVar2 == '\x0e') || (cVar2 == '\x10')) || (cVar2 == '\x16')) ||
     ((*(byte *)(iVar7 + 6) & 2) == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = (&DAT_0835b8b0)[*(byte *)(param_1 + 0x11)];
  }
  *(undefined *)(param_1 + 0xc0) = uVar1;
  *(undefined *)(param_1 + 0xc1) = (&DAT_0835b898)[*(byte *)(param_1 + 0x10)];
  cVar2 = sub_080346B0(iVar4);
  *(char *)(param_1 + 0xc1) = cVar2 + *(char *)(param_1 + 0xc1);
  cVar2 = sub_08034818(iVar4,0x2e);
  if ((cVar2 == '\0') || ((&DAT_0835ca74)[*(byte *)(param_1 + 0x10)] == '\0')) {
    bVar3 = *(byte *)(iVar7 + 6);
  }
  else {
    bVar3 = *(byte *)(iVar7 + 6) | 0x40;
  }
  *(byte *)(param_1 + 0xc2) = bVar3;
  if (*(char *)(param_1 + 0x10) == '\x11') {
    *(undefined1 *)(param_1 + 0xc0) = (&DAT_0835b8b0)[*(byte *)(param_1 + 0x11)];
    *(byte *)(param_1 + 0xc2) = *(byte *)(param_1 + 0xc2) | 2;
  }
  sub_080073A0(param_1 + 0x74,iVar7,*(undefined *)(param_1 + 0xc1),*(undefined *)(param_1 + 0xc0),
               *(undefined *)(param_1 + 0xc2),0xffffffff);
  *(undefined *)(param_1 + 0x12) = 0;
  *(undefined *)(param_1 + 0xc3) = 1;
  *(undefined4 *)(param_1 + 0x98) = 0x803876d;
  sub_08038648(param_1);
  return in_lr;
}

