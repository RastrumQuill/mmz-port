// sub_080364C8 at 0x080364C8 (thumb)

undefined4 sub_080364C8(int param_1)

{
  char cVar1;
  char *pcVar2;
  undefined4 in_lr;
  
  pcVar2 = (char *)(param_1 + 0x102);
  if (*pcVar2 == '\0') {
    sub_0801CF00(param_1,*(undefined2 *)(&DAT_0884fd04 + (uint)*(byte *)(param_1 + 0x156) * 2));
    sub_08040BF0(param_1);
    *(undefined *)(param_1 + 0x151) = 0x18;
    *pcVar2 = *pcVar2 + '\x01';
  }
  sub_0803A3BC(param_1,*(undefined2 *)(&DAT_0884fd04 + (uint)*(byte *)(param_1 + 0x156) * 2));
  sub_0803A3FC(param_1,*(undefined2 *)(&DAT_0884fd04 + (uint)*(byte *)(param_1 + 0x156) * 2));
  cVar1 = *(char *)(param_1 + 0x151) + -1;
  *(char *)(param_1 + 0x151) = cVar1;
  if (cVar1 == -1) {
    *(undefined *)(param_1 + 0x101) = 3;
    *pcVar2 = '\0';
  }
  return in_lr;
}

