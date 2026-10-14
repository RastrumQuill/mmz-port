// sub_0804B2E0 at 0x0804B2E0 (thumb)

undefined4 sub_0804B2E0(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0xa103);
    *(undefined4 *)(param_1 + 0x60) = 0xfffffa00;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  iVar1 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x58) = iVar1;
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x40;
  if (iVar1 <= *(int *)(param_1 + 0xcc)) {
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0xcc);
    *(undefined *)(param_1 + 0xd) = 3;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

