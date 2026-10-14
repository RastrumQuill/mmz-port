// sub_0807CEE8 at 0x0807CEE8 (thumb)

undefined4 sub_0807CEE8(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x28);
  if (*(byte *)(iVar2 + 0xc) < 2) {
    if (*(int *)(iVar2 + 0x5c) != 0) {
      sub_080128D4(param_1);
    }
    uVar1 = *(undefined4 *)(iVar2 + 0x58);
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar2 + 0x54);
    *(undefined4 *)(param_1 + 0x58) = uVar1;
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_0807CF30(param_1);
  }
  return in_lr;
}

