// sub_0807F5BC at 0x0807F5BC (thumb)

undefined4 sub_0807F5BC(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  byte bVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0801CF00(param_1,0xc805);
    sub_08005784(param_1 + 0x74,&DAT_0885a3b8);
    *(undefined *)(param_1 + 0x12) = 0x18;
    sub_08002B10(0x15c);
    *(undefined *)(param_1 + 0xf) = 0;
    *(undefined *)(param_1 + 0xe) = 2;
  }
  sub_0801CFF0(param_1);
  if (*(char *)(param_1 + 0xf) == '\0') {
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    sub_0801CF00(param_1,0xc807);
    sub_0801CFF0(param_1);
    *(undefined *)(param_1 + 0x12) = 0;
    *(undefined *)(param_1 + 0x13) = 0;
    sub_080B4708(param_1,0,0);
  }
  else {
    if (*(char *)(param_1 + 0xf) != '\x01') {
      if (*(char *)(param_1 + 0x73) != '\x03') {
        return in_lr;
      }
      *(undefined *)(param_1 + 0xd) = 3;
      *(undefined *)(param_1 + 0xe) = 0;
      return in_lr;
    }
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != -1) {
      return in_lr;
    }
    if (*(int *)(param_1 + 0xb4) < *(int *)(param_1 + 0x54)) {
      bVar3 = *(byte *)(param_1 + 0x13);
    }
    else {
      bVar3 = *(char *)(param_1 + 0x13) + 1;
    }
    uVar2 = sub_080B3B88(param_1,bVar3 & 1,0);
    *(undefined4 *)(param_1 + 0xbc + (uint)*(byte *)(param_1 + 0x13) * 4) = uVar2;
    *(undefined *)(param_1 + 0x12) = 0x40;
    cVar1 = *(char *)(param_1 + 0x13) + '\x01';
    *(char *)(param_1 + 0x13) = cVar1;
    if (cVar1 != '\x04') {
      return in_lr;
    }
    sub_0801CF00(param_1,0xc806);
    sub_0801CFF0(param_1);
  }
  *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  return in_lr;
}

