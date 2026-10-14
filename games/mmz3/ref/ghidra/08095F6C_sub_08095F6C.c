// sub_08095F6C at 0x08095F6C (thumb)

undefined4 sub_08095F6C(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  cVar1 = sub_08095868();
  if (cVar1 == '\0') {
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  if ((*(uint *)(param_1 + 0x8c) & 0x20001) == 0x20001) {
    *(undefined *)(param_1 + 0xd) = 10;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

