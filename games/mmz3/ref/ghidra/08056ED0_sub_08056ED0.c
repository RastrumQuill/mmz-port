// sub_08056ED0 at 0x08056ED0 (thumb)

undefined4 sub_08056ED0(int param_1)

{
  bool bVar1;
  int iVar2;
  byte bVar3;
  char cVar4;
  undefined4 uVar5;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_080177CC(param_1,0xb31a,10,0);
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
    *(undefined *)(param_1 + 0x12) = 0xc;
    sub_0800471C(0x4a);
  }
  sub_080177F4(param_1);
  if (*(char *)(param_1 + 0xf) == '\0') {
    cVar4 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar4;
    if (cVar4 != -1) {
      return in_lr;
    }
    sub_08007390(param_1 + 0x74,&DAT_08360440);
    uVar5 = sub_080C072C(param_1);
    *(undefined4 *)(param_1 + 0x2c) = uVar5;
    *(undefined *)(param_1 + 0x12) = 0x20;
  }
  else {
    if (*(char *)(param_1 + 0xf) != '\x01') {
      if ((*(byte *)(param_1 + 0x12) & 3) == 0) {
        *(short *)(param_1 + 0xa4) = *(short *)(param_1 + 0xa4) + 1;
        *(short *)(param_1 + 0xd8) = *(short *)(param_1 + 0xd8) + 1;
        sub_0800471C(0x4b);
      }
      if ((*(char *)(param_1 + 0x12) == '\x7f') || ((DAT_020301a8 & 8) != 0)) {
        *(undefined *)(param_1 + 0xd) = 3;
        *(undefined *)(param_1 + 0xe) = 1;
        *(undefined *)(param_1 + 0xf) = 2;
        sub_08007390(param_1 + 0x74,&DAT_083603e0);
        cVar4 = '\x04';
      }
      else {
        cVar4 = *(char *)(param_1 + 0x12) + '\x01';
      }
      *(char *)(param_1 + 0x12) = cVar4;
      return in_lr;
    }
    cVar4 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar4;
    if (cVar4 != -1) {
      return in_lr;
    }
    *(undefined *)(*(int *)(param_1 + 0x2c) + 0x11) = 1;
    *(undefined4 *)(param_1 + 0x2c) = 0;
    *(undefined *)(param_1 + 0x12) = 0;
    sub_080A9520(param_1,2);
  }
  *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  return in_lr;
}

