// sub_08068E48 at 0x08068E48 (thumb)

undefined4 sub_08068E48(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(*(int *)(param_1 + 0xc) + 4);
  iVar2 = *(int *)(param_1 + 0x2c);
  uVar1 = param_2[1];
  *(undefined4 *)(iVar2 + 0x5c) = *param_2;
  *(undefined4 *)(iVar2 + 0x60) = uVar1;
  if (((*(uint *)(iVar3 + 4) & 0x200ff) == 0x20002) &&
     (iVar2 = *(int *)(param_1 + 0x2c), *(char *)(iVar2 + 0xb9) != '\0')) {
    *(undefined4 *)(iVar2 + 0xc) = 2;
    *(undefined4 *)(iVar2 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(iVar2 + 9) * 4) + 8);
  }
  return in_lr;
}

