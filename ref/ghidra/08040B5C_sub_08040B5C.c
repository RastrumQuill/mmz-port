// sub_08040B5C at 0x08040B5C (thumb)

undefined4 sub_08040B5C(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_08029778(param_1,0xe);
    iVar4 = *(int *)(DAT_0202286c + 0x4c);
    *(bool *)(param_1 + 0x44) = *(int *)(param_1 + 0x4c) < iVar4;
    if (*(int *)(param_1 + 0x4c) < iVar4) {
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) & 0xef;
    }
    *(byte *)(param_1 + 10) = bVar1;
    *(undefined *)(param_1 + 0xe) = 0;
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      *(undefined4 *)(param_1 + 0x54) = 0xfffffc00;
      *(undefined2 *)(param_1 + 0xcc) = 0x10;
    }
    else {
      *(undefined4 *)(param_1 + 0x54) = 0x400;
      *(undefined2 *)(param_1 + 0xcc) = 0xfff0;
    }
    *(undefined *)(param_1 + 0x12) = 0x28;
    sub_08083064(param_1,0,0);
    sub_0800561C(param_1 + 0x74,&DAT_082ae52c);
    sub_08001EAC(0xe3);
  }
  sub_080297C0(param_1);
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
  iVar4 = *(int *)(param_1 + 0x54) + (int)*(short *)(param_1 + 0xcc);
  *(int *)(param_1 + 0x54) = iVar4;
  if (iVar4 < 0) {
    iVar4 = -iVar4;
  }
  if (iVar4 < 0x2c0) {
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      uVar3 = 0xfffffd40;
    }
    else {
      uVar3 = 0x2c0;
    }
    *(undefined4 *)(param_1 + 0x54) = uVar3;
  }
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if (cVar2 == -1) {
    *(undefined *)(param_1 + 0xd) = 8;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  return in_lr;
}

