// sub_08018C64 at 0x08018C64 (thumb)

undefined4 sub_08018C64(int param_1)

{
  char cVar1;
  char cVar2;
  undefined4 in_lr;
  
  cVar1 = *(char *)(param_1 + 0x71);
  if (*(char *)(param_1 + 0xd) != '\f') {
    sub_08015F80(param_1);
  }
  cVar2 = *(char *)(param_1 + 0x71);
  if (cVar1 != cVar2) {
    sub_08018D18(param_1,*(undefined *)(param_1 + 0x115),cVar2);
  }
  return in_lr;
}

