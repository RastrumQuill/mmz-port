// sub_080411BC at 0x080411BC (thumb)

undefined4 sub_080411BC(int param_1)

{
  byte bVar1;
  undefined uVar2;
  char cVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_08029778(param_1,3);
    *(undefined *)(param_1 + 0xe) = 0;
    if (*(char *)(param_1 + 0xca) == '\0') {
      bVar1 = *(byte *)(param_1 + 0xc9);
      if (bVar1 == 1) {
        sub_08083968(param_1,0,6);
      }
      else if (bVar1 < 2) {
        if (bVar1 == 0) {
          sub_080833BC(param_1,0,0);
          sub_08001EAC(0xa1);
        }
      }
      else if (bVar1 == 2) {
        sub_08084260(param_1,0,0);
        sub_08001EAC(0x85);
      }
      else if (bVar1 == 3) {
        sub_08084260(param_1,3,0);
        sub_08001EAC(0xa1);
      }
      uVar2 = 0;
    }
    else {
      sub_080833BC(param_1,1,0);
      *(char *)(param_1 + 0xca) = '\0';
      sub_08001EAC(0xa1);
      uVar2 = 1;
    }
    *(undefined *)(param_1 + 0xcb) = uVar2;
  }
  sub_080297C0(param_1);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    cVar3 = *(char *)(param_1 + 0x13) + -1;
    *(char *)(param_1 + 0x13) = cVar3;
    if (cVar3 == '\0') {
      uVar2 = 0x14;
    }
    else {
      uVar2 = 0x12;
    }
    *(undefined *)(param_1 + 0xd) = uVar2;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  return in_lr;
}

