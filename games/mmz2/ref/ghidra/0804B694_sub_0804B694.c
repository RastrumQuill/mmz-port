// sub_0804B694 at 0x0804B694 (thumb)

undefined4 sub_0804B694(int param_1)

{
  char cVar1;
  undefined uVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    sub_080749FC(param_1,0,*(byte *)(param_1 + 10) >> 4 & 1);
    sub_080032EC(0x6b);
    *(undefined *)(param_1 + 0xf) = 1;
    uVar2 = 0x20;
  }
  else {
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != -1) {
      return in_lr;
    }
    if (*(char *)(param_1 + 0x13) != '\0') {
      *(undefined *)(param_1 + 0xd) = 0xc;
      *(undefined *)(param_1 + 0xe) = 0;
      *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + -1;
      return in_lr;
    }
    *(undefined *)(param_1 + 0xd) = 4;
    *(undefined *)(param_1 + 0xe) = 0;
    uVar2 = 1;
  }
  *(undefined *)(param_1 + 0x12) = uVar2;
  return in_lr;
}

