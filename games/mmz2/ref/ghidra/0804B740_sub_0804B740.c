// sub_0804B740 at 0x0804B740 (thumb)

undefined4 sub_0804B740(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0xa112);
    *(undefined *)(param_1 + 0xdc) = 0;
    sub_0809E05C(param_1,0,0);
    sub_0809E05C(param_1,0,1);
    sub_0809E05C(param_1,0,2);
    *(undefined *)(param_1 + 0x12) = 0xc0;
    *(undefined *)(param_1 + 0xf) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  if (*(char *)(param_1 + 0xf) == '\0') {
    cVar1 = sub_080EF330(*(undefined *)(param_1 + 0x12),0x30);
    if (cVar1 == '\0') {
      sub_0809E05C(param_1,1,0);
      sub_0809E05C(param_1,1,1);
      sub_0809E05C(param_1,1,2);
      sub_080032EC(0x55);
    }
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 == -1) {
      *(undefined *)(param_1 + 0x12) = 0x40;
      *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
    }
  }
  else {
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 == -1) {
      *(undefined *)(param_1 + 0xd) = 0xf;
      *(undefined *)(param_1 + 0xe) = 0;
    }
  }
  return in_lr;
}

