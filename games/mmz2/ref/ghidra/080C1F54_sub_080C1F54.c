// sub_080C1F54 at 0x080C1F54 (thumb)

undefined4 sub_080C1F54(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x28);
  sub_080128D4();
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == -1) {
    if (*(char *)(param_1 + 0x11) == '\0') {
      *(int *)(param_1 + 0x54) = *(int *)(iVar3 + 0x54) + -0x3800;
      uVar2 = 0xfffffc80;
    }
    else {
      *(int *)(param_1 + 0x54) = *(int *)(iVar3 + 0x54) + 0x3800;
      uVar2 = 0x380;
    }
    *(undefined4 *)(param_1 + 0x5c) = uVar2;
    *(int *)(param_1 + 0x58) = *(int *)(iVar3 + 0x58) + -0xe00;
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  return in_lr;
}

