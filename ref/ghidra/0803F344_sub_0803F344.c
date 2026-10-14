// sub_0803F344 at 0x0803F344 (thumb)

undefined4 sub_0803F344(int param_1)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 in_lr;
  
  uVar4 = *(undefined4 *)(param_1 + 0xcc);
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined *)(param_1 + 0xc9) = 0x3c;
    sub_08029778(param_1,0x13);
    sub_08081C8C(uVar4,2);
    sub_0800561C(param_1 + 0x74,&DAT_082ade34);
    *(undefined4 *)(param_1 + 0x54) = 0x80;
    uVar4 = 0x80;
    if (0 < *(int *)(param_1 + 0xb8)) {
      uVar4 = 0xffffff80;
    }
    *(undefined4 *)(param_1 + 0x54) = uVar4;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
  iVar3 = *(int *)(param_1 + 0x54) * 0xf0;
  if (iVar3 < 0) {
    iVar3 = iVar3 + 0xff;
  }
  *(int *)(param_1 + 0x54) = iVar3 >> 8;
  sub_0803D880(param_1);
  sub_080297C0(param_1);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined *)(param_1 + 0xd) = 2;
    *(undefined *)(param_1 + 0xe) = 1;
    bVar1 = 0 < *(int *)(DAT_0202286c + 0x4c) - *(int *)(param_1 + 0x4c);
    *(bool *)(param_1 + 0x44) = bVar1;
    if (bVar1) {
      bVar2 = *(byte *)(param_1 + 10) | 0x10;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) & 0xef;
    }
    *(byte *)(param_1 + 10) = bVar2;
    *(undefined *)(param_1 + 0x12) = 1;
    sub_0803E028(param_1);
  }
  return in_lr;
}

