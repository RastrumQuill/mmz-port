// sub_080409F8 at 0x080409F8 (thumb)

undefined4 sub_080409F8(int param_1)

{
  bool bVar1;
  byte bVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_08029778(param_1,0);
    *(undefined *)(param_1 + 0xe) = 0;
    bVar1 = *(int *)(param_1 + 0x4c) < *(int *)(DAT_0202286c + 0x4c);
    *(bool *)(param_1 + 0x44) = bVar1;
    if (bVar1) {
      bVar2 = *(byte *)(param_1 + 10) | 0x10;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) & 0xef;
    }
    *(byte *)(param_1 + 10) = bVar2;
    *(undefined *)(param_1 + 0x12) = 0x20;
    uVar4 = sub_08094208(param_1,1);
    *(undefined4 *)(param_1 + 0x24) = uVar4;
    sub_0800561C(param_1 + 0x74,&DAT_082ae4f4);
    sub_08001EAC(0xb1);
  }
  sub_080297C0(param_1);
  cVar3 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar3;
  if (cVar3 == -1) {
    *(undefined *)(*(int *)(param_1 + 0x24) + 0x11) = 1;
    *(undefined4 *)(param_1 + 0x24) = 0;
    *(undefined *)(param_1 + 0xc9) = *(undefined *)(param_1 + 0xf);
    *(undefined *)(param_1 + 0xd) = 3;
    *(undefined *)(param_1 + 0xe) = 1;
    *(undefined *)(param_1 + 0xf) = 2;
    if (*(short *)(param_1 + 0x8c) < 0x20) {
      *(undefined *)(param_1 + 0x12) = 8;
    }
    else if (*(short *)(param_1 + 0x8c) < 0x30) {
      *(undefined *)(param_1 + 0x12) = 4;
    }
    else {
      *(undefined *)(param_1 + 0x12) = 2;
    }
    sub_0800561C(param_1 + 0x74,&DAT_082ae4bc);
  }
  return in_lr;
}

