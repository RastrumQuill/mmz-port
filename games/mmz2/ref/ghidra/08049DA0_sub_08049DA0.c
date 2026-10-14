// sub_08049DA0 at 0x08049DA0 (thumb)

undefined4 sub_08049DA0(int param_1)

{
  undefined uVar1;
  char cVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0xa802);
    cVar2 = *(char *)(*(int *)(param_1 + 200) + 0xd0);
    if (cVar2 == '\0') {
      *(undefined4 *)(param_1 + 0x60) = 0xfffffac0;
      *(undefined *)(param_1 + 0xd0) = 0;
    }
    else {
      if (cVar2 == '\x01') {
        *(undefined4 *)(param_1 + 0x60) = 0xfffff9c0;
        uVar1 = 2;
      }
      else {
        *(undefined4 *)(param_1 + 0x60) = 0xfffffa80;
        uVar1 = 1;
      }
      *(undefined *)(param_1 + 0xd0) = uVar1;
    }
    *(undefined *)(param_1 + 0x12) = 0x15;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x40;
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if (cVar2 == -1) {
    *(undefined *)(param_1 + 0xd) = 0xe;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

