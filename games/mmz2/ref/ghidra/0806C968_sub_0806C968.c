// sub_0806C968 at 0x0806C968 (thumb)

undefined4 sub_0806C968(int param_1)

{
  undefined2 *puVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x28);
  sub_08012580();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  puVar1 = (undefined2 *)(iVar2 + 0xd8);
  sub_080127E4(param_1,*puVar1);
  sub_080128D4(param_1);
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 0x10;
  *(undefined *)(param_1 + 0x1d) = *(undefined *)(iVar2 + 0x1c);
  *(undefined2 *)(param_1 + 0xc0) = *puVar1;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  sub_0806C9C8(param_1);
  return in_lr;
}

