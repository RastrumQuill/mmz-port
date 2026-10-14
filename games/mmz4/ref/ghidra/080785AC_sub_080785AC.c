// sub_080785AC at 0x080785AC (thumb)

undefined4 sub_080785AC(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  cVar1 = *(char *)(param_1 + 0xe);
  *(undefined *)(*(int *)(param_1 + 200) + 0xb5) = 1;
  *(undefined *)(*(int *)(param_1 + 200) + 0xb6) = 1;
  *(undefined *)(*(int *)(param_1 + 0xcc) + 0xb6) = 0;
  *(undefined *)(*(int *)(param_1 + 0xcc) + 0xb9) = 1;
  *(char *)(param_1 + 0xe) = cVar1 + '\x01';
  *(undefined *)(param_1 + 0xf) = 0;
  sub_08128884(param_1,*(undefined4 *)(&DAT_08859c14 + (uint)*(byte *)(param_1 + 0xd) * 4));
  return in_lr;
}

