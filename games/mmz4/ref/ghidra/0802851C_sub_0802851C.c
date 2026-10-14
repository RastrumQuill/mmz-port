// sub_0802851C at 0x0802851C (thumb)

longlong sub_0802851C(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint in_lr;
  
  cVar1 = *(char *)(*(int *)(param_1 + 0xc) + 1);
  sub_080276DC(cVar1,*(undefined4 *)(*(int *)(param_1 + 0xc) + 4));
  if ((*(short *)(*(int *)(param_1 + 0xc) + 2) == 0) && (cVar1 == '\0')) {
    iVar4 = *(int *)(param_1 + 0x10);
    if ((DAT_02000c80 & 0x7f) == 4) {
      iVar2 = sub_08128954(*(int *)(iVar4 + 0x54) + -0xf000,0x3c000);
      iVar2 = iVar2 + 0xf000;
    }
    else {
      iVar2 = *(int *)(iVar4 + 0x54);
    }
    uVar3 = sub_08008534(iVar2,*(undefined4 *)(iVar4 + 0x58));
    *(undefined4 *)(iVar4 + 0x58) = uVar3;
  }
  return (ulonglong)in_lr << 0x20;
}

