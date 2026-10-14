// sub_08043D10 at 0x08043D10 (thumb)

undefined4 sub_08043D10(int param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  cVar1 = sub_08042DE4();
  if (cVar1 == '\0') {
    if (*(char *)(param_1 + 0xe) == '\0') {
      sub_08029778(param_1,2);
      iVar3 = *(int *)(DAT_0202286c + 0x4c);
      iVar4 = iVar3 - *(int *)(param_1 + 0x4c);
      *(bool *)(param_1 + 0x44) = 0 < iVar4;
      if (iVar3 == *(int *)(param_1 + 0x4c) || iVar4 < 0) {
        bVar2 = *(byte *)(param_1 + 10) & 0xef;
      }
      else {
        bVar2 = *(byte *)(param_1 + 10) | 0x10;
      }
      *(byte *)(param_1 + 10) = bVar2;
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    else if (*(char *)(param_1 + 0xe) != '\x01') {
      return in_lr;
    }
    sub_080297C0(param_1);
    if (*(char *)(param_1 + 0x73) == '\x03') {
      *(undefined *)(param_1 + 0xd) = 0;
      *(undefined *)(param_1 + 0xe) = 0;
    }
  }
  return in_lr;
}

