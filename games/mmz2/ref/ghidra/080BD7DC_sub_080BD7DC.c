// sub_080BD7DC at 0x080BD7DC (thumb)

undefined4 sub_080BD7DC(int param_1)

{
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x54);
  *(int *)(param_1 + 0x58) =
       *(int *)(*(int *)(param_1 + 0x28) + 0x58) +
       *(int *)(&DAT_083484b0 + (uint)*(byte *)(param_1 + 0x10) * 4);
  sub_080EF118(param_1,*(undefined4 *)(&DAT_083484a8 + (uint)*(byte *)(param_1 + 0xd) * 4));
  sub_08002EA0(*(char *)(param_1 + 0x10) + 'Z');
  return in_lr;
}

