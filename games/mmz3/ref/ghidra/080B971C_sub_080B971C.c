// sub_080B971C at 0x080B971C (thumb)

undefined4 sub_080B971C(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  sub_080177F4();
  iVar3 = *(int *)(param_1 + 0x5c) + *(int *)(param_1 + 100);
  *(int *)(param_1 + 0x5c) = iVar3;
  iVar2 = *(int *)(param_1 + 0x60) + *(int *)(param_1 + 0x68);
  *(int *)(param_1 + 0x60) = iVar2;
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar3;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar2;
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == -1) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0836a0c8)[*(byte *)(param_1 + 9)] + 8);
    sub_080B9618(param_1);
  }
  return in_lr;
}

