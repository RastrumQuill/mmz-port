// sub_08048A24 at 0x08048A24 (thumb)

undefined4 sub_08048A24(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0xa502);
    if (*(char *)(param_1 + 0xd0) == '\0') {
      uVar2 = 0xfffffac0;
    }
    else if (*(char *)(param_1 + 0xd0) == '\x01') {
      uVar2 = 0xfffffa80;
    }
    else {
      uVar2 = 0xfffff9c0;
    }
    *(undefined4 *)(param_1 + 0x60) = uVar2;
    *(undefined *)(param_1 + 0x12) = 0x16;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x40;
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == -1) {
    *(undefined *)(param_1 + 0xd) = 0x16;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

