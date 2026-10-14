// sub_080BAC70 at 0x080BAC70 (thumb)

undefined4 sub_080BAC70(int param_1)

{
  char cVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  cVar1 = sub_080BB1A8();
  if (cVar1 == '\0') {
    uVar3 = sub_080BB204(param_1);
    bVar2 = sub_080B4580(uVar3,*(undefined *)(param_1 + 0x11));
    if (bVar2 != 0) {
      bVar2 = *(char *)(param_1 + 0x13) + 0x1fU & 0x1f;
    }
    *(byte *)(param_1 + 0x13) = bVar2;
  }
  else {
    *(undefined *)(param_1 + 0xd) = 2;
    *(undefined *)(param_1 + 0xe) = 0;
    sub_080BACB4(param_1);
  }
  return in_lr;
}

