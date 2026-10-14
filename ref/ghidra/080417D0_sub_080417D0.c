// sub_080417D0 at 0x080417D0 (thumb)

undefined4 sub_080417D0(int param_1)

{
  bool bVar1;
  byte bVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_08029778(param_1,1);
    bVar1 = *(int *)(param_1 + 0x4c) < *(int *)(DAT_0202286c + 0x4c);
    *(bool *)(param_1 + 0x44) = bVar1;
    if (bVar1) {
      bVar2 = *(byte *)(param_1 + 10) | 0x10;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) & 0xef;
    }
    *(byte *)(param_1 + 10) = bVar2;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  if (*(char *)(param_1 + 0xf) == '\0') {
    if (*(char *)(param_1 + 0x73) == '\x03') {
      *(undefined *)(param_1 + 0xd) = 0x1f;
      *(undefined *)(param_1 + 0xe) = 1;
    }
  }
  else if (*(char *)(param_1 + 0x73) == '\x03') {
    sub_08029778(param_1,2);
  }
  sub_080297C0(param_1);
  return in_lr;
}

