// sub_08098174 at 0x08098174 (thumb)

undefined4 sub_08098174(int param_1)

{
  bool bVar1;
  byte bVar2;
  char cVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(int *)(param_1 + 0x60) = (int)*(short *)(param_1 + 0xc2);
    *(undefined *)(param_1 + 0x13) = 0x10;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  sub_080128D4(param_1);
  cVar3 = *(char *)(param_1 + 0x13) + -1;
  *(char *)(param_1 + 0x13) = cVar3;
  if (cVar3 == '\0') {
    *(undefined *)(param_1 + 0xd) = 0;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  else {
    bVar1 = 0 < *(int *)(param_1 + 0x60);
    if (bVar1) {
      bVar2 = *(byte *)(param_1 + 10) | 0x20;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) & 0xdf;
    }
    *(byte *)(param_1 + 10) = bVar2;
    *(bool *)(param_1 + 0x4d) = bVar1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xdf | bVar1 << 5;
    cVar3 = sub_080977C8(param_1,*(undefined4 *)(param_1 + 0x60));
    if (cVar3 == '\x02') {
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) - *(int *)(param_1 + 0x60);
    }
    else if (cVar3 != '\x01') {
      sub_080978A0(param_1);
    }
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) / 2;
  }
  return in_lr;
}

