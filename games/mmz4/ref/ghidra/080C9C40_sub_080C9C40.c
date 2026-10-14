// sub_080C9C40 at 0x080C9C40 (thumb)

undefined4 sub_080C9C40(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  if (*(int *)(param_1 + 0x5c) == 0) {
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  }
  else {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  }
  if (((*(char *)(param_1 + 0x11) == '\0') && (*(char *)(param_1 + 0xb4) == '\0')) &&
     (cVar1 = sub_080CA02C(param_1), cVar1 != '\0')) {
    *(undefined *)(param_1 + 0xd) = 2;
    *(undefined *)(param_1 + 0xe) = 0;
    if (*(int *)(param_1 + 0x28) != 0) {
      sub_080CA084(param_1);
    }
    uVar2 = sub_080C97DC(param_1 + 0x54,1,1,*(byte *)(param_1 + 10) >> 4 & 1);
    *(undefined4 *)(param_1 + 0x28) = uVar2;
    *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0x54);
    *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_1 + 0x58);
  }
  return in_lr;
}

