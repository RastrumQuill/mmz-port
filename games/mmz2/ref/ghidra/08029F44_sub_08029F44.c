// sub_08029F44 at 0x08029F44 (thumb)

undefined4 sub_08029F44(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_08035C9C(param_1,*(undefined *)(param_1 + 0x2bf));
  if (iVar1 == 0) {
    sub_08035A40(param_1,*(undefined *)(param_1 + 0x2b7));
  }
  else {
    *(undefined *)(param_1 + 0x17d) = *(undefined *)(param_1 + 0x179);
    *(undefined *)(param_1 + 0x179) = 3;
    sub_08029F90(param_1);
  }
  return in_lr;
}

