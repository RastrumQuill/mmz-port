// sub_080A05A4 at 0x080A05A4 (thumb)

undefined4 sub_080A05A4(int param_1)

{
  undefined uVar1;
  char cVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_0809C930(param_1,0);
    *(undefined *)(param_1 + 0xe) = 0;
    if (*(char *)(param_1 + 0x10) == '\x01') {
      uVar1 = 0x80;
    }
    else {
      uVar1 = 0x98;
    }
    *(undefined *)(param_1 + 0x12) = uVar1;
  }
  sub_0809C980(param_1);
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if (cVar2 == -1) {
    *(undefined *)(param_1 + 0xd) = 2;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  return in_lr;
}

