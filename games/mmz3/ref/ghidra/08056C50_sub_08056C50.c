// sub_08056C50 at 0x08056C50 (thumb)

undefined4 sub_08056C50(int param_1)

{
  bool bVar1;
  byte bVar2;
  undefined uVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_08017700(param_1,0xb311);
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
    iVar6 = DAT_0202f5c0;
    *(bool *)(param_1 + 0x4c) = *(int *)(param_1 + 0x54) < *(int *)(DAT_0202f5c0 + 0x54);
    bVar1 = *(int *)(param_1 + 0x54) < *(int *)(iVar6 + 0x54);
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar1 << 4;
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
    *(undefined4 *)(param_1 + 0x5c) = uVar5;
    *(undefined4 *)(param_1 + 0x60) = 0xfffffe00;
    *(undefined *)(param_1 + 0xc6) = 0;
    *(undefined *)(param_1 + 0x12) = 8;
    sub_0800471C(0x47);
    sub_08007390(param_1 + 0x74,&DAT_083603e0);
    if (*(int *)(param_1 + 0x2c) != 0) {
      *(undefined *)(*(int *)(param_1 + 0x2c) + 0x11) = 1;
      *(undefined4 *)(param_1 + 0x2c) = 0;
    }
  }
  sub_080177F4(param_1);
  if ((int)*(short *)(param_1 + 0xa4) < (int)*(char *)(param_1 + 0xdd)) {
    uVar3 = 0x24;
  }
  else {
    iVar6 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x54) = iVar6;
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x40;
    if (*(char *)(param_1 + 0xf) == '\0') {
      cVar4 = *(char *)(param_1 + 0x12) + -1;
      *(char *)(param_1 + 0x12) = cVar4;
      if (cVar4 != -1) {
        return in_lr;
      }
      sub_08017700(param_1,0xb308);
      sub_080177F4(param_1);
      *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
      return in_lr;
    }
    iVar6 = sub_0800A104(iVar6);
    if (*(int *)(param_1 + 0x58) <= iVar6) {
      return in_lr;
    }
    uVar5 = sub_0800A104(*(undefined4 *)(param_1 + 0x54));
    *(undefined4 *)(param_1 + 0x58) = uVar5;
    uVar3 = 0x22;
  }
  *(undefined *)(param_1 + 0xd) = uVar3;
  *(undefined *)(param_1 + 0xe) = 1;
  return in_lr;
}

