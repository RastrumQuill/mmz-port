// sub_08041C50 at 0x08041C50 (thumb)

undefined4 sub_08041C50(int param_1)

{
  bool bVar1;
  byte bVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_08029778(param_1,0x13);
    sub_080297C0(param_1);
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
    sub_0800561C(param_1 + 0x74,&DAT_082ae4f4);
    uVar4 = sub_08094208(param_1,1);
    *(undefined4 *)(param_1 + 0x24) = uVar4;
    *(undefined *)(param_1 + 0x12) = 0x20;
    sub_08001EAC(0xb1);
  }
  cVar3 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar3;
  if (cVar3 == -1) {
    *(undefined *)(*(int *)(param_1 + 0x24) + 0x11) = 1;
    *(undefined4 *)(param_1 + 0x24) = 0;
    *(undefined *)(param_1 + 0xd) = 0xf;
    *(undefined *)(param_1 + 0xe) = 1;
    *(undefined *)(param_1 + 0xe2) = 1;
  }
  return in_lr;
}

