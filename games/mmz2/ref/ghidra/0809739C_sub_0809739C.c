// sub_0809739C at 0x0809739C (thumb)

undefined4 sub_0809739C(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0x9c00);
    if (*(int *)(param_1 + 0x28) != 0) {
      *(undefined *)(*(int *)(param_1 + 0x28) + 0x11) = 1;
    }
    uVar1 = sub_080ABE84(param_1,0,0x9c09);
    *(undefined4 *)(param_1 + 0x28) = uVar1;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    iVar2 = *(int *)(param_1 + 0x5c) + 0x10;
  }
  else {
    iVar2 = *(int *)(param_1 + 0x5c) + -0x10;
  }
  *(int *)(param_1 + 0x5c) = iVar2;
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  if (*(int *)(param_1 + 0x5c) == 0) {
    *(undefined *)(param_1 + 0xd) = 8;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

