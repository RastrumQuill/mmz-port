// sub_08039D68 at 0x08039D68 (thumb)

undefined4 sub_08039D68(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x20);
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    iVar1 = *(int *)(iVar2 + 0x4c);
    iVar3 = 0x1700;
  }
  else {
    iVar1 = *(int *)(iVar2 + 0x4c);
    iVar3 = -0x1700;
  }
  *(int *)(param_1 + 0x4c) = iVar1 + iVar3;
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(iVar2 + 0x50);
  *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  sub_080297C0(param_1);
  return in_lr;
}

