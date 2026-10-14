// sub_0803D26C at 0x0803D26C (thumb)

undefined4 sub_0803D26C(int param_1)

{
  bool bVar1;
  byte bVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 in_lr;
  undefined4 local_10;
  int local_c;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_08029778(param_1,0xf);
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
    local_10 = *(undefined4 *)(param_1 + 0x4c);
    local_c = *(int *)(param_1 + 0x50) + 0x1800;
    uVar4 = sub_08033B30(&local_10);
    *(undefined4 *)(param_1 + 0x24) = uVar4;
    sub_0800561C(param_1 + 0x74,&DAT_082adde8);
    *(undefined *)(param_1 + 0x12) = 0;
  }
  sub_080297C0(param_1);
  cVar3 = *(char *)(param_1 + 0x12) + '\x01';
  *(char *)(param_1 + 0x12) = cVar3;
  if (cVar3 == '<') {
    sub_08080FF0(param_1,1,0);
  }
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined *)(param_1 + 0xd) = 0x11;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  return in_lr;
}

