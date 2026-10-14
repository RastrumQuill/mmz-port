// sub_080931FC at 0x080931FC (thumb)

undefined4 sub_080931FC(int param_1)

{
  undefined uVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0x9001);
    *(undefined4 *)(param_1 + 0xb8) = 0;
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  iVar2 = *(int *)(param_1 + 0xb8) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0xb8) = iVar2;
  if (0x3000 < iVar2) {
    if (*(char *)(param_1 + 0x10) == '\0') {
      uVar1 = 2;
    }
    else {
      uVar1 = 3;
    }
    *(undefined *)(param_1 + 0xd) = uVar1;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  iVar2 = *(int *)(param_1 + 0x60) + 0x20;
  *(int *)(param_1 + 0x60) = iVar2;
  if (0x700 < iVar2) {
    *(undefined4 *)(param_1 + 0x60) = 0x700;
  }
  sub_080128D4(param_1);
  return in_lr;
}

