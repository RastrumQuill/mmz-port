// sub_080C0418 at 0x080C0418 (thumb)

undefined4 sub_080C0418(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_08017700(param_1,*(undefined2 *)(&DAT_0836b948 + (uint)*(byte *)(param_1 + 0x7c) * 2));
    *(undefined *)(param_1 + 0x25) = 9;
    *(undefined *)(param_1 + 0x13) = 10;
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  iVar2 = *(int *)(param_1 + 0x60) + -0x20;
  *(int *)(param_1 + 0x60) = iVar2;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar2;
  sub_080177F4(param_1);
  if ((*(char *)(param_1 + 0x13) == '\0') ||
     (cVar1 = *(char *)(param_1 + 0x13) + -1, *(char *)(param_1 + 0x13) = cVar1, cVar1 == '\0')) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0836a0c8)[*(byte *)(param_1 + 9)] + 8);
  }
  return in_lr;
}

