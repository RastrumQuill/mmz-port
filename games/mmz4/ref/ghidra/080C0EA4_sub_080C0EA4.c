// sub_080C0EA4 at 0x080C0EA4 (thumb)

undefined4 sub_080C0EA4(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x28);
  bVar1 = *(byte *)(param_1 + 0x11);
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_08005784(param_1 + 0x74,&DAT_08861cf0);
    sub_0801CF00(param_1,0x3a04);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(param_1);
  iVar3 = bVar1 + 1;
  iVar2 = iVar3 * (*(int *)(iVar4 + 0xb8) - *(int *)(iVar4 + 0x54));
  if (iVar2 < 0) {
    iVar2 = iVar2 + 3;
  }
  *(int *)(param_1 + 0x54) = *(int *)(iVar4 + 0x54) + (iVar2 >> 2);
  iVar3 = iVar3 * ((*(int *)(iVar4 + 0xbc) + 0x1800) - *(int *)(iVar4 + 0x58));
  if (iVar3 < 0) {
    iVar3 = iVar3 + 3;
  }
  *(int *)(param_1 + 0x58) = *(int *)(iVar4 + 0x58) + (iVar3 >> 2) + -0x1800;
  if (1 < *(byte *)(iVar4 + 0xc)) {
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

