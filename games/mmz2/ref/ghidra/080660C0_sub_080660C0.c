// sub_080660C0 at 0x080660C0 (thumb)

undefined4 sub_080660C0(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_08065A24();
  if (iVar1 != 0) {
    *(undefined *)(param_1 + 0xd) = 0;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

