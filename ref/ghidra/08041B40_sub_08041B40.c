// sub_08041B40 at 0x08041B40 (thumb)

undefined4 sub_08041B40(int param_1)

{
  bool bVar1;
  byte bVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_08029790(param_1,0x1a,9,0);
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
    *(undefined *)(param_1 + 0x12) = 0xc;
    sub_08001EAC(0xdd);
  }
  sub_080297C0(param_1);
  if (*(char *)(param_1 + 0xf) == '\0') {
    cVar3 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar3;
    if (cVar3 != -1) {
      return in_lr;
    }
    sub_0800561C(param_1 + 0x74,&DAT_082ae4f4);
    uVar4 = sub_08094208(param_1,1);
    *(undefined4 *)(param_1 + 0x24) = uVar4;
    *(undefined *)(param_1 + 0x12) = 0x20;
  }
  else {
    if (*(char *)(param_1 + 0xf) != '\x01') {
      if ((*(byte *)(param_1 + 0x12) & 3) == 0) {
        *(short *)(param_1 + 0x8c) = *(short *)(param_1 + 0x8c) + 1;
        *(short *)(param_1 + 0xdc) = *(short *)(param_1 + 0xdc) + 1;
        sub_08001EAC(0xde);
      }
      if (*(char *)(param_1 + 0x12) == '\x7f') {
        *(undefined *)(param_1 + 0xd) = 3;
        *(undefined *)(param_1 + 0xe) = 1;
        *(undefined *)(param_1 + 0xf) = 2;
        sub_0800561C(param_1 + 0x74,&DAT_082ae4bc);
        cVar3 = '\x04';
      }
      else {
        cVar3 = *(char *)(param_1 + 0x12) + '\x01';
      }
      *(char *)(param_1 + 0x12) = cVar3;
      return in_lr;
    }
    cVar3 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar3;
    if (cVar3 != -1) {
      return in_lr;
    }
    *(undefined *)(*(int *)(param_1 + 0x24) + 0x11) = 1;
    *(undefined4 *)(param_1 + 0x24) = 0;
    *(undefined *)(param_1 + 0x12) = 0;
    sub_08084ECC(param_1,2);
  }
  *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  return in_lr;
}

