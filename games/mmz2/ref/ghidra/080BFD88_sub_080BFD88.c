// sub_080BFD88 at 0x080BFD88 (thumb)

undefined4 sub_080BFD88(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x28);
  sub_080128D4();
  if (((byte)(*(char *)(param_1 + 0x10) - 1U) < 6) && (*(char *)(param_1 + 0x73) == '\x03')) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
  }
  if ((*(char *)(iVar2 + 0xc1) != '\0') && (cVar1 = *(char *)(iVar2 + 0xc0), cVar1 != '\0')) {
    *(char *)(param_1 + 0xd) = cVar1;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

