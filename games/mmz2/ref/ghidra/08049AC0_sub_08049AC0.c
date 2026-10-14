// sub_08049AC0 at 0x08049AC0 (thumb)

undefined4 sub_08049AC0(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 200);
  sub_080128D4(param_1);
  *(undefined *)(param_1 + 0xbf) = 1;
  if (*(char *)(iVar1 + 0xbf) != '\0') {
    *(undefined *)(iVar1 + 0xd1) = 0;
    *(undefined *)(param_1 + 0xd) = *(undefined *)(param_1 + 0xf);
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

