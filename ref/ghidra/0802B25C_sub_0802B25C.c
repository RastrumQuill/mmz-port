// sub_0802B25C at 0x0802B25C (thumb)

undefined4 sub_0802B25C(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    bVar1 = *(byte *)(param_1 + 0x10);
    if (bVar1 == 1) {
      sub_08029790(param_1,0,0,4);
    }
    else if (bVar1 < 2) {
      if (bVar1 == 0) {
        sub_08029778(param_1,0);
      }
    }
    else if (bVar1 == 2) {
      sub_08029790(param_1,0,0,8);
    }
    else if (bVar1 == 3) {
      sub_08029778(param_1,0);
    }
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
    sub_08001EAC(0x15);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
  }
  sub_080297C0(param_1);
  if (*(char *)(param_1 + 0xf) == '\0') {
    if (*(char *)(param_1 + 0x73) == '\x04') {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
      *(undefined *)(param_1 + 0x12) = 6;
      *(undefined *)(param_1 + 0xf) = 1;
    }
  }
  else {
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 == -1) {
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
      *(undefined *)(param_1 + 0xe) = 1;
    }
  }
  return in_lr;
}

