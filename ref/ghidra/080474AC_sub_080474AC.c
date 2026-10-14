// sub_080474AC at 0x080474AC (thumb)

undefined4 sub_080474AC(int param_1)

{
  undefined uVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_08029778(param_1,1);
    *(undefined *)(param_1 + 0xe) = 0;
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      uVar3 = sub_08008BC0(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
      *(undefined4 *)(param_1 + 0x4c) = uVar3;
      uVar1 = 0x40;
    }
    else {
      uVar3 = sub_080089EC(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
      *(undefined4 *)(param_1 + 0x4c) = uVar3;
      uVar1 = 0xc0;
    }
    *(undefined *)(param_1 + 0x1f) = uVar1;
    *(undefined4 *)(param_1 + 0x58) = 0xfffffc80;
    *(undefined *)(param_1 + 0x12) = 0x14;
    sub_0800561C(param_1 + 0x74,&DAT_082ae9e0);
  }
  sub_080297C0(param_1);
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    uVar3 = sub_08008BC0(*(undefined4 *)(param_1 + 0x4c));
  }
  else {
    uVar3 = sub_080089EC(*(undefined4 *)(param_1 + 0x4c));
  }
  *(undefined4 *)(param_1 + 0x4c) = uVar3;
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if (cVar2 == -1) {
    *(undefined *)(param_1 + 0xd) = 8;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  return in_lr;
}

