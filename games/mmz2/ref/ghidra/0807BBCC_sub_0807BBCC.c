// sub_0807BBCC at 0x0807BBCC (thumb)

undefined4 sub_0807BBCC(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  undefined4 local_10;
  undefined4 local_c;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    local_10 = *(undefined4 *)(&DAT_083402e0 + (uint)*(byte *)(param_1 + 0x10) * 8);
    local_c = *(undefined4 *)(&DAT_083402e4 + (uint)*(byte *)(param_1 + 0x10) * 8);
    if (*(char *)(param_1 + 0x11) != '\0') {
      sub_080A4558(param_1,&local_10,3,1);
      sub_080032EC(0x91);
    }
    *(undefined *)(param_1 + 0x12) = 0x30;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == -1) {
    *(undefined *)(param_1 + 0xd) = 2;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

