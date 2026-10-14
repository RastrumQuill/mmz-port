// sub_0807AA70 at 0x0807AA70 (thumb)

undefined4 sub_0807AA70(int param_1)

{
  undefined uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x28);
  sub_080128D4(param_1);
  if (*(byte *)(iVar2 + 0xc) < 2) {
    iVar5 = *(int *)(iVar2 + 0xb4);
    uVar1 = *(undefined *)(param_1 + 0x12);
    iVar3 = sub_080EF150(*(int *)(iVar2 + 0x54) - iVar5,uVar1);
    iVar4 = sub_080EF150(*(int *)(iVar2 + 0x58) - *(int *)(iVar2 + 0xb8),uVar1);
    *(uint *)(param_1 + 0x54) = iVar5 + (uint)*(byte *)(param_1 + 0x13) * iVar3;
    *(uint *)(param_1 + 0x58) = *(int *)(iVar2 + 0xb8) + iVar4 * (uint)*(byte *)(param_1 + 0x13);
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_0807A7A0(param_1);
  }
  return in_lr;
}

