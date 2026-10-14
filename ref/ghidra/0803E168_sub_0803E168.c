// sub_0803E168 at 0x0803E168 (thumb)

undefined4 sub_0803E168(int param_1)

{
  bool bVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  uVar3 = *(undefined4 *)(param_1 + 0xcc);
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) & 0xf3 | 8;
    bVar1 = 0 < *(int *)(DAT_0202286c + 0x4c) - *(int *)(param_1 + 0x4c);
    *(bool *)(param_1 + 0x44) = bVar1;
    if (bVar1) {
      bVar2 = *(byte *)(param_1 + 10) | 0x10;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) & 0xef;
    }
    *(byte *)(param_1 + 10) = bVar2;
    sub_08029778(param_1,1);
    *(undefined *)(param_1 + 0x12) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  if (*(byte *)(param_1 + 0x12) < 9) {
    sub_08081C8C(uVar3,4);
    sub_0800561C(param_1 + 0x74,&DAT_082adea4);
  }
  else if (*(byte *)(param_1 + 0x12) < 0x17) {
    sub_08081C8C(uVar3,3);
    sub_0800561C(param_1 + 0x74,&DAT_082adec0);
  }
  else {
    sub_08081C8C(uVar3,3);
    sub_0800561C(param_1 + 0x74,&DAT_082adedc);
  }
  *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x01';
  sub_080297C0(param_1);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined *)(param_1 + 0xd) = 4;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

