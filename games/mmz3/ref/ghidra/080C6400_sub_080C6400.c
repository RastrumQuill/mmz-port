// sub_080C6400 at 0x080C6400 (thumb)

undefined4 sub_080C6400(undefined4 param_1,undefined param_2)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = 0;
  do {
    iVar1 = sub_0800710C(DAT_0203062c);
    if (iVar1 != 0) {
      *(undefined *)(iVar1 + 0x25) = 1;
      *(undefined *)(iVar1 + 9) = 0x48;
      *(undefined4 *)(iVar1 + 0x14) = 0x80c6461;
      *(undefined2 *)(iVar1 + 0x20) = 0;
      *(undefined *)(iVar1 + 0x22) = 0;
      *(undefined *)(iVar1 + 0x10) = 2;
      *(char *)(iVar1 + 0x11) = (char)iVar2;
      *(undefined *)(iVar1 + 0x12) = param_2;
      *(undefined4 *)(iVar1 + 0x28) = param_1;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 2);
  return in_lr;
}

