// sub_080678D0 at 0x080678D0 (thumb)

undefined4 sub_080678D0(int param_1)

{
  undefined uVar1;
  char cVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0801CF00(param_1,0xa912);
    if (*(short *)(DAT_0202dbf0 + 0xa4) < 5) {
      *(undefined *)(param_1 + 0xdd) = 1;
      uVar1 = 0x44;
    }
    else {
      *(undefined *)(param_1 + 0xdd) = 0;
      uVar1 = 0x3c;
    }
    *(undefined *)(param_1 + 0x12) = uVar1;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_0801CFF0(param_1);
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if (cVar2 == -1) {
    *(undefined *)(param_1 + 0xd) = 0x12;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

