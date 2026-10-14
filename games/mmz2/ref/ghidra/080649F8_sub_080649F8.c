// sub_080649F8 at 0x080649F8 (thumb)

undefined4 sub_080649F8(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0xad01);
    sub_08006E08(param_1 + 0x74,&DAT_0833d760);
    *(undefined *)(param_1 + 0x12) = 0x40;
    iVar2 = sub_08003390(0xd4);
    if (iVar2 == 0) {
      sub_080032EC(0xd4);
    }
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == -1) {
    *(undefined *)(param_1 + 0xd) = 0xb;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

