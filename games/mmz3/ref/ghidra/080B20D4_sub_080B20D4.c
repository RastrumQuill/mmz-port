// sub_080B20D4 at 0x080B20D4 (thumb)

undefined4 sub_080B20D4(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x28);
  sub_080177F4();
  bVar1 = *(byte *)(param_1 + 0xd);
  if (bVar1 == 1) {
    if (*(char *)(param_1 + 0x12) != '\x04') {
      if (*(char *)(param_1 + 0x71) < '\x02') {
        return in_lr;
      }
      *(undefined *)(param_1 + 0xd) = 0;
      return in_lr;
    }
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    if (*(byte *)(iVar3 + 0xdd0) < 4) {
      sub_080C82FC(iVar3,param_1 + 0x54,0,*(undefined *)(param_1 + 0x11));
    }
    *(undefined *)(param_1 + 0x13) = 0x1e;
  }
  else if (bVar1 < 2) {
    if (bVar1 != 0) {
      return in_lr;
    }
    if (3 < *(byte *)(iVar3 + 0xdd0)) {
      return in_lr;
    }
    if (*(byte *)(iVar3 + 0xde9 + (uint)*(byte *)(param_1 + 0x11)) <= *(byte *)(param_1 + 0x12)) {
      return in_lr;
    }
    sub_08017700(param_1,CONCAT11(*(undefined *)(param_1 + 0x1e),*(undefined *)(param_1 + 0x70)) + 1
                );
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x01';
  }
  else {
    if (bVar1 != 2) {
      if (bVar1 != 3) {
        return in_lr;
      }
      if (*(char *)(param_1 + 0x73) != '\x03') {
        return in_lr;
      }
      sub_08017700(param_1,0xe905);
      sub_080177F4(param_1);
      *(undefined *)(param_1 + 0xd) = 0;
      *(undefined *)(param_1 + 0x12) = 0;
      return in_lr;
    }
    cVar2 = *(char *)(param_1 + 0x13) + -1;
    *(char *)(param_1 + 0x13) = cVar2;
    if (cVar2 != -1) {
      return in_lr;
    }
    sub_08017700(param_1,0xe90a);
  }
  *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  return in_lr;
}

