// sub_0803B7F0 at 0x0803B7F0 (thumb)

undefined4 sub_0803B7F0(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    iVar5 = *(int *)(DAT_0202286c + 0x4c);
    *(int *)(param_1 + 200) = iVar5;
    iVar3 = *(int *)(param_1 + 0xc0);
    if ((iVar5 < iVar3) || (iVar3 = *(int *)(param_1 + 0xc4), iVar3 < iVar5)) {
      *(int *)(param_1 + 200) = iVar3;
    }
    iVar3 = sub_08080398(0);
    *(undefined4 *)(iVar3 + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
    *(int *)(iVar3 + 0x50) = *(int *)(param_1 + 0x50) + -0x3400;
    *(int *)(param_1 + 0xcc) = iVar3;
    *(undefined *)(param_1 + 0x12) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  iVar5 = *(int *)(param_1 + 0xcc);
  iVar3 = *(int *)(param_1 + 200) - *(int *)(iVar5 + 0x4c);
  if (iVar3 < 0) {
    iVar3 = iVar3 + 7;
  }
  iVar3 = *(int *)(iVar5 + 0x4c) + (iVar3 >> 3);
  *(int *)(iVar5 + 0x4c) = iVar3;
  iVar4 = sub_0800869C(iVar3,*(undefined4 *)(iVar5 + 0x50));
  iVar4 = iVar4 - (*(int *)(iVar5 + 0x50) + 0x1800);
  iVar3 = iVar4;
  if (iVar4 < 0) {
    iVar3 = iVar4 + 7;
  }
  *(int *)(iVar5 + 0x50) = *(int *)(iVar5 + 0x50) + (iVar3 >> 3);
  bVar1 = sub_0803A884(param_1);
  if ((*(byte *)(param_1 + 0xd8) < bVar1) && (*(byte *)(param_1 + 0xd8) < 6)) {
    sub_0803A8D4(param_1,2);
  }
  cVar2 = *(char *)(param_1 + 0x12) + '\x01';
  *(char *)(param_1 + 0x12) = cVar2;
  if (cVar2 == '\r') {
    sub_08001EAC(0x81);
  }
  sub_0803AB68(param_1);
  if (-0x400 < iVar4) {
    *(undefined *)(param_1 + 0xd) = 0xd;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  sub_080297C0(param_1);
  return in_lr;
}

