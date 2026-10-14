// sub_08055D18 at 0x08055D18 (thumb)

undefined4 sub_08055D18(int param_1)

{
  bool bVar1;
  byte bVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_08017700(param_1,0xb30f);
    iVar5 = DAT_0202f5c0;
    *(bool *)(param_1 + 0x4c) = *(int *)(param_1 + 0x54) < *(int *)(DAT_0202f5c0 + 0x54);
    bVar1 = *(int *)(param_1 + 0x54) < *(int *)(iVar5 + 0x54);
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar1 << 4;
    if (bVar1) {
      bVar2 = *(byte *)(param_1 + 10) | 0x10;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) & 0xef;
    }
    *(byte *)(param_1 + 10) = bVar2;
    *(undefined *)(param_1 + 0xe) = 0;
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      *(undefined4 *)(param_1 + 0x5c) = 0xfffffc00;
      *(undefined2 *)(param_1 + 200) = 0x10;
    }
    else {
      *(undefined4 *)(param_1 + 0x5c) = 0x400;
      *(undefined2 *)(param_1 + 200) = 0xfff0;
    }
    *(undefined *)(param_1 + 0x12) = 0x28;
    sub_080A7B98(param_1,0,0);
    sub_08007390(param_1 + 0x74,&DAT_083604a0);
    sub_0800471C(0x4c);
  }
  sub_080177F4(param_1);
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  iVar5 = *(int *)(param_1 + 0x5c) + (int)*(short *)(param_1 + 200);
  *(int *)(param_1 + 0x5c) = iVar5;
  if (iVar5 < 0) {
    iVar5 = -iVar5;
  }
  if (iVar5 < 0x2c0) {
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      uVar4 = 0xfffffd40;
    }
    else {
      uVar4 = 0x2c0;
    }
    *(undefined4 *)(param_1 + 0x5c) = uVar4;
  }
  cVar3 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar3;
  if (cVar3 == -1) {
    *(undefined *)(param_1 + 0xd) = 8;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  return in_lr;
}

