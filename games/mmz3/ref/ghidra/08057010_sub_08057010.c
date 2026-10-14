// sub_08057010 at 0x08057010 (thumb)

undefined4 sub_08057010(int param_1)

{
  bool bVar1;
  int iVar2;
  byte bVar3;
  char cVar4;
  undefined4 uVar5;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_08017700(param_1,0xb314);
    sub_080177F4(param_1);
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
    iVar2 = DAT_0202f5c0;
    *(bool *)(param_1 + 0x4c) = *(int *)(param_1 + 0x54) < *(int *)(DAT_0202f5c0 + 0x54);
    bVar1 = *(int *)(param_1 + 0x54) < *(int *)(iVar2 + 0x54);
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar1 << 4;
    if (bVar1) {
      bVar3 = *(byte *)(param_1 + 10) | 0x10;
    }
    else {
      bVar3 = *(byte *)(param_1 + 10) & 0xef;
    }
    *(byte *)(param_1 + 10) = bVar3;
    sub_08007390(param_1 + 0x74,&DAT_08360440);
    uVar5 = sub_080C072C(param_1);
    *(undefined4 *)(param_1 + 0x2c) = uVar5;
    *(undefined *)(param_1 + 0x12) = 0x20;
    sub_0800471C(0x45);
  }
  cVar4 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar4;
  if (cVar4 == -1) {
    *(undefined *)(*(int *)(param_1 + 0x2c) + 0x11) = 1;
    *(undefined4 *)(param_1 + 0x2c) = 0;
    *(undefined *)(param_1 + 0xd) = 0xf;
    *(undefined *)(param_1 + 0xe) = 1;
    *(undefined *)(param_1 + 0xde) = 1;
  }
  return in_lr;
}

