// sub_08055008 at 0x08055008 (thumb)

undefined4 sub_08055008(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        sub_08017700(param_1,0x5405);
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      }
      else if (bVar1 != 3) {
        return in_lr;
      }
      sub_080177F4(param_1);
      if (*(char *)(param_1 + 0x73) == '\x03') {
        *(undefined *)(param_1 + 0xd) = 0;
        *(undefined *)(param_1 + 0xe) = 0;
      }
      if (*(char *)(param_1 + 0x71) != '\x01') {
        return in_lr;
      }
      sub_08007390(param_1 + 0x74,&DAT_083602c0);
      return in_lr;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    sub_08017700(param_1,0x5404);
    *(undefined *)(param_1 + 0x12) = 0x5a;
    if (*(char *)(param_1 + 0xbc) == '\0') {
      sub_0800471C(0x128);
    }
    else {
      sub_0800471C(0x129);
    }
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  cVar2 = sub_080FE4D8(*(undefined *)(param_1 + 0x12),0xc);
  if (cVar2 == '\0') {
    if (*(char *)(param_1 + 0xbc) == '\0') {
      sub_080A7730(*(int *)(param_1 + 0x54) + -0xc00,*(int *)(param_1 + 0x58) + 0xc00,0);
      sub_080A7730(*(int *)(param_1 + 0x54) + 0xc00,*(int *)(param_1 + 0x58) + 0xc00,1);
    }
    else {
      sub_080A76E0(*(int *)(param_1 + 0x54) + -0xc00,*(int *)(param_1 + 0x58) + -0xc00,0);
      sub_080A76E0(*(int *)(param_1 + 0x54) + 0xc00,*(int *)(param_1 + 0x58) + -0xc00,1);
    }
  }
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if (cVar2 == '\0') {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080177F4(param_1);
  return in_lr;
}

