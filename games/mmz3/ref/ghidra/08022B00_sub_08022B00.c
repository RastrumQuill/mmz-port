// sub_08022B00 at 0x08022B00 (thumb)

longlong sub_08022B00(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  uint in_lr;
  
  cVar1 = *(char *)(*(int *)(param_1 + 0xc) + 1);
  sub_08021E74(cVar1,*(undefined4 *)(*(int *)(param_1 + 0xc) + 4));
  if ((*(short *)(*(int *)(param_1 + 0xc) + 2) == 0) && (cVar1 == '\0')) {
    iVar3 = *(int *)(param_1 + 0x10);
    uVar2 = sub_0800A104(*(undefined4 *)(iVar3 + 0x54),*(undefined4 *)(iVar3 + 0x58));
    *(undefined4 *)(iVar3 + 0x58) = uVar2;
  }
  return (ulonglong)in_lr << 0x20;
}

