// sub_0806BB60 at 0x0806BB60 (thumb)

undefined4 sub_0806BB60(int param_1)

{
  char cVar1;
  short sVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  int local_18;
  undefined4 local_14;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    if (*(char *)(param_1 + 0xbd) == '\0') {
      sub_080127E4(param_1,0x80d);
    }
    else {
      sub_080127E4(param_1,0x805);
    }
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      *(undefined4 *)(param_1 + 0x5c) = 0xfffffc00;
      uVar3 = 0xffffffe0;
    }
    else {
      *(undefined4 *)(param_1 + 0x5c) = 0x400;
      uVar3 = 0x20;
    }
    *(undefined4 *)(param_1 + 100) = uVar3;
    sub_08006E08(param_1 + 0x74,&DAT_0833e418);
    *(undefined *)(param_1 + 0x12) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  if (*(int *)(param_1 + 0x5c) < 1) {
    iVar5 = *(int *)(param_1 + 0x54) + -0xc00;
  }
  else {
    iVar5 = *(int *)(param_1 + 0x54) + 0xc00;
  }
  iVar4 = *(int *)(param_1 + 0x58);
  sVar2 = sub_08008CFC(iVar5,iVar4 + -0x800);
  if ((sVar2 != 0) || (sVar2 = sub_08008CFC(iVar5,iVar4 + 0xa00), sVar2 == 0)) {
    *(undefined *)(param_1 + 0xbf) = 1;
    *(undefined4 *)(param_1 + 0x5c) = 0;
  }
  iVar5 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x54) = iVar5;
  cVar1 = sub_080EF1E8(*(byte *)(param_1 + 0x12) + 1,6);
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == '\0') {
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      local_18 = iVar5 + 0xc00;
    }
    else {
      local_18 = iVar5 + -0xc00;
    }
    local_14 = *(undefined4 *)(param_1 + 0x58);
    sub_080AC60C(3,&local_18);
  }
  sVar2 = sub_08008CFC(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + 0x800);
  if (sVar2 == 0) {
    *(undefined *)(param_1 + 0xd) = 0;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  else {
    uVar3 = sub_080093C4(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(undefined4 *)(param_1 + 0x58) = uVar3;
    if (*(int *)(param_1 + 0x5c) == 0) {
      *(undefined *)(param_1 + 0xd) = 0xb;
      *(undefined *)(param_1 + 0xe) = 0;
    }
    else {
      *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) - *(int *)(param_1 + 100);
    }
  }
  return in_lr;
}

