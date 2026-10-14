// sub_08036B08 at 0x08036B08 (thumb)

undefined4 sub_08036B08(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  sub_0803A3BC(param_1,*(undefined2 *)(&DAT_0884fd3a + (uint)*(byte *)(param_1 + 0x157) * 2));
  sub_0803A3FC(param_1,*(undefined2 *)(&DAT_0884fd3a + (uint)*(byte *)(param_1 + 0x157) * 2));
  cVar1 = *(char *)(param_1 + 0x152) + -1;
  *(char *)(param_1 + 0x152) = cVar1;
  if (cVar1 == -1) {
    *(undefined *)(param_1 + 0x101) = 2;
    *(undefined *)(param_1 + 0x102) = 0;
  }
  return in_lr;
}

