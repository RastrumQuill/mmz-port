// sub_0803E028 at 0x0803E028 (thumb)

undefined4 sub_0803E028(int param_1)

{
  bool bVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  undefined *puVar5;
  int iVar6;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_08081C8C(*(undefined4 *)(param_1 + 0xcc),2);
    sub_0800561C(param_1 + 0x74,&DAT_082ade34);
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
    sub_08029778(param_1,0);
    *(undefined *)(param_1 + 0x12) = 0x20;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  cVar3 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar3;
  if (cVar3 == '\0') {
    iVar6 = *(int *)(DAT_0202286c + 0x4c) - *(int *)(param_1 + 0x4c);
    if (iVar6 < 0) {
      iVar6 = *(int *)(param_1 + 0x4c) - *(int *)(DAT_0202286c + 0x4c);
    }
    do {
      uVar4 = DAT_02022890 * 0x343fd + 0x269ec3;
      DAT_02022890 = uVar4 & 0x7fffffff;
      uVar4 = uVar4 * 2 >> 0x11 & 0xf;
      if (iVar6 < 0x6401) {
        puVar5 = &DAT_082ae32c + uVar4;
      }
      else if (iVar6 < 0xa001) {
        puVar5 = &DAT_082ae33c + uVar4;
      }
      else {
        puVar5 = &DAT_082ae34c + uVar4;
      }
      *(undefined *)(param_1 + 0xd) = *puVar5;
      sub_0803DBD0(param_1,*(undefined *)(param_1 + 0xd));
      bVar1 = 1 < *(byte *)(param_1 + 0xca);
      if ((*(byte *)(DAT_02022b20 + 1) < 5) && (*(char *)(param_1 + 0xd) == '\x0f')) {
        bVar1 = true;
      }
    } while (bVar1);
    *(bool *)(param_1 + 0xe) = bVar1;
  }
  sub_080297C0(param_1);
  return in_lr;
}

