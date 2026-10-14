// sub_08033528 at 0x08033528 (thumb)

undefined4 sub_08033528(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_0803A1A8();
  if (iVar1 == 0) {
    *(undefined *)(param_1 + 0x100) = 0;
  }
  else {
    *(undefined *)(param_1 + 0x101) = 1;
    sub_08033558(param_1);
  }
  return in_lr;
}

