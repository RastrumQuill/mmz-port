// sub_08060E34 at 0x08060E34 (thumb)

undefined4 sub_08060E34(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 in_lr;
  int local_10;
  int local_c;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0x6300);
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      local_10 = *(int *)(param_1 + 0xb4);
      iVar2 = 0x3000;
    }
    else {
      local_10 = *(int *)(param_1 + 0xb4);
      iVar2 = -0x3000;
    }
    local_10 = local_10 + iVar2;
    local_c = *(int *)(param_1 + 0xb8) + 0x7600;
    sub_08082030(&local_10,0,*(undefined *)(param_1 + 0x11));
    *(undefined *)(param_1 + 0x12) = 0x60;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == -1) {
    *(undefined *)(param_1 + 0xd) = 4;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

