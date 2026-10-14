// sub_080A4B3C at 0x080A4B3C (thumb)

undefined4 sub_080A4B3C(int param_1)

{
  undefined4 in_lr;
  
  if ((1 < *(byte *)(*(int *)(param_1 + 0x28) + 0xc)) && (*(char *)(param_1 + 0xd) != '\a')) {
    *(undefined *)(param_1 + 0xd) = 7;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  sub_080FE2C0(param_1,*(undefined4 *)(&DAT_08368218 + (uint)*(byte *)(param_1 + 0xd) * 4));
  sub_080FE2C0(param_1,*(undefined4 *)(&UNK_08368240 + (uint)*(byte *)(param_1 + 0xd) * 4));
  return in_lr;
}

