// sub_080B200C at 0x080B200C (thumb)

undefined4 sub_080B200C(int param_1)

{
  byte bVar1;
  char *pcVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x28);
  sub_080177F4();
  if (3 < *(byte *)(iVar3 + 0xdd0)) {
    return in_lr;
  }
  bVar1 = *(byte *)(param_1 + 0xd);
  if (bVar1 == 1) {
    if (*(byte *)(iVar3 + 0xde9 + (uint)*(byte *)(param_1 + 0x11)) <= *(byte *)(param_1 + 0x12)) {
      return in_lr;
    }
    sub_08017700(param_1,0xe904);
    sub_080177F4(param_1);
    sub_0800471C(0x13a);
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x01';
  }
  else {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        return in_lr;
      }
      if (*(char *)(param_1 + 0x73) != '\x03') {
        return in_lr;
      }
      sub_08017700(param_1,0xe902);
      sub_080177F4(param_1);
      *(undefined *)(param_1 + 0xd) = 0;
      if (*(char *)(param_1 + 0x12) != '\x04') {
        return in_lr;
      }
      pcVar2 = (char *)(iVar3 + 0xde9 + (uint)*(byte *)(param_1 + 0x11));
      *pcVar2 = *pcVar2 + -4;
      *(undefined *)(param_1 + 0x12) = 0;
      return in_lr;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    sub_08017700(param_1,0xe903);
    sub_080177F4(param_1);
  }
  *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  return in_lr;
}

