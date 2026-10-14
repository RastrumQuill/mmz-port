// sub_0809EC74 at 0x0809EC74 (thumb)

undefined4 sub_0809EC74(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x20);
  uVar1 = *(undefined4 *)(iVar2 + 0x50);
  *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(iVar2 + 0x4c);
  *(undefined4 *)(param_1 + 0x50) = uVar1;
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x4c) - *(int *)(param_1 + 0xbc);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x50) - *(int *)(param_1 + 0xc0);
  *(int *)(param_1 + 0xbc) = *(int *)(param_1 + 0x4c);
  *(int *)(param_1 + 0xc0) = *(int *)(param_1 + 0x50);
  if ((1 < *(byte *)(iVar2 + 0xc)) && (*(char *)(iVar2 + 0x11) != '\0')) {
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_082b5184 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
  }
  return in_lr;
}

