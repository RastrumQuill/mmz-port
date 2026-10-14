// sub_08043054 at 0x08043054 (thumb)

undefined4 sub_08043054(int param_1)

{
  bool bVar1;
  char cVar2;
  byte bVar3;
  uint uVar4;
  undefined4 in_lr;
  
  cVar2 = sub_08042DE4();
  if (cVar2 == '\0') {
    if (*(char *)(param_1 + 0xe) == '\0') {
      sub_08029654(param_1);
      sub_08029778(param_1,0);
      sub_0800561C(param_1 + 0x74,&DAT_082ae55c);
      uVar4 = sub_0804246C(param_1);
      *(undefined *)(param_1 + 0x12) = (&DAT_082ae7ea)[uVar4 & 0xff];
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    else if (*(char *)(param_1 + 0xe) != '\x01') {
      return in_lr;
    }
    bVar1 = 0 < *(int *)(DAT_0202286c + 0x4c) - *(int *)(param_1 + 0x4c);
    *(bool *)(param_1 + 0x44) = bVar1;
    if (bVar1) {
      bVar3 = *(byte *)(param_1 + 10) | 0x10;
    }
    else {
      bVar3 = *(byte *)(param_1 + 10) & 0xef;
    }
    *(byte *)(param_1 + 10) = bVar3;
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 == '\0') {
      sub_080424BC(param_1);
    }
    sub_080297C0(param_1);
  }
  return in_lr;
}

