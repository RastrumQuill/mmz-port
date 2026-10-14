// sub_08095F20 at 0x08095F20 (thumb)

undefined4 sub_08095F20(int param_1)

{
  char cVar1;
  undefined uVar2;
  undefined4 in_lr;
  
  cVar1 = sub_08095868();
  if (cVar1 == '\0') {
    uVar2 = 1;
  }
  else {
    if ((*(uint *)(param_1 + 0x8c) & 1) == 0) {
      return in_lr;
    }
    uVar2 = 5;
  }
  *(undefined *)(param_1 + 0xd) = uVar2;
  *(undefined *)(param_1 + 0xe) = 0;
  return in_lr;
}

