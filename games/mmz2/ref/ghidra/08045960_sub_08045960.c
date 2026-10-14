// sub_08045960 at 0x08045960 (thumb)

undefined4 sub_08045960(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0xa006);
    iVar2 = *(int *)(param_1 + 0xc0);
    if (iVar2 != 0) {
      *(undefined *)(iVar2 + 0xb4) = 1;
      iVar2 = sub_08072398(param_1);
      *(int *)(param_1 + 0xc0) = iVar2;
    }
    sub_080032EC(0x4f);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  cVar1 = *(char *)(param_1 + 0x71);
  if ((cVar1 == '\x01') || (cVar1 == '\x04')) {
    iVar2 = *(int *)(param_1 + 0xc0);
    if (iVar2 != 0) {
      *(undefined *)(iVar2 + 0xb4) = 1;
      *(int *)(param_1 + 0xc0) = 0;
    }
  }
  else if ((cVar1 == '\x03') && (*(int *)(param_1 + 0xc0) == 0)) {
    iVar2 = sub_08072398(param_1,2);
    *(int *)(param_1 + 0xc0) = iVar2;
  }
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined *)(param_1 + 0xd) = 0xb;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

