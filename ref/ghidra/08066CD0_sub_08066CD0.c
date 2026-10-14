// sub_08066CD0 at 0x08066CD0 (thumb)

void sub_08066CD0(int param_1)

{
  byte bVar1;
  byte bVar2;
  
  if (*(char *)(param_1 + 0xd) == '\x02') {
    bVar1 = *(byte *)(*(int *)(param_1 + 0x18) + 9);
    bVar2 = bVar1 & 1;
    if ((bVar1 & 1) != 0) {
      return;
    }
    *(byte *)(param_1 + 0xd) = bVar2;
  }
  else {
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 1) == 0) {
      return;
    }
    bVar2 = 0;
    *(undefined *)(param_1 + 0xd) = 2;
  }
  *(byte *)(param_1 + 0xe) = bVar2;
  return;
}

