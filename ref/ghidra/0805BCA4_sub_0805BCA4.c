// sub_0805BCA4 at 0x0805BCA4 (thumb)

undefined4 sub_0805BCA4(int param_1)

{
  char cVar1;
  undefined uVar2;
  undefined4 in_lr;
  
  cVar1 = sub_0805B778();
  if (cVar1 == '\0') {
    uVar2 = 1;
  }
  else {
    if ((*(ushort *)(param_1 + 0x90) & 1) == 0) {
      return in_lr;
    }
    uVar2 = 5;
  }
  *(undefined *)(param_1 + 0xd) = uVar2;
  *(undefined *)(param_1 + 0xe) = 0;
  return in_lr;
}

