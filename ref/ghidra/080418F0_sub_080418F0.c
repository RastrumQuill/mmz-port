// sub_080418F0 at 0x080418F0 (thumb)

undefined4 sub_080418F0(int param_1)

{
  bool bVar1;
  byte bVar2;
  undefined uVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_08029778(param_1,0x10);
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
    bVar1 = *(int *)(param_1 + 0x4c) < *(int *)(DAT_0202286c + 0x4c);
    *(bool *)(param_1 + 0x44) = bVar1;
    if (bVar1) {
      bVar2 = *(byte *)(param_1 + 10) | 0x10;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) & 0xef;
    }
    *(byte *)(param_1 + 10) = bVar2;
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      uVar5 = 0x200;
    }
    else {
      uVar5 = 0xfffffe00;
    }
    *(undefined4 *)(param_1 + 0x54) = uVar5;
    *(undefined4 *)(param_1 + 0x58) = 0xfffffe00;
    *(undefined *)(param_1 + 0xca) = 0;
    *(undefined *)(param_1 + 0x12) = 8;
    sub_08001EAC(0xa0);
    sub_0800561C(param_1 + 0x74,&DAT_082ae4bc);
    if (*(int *)(param_1 + 0x24) != 0) {
      *(undefined *)(*(int *)(param_1 + 0x24) + 0x11) = 1;
      *(undefined4 *)(param_1 + 0x24) = 0;
    }
  }
  sub_080297C0(param_1);
  if ((int)*(short *)(param_1 + 0x8c) < (int)*(char *)(param_1 + 0xe1)) {
    uVar3 = 0x24;
  }
  else {
    iVar6 = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
    *(int *)(param_1 + 0x4c) = iVar6;
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 0x40;
    if (*(char *)(param_1 + 0xf) == '\0') {
      cVar4 = *(char *)(param_1 + 0x12) + -1;
      *(char *)(param_1 + 0x12) = cVar4;
      if (cVar4 != -1) {
        return in_lr;
      }
      sub_08029778(param_1,0x14);
      sub_080297C0(param_1);
      *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
      return in_lr;
    }
    iVar6 = sub_08008360(iVar6);
    if (*(int *)(param_1 + 0x50) <= iVar6) {
      return in_lr;
    }
    uVar5 = sub_08008360(*(undefined4 *)(param_1 + 0x4c));
    *(undefined4 *)(param_1 + 0x50) = uVar5;
    uVar3 = 0x22;
  }
  *(undefined *)(param_1 + 0xd) = uVar3;
  *(undefined *)(param_1 + 0xe) = 1;
  return in_lr;
}

