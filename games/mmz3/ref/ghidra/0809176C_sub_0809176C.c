// sub_0809176C at 0x0809176C (thumb)

undefined4 sub_0809176C(int param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x28);
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_08007390(param_1 + 0x74,&DAT_0836605c);
    sub_080049A0(param_1 + 0x34,*(undefined4 *)(iVar3 + 0x3c),param_1 + 0x54);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x40;
    *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 1;
    *(undefined *)(param_1 + 0x24) = 0;
    *(undefined *)(param_1 + 0x12) = 0;
    *(undefined *)(param_1 + 0x13) = 0x59;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  cVar1 = *(char *)(param_1 + 0x12);
  if (cVar1 == '\0') {
    bVar2 = *(byte *)(param_1 + 10) | 1;
  }
  else {
    bVar2 = *(byte *)(param_1 + 10) & 0xfe;
  }
  *(byte *)(param_1 + 10) = bVar2;
  *(char *)(param_1 + 0x12) = cVar1 + '\x01';
  if ((byte)(cVar1 + 1U) == *(byte *)(param_1 + 0x13) >> 4) {
    *(undefined *)(param_1 + 0x12) = 0;
    *(byte *)(param_1 + 0x13) = *(byte *)(param_1 + 0x13) - 3;
  }
  *(undefined2 *)(param_1 + 0x52) = *(undefined2 *)(iVar3 + 0x52);
  if ((*(uint *)(iVar3 + 0xc4) & 8) != 0) {
    *(undefined *)(param_1 + 0xd) = 0;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

