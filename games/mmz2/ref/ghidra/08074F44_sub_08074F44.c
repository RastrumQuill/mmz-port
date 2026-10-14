// sub_08074F44 at 0x08074F44 (thumb)

undefined4 sub_08074F44(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_08006E08(param_1 + 0x74,&DAT_0833f904);
    *(undefined *)(param_1 + 0x12) = 0x20;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  iVar2 = *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x60) = iVar2 + -1;
  if (iVar2 == 0) {
    cVar1 = *(char *)(param_1 + 0xd) + '\x01';
  }
  else {
    cVar1 = '\0';
  }
  *(char *)(param_1 + 0xd) = cVar1;
  *(undefined *)(param_1 + 0xe) = 0;
  return in_lr;
}

