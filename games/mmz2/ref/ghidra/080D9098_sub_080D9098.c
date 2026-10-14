// sub_080D9098 at 0x080D9098 (thumb)

undefined4 sub_080D9098(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  cVar1 = sub_080D9360(param_1,*(undefined4 *)(param_1 + 200));
  if (cVar1 == '\0') {
    sub_080D93AC(param_1);
    sub_080D8ED8(param_1);
  }
  else {
    sub_080EF118(param_1,*(undefined4 *)(&DAT_0834b5dc + (uint)*(byte *)(param_1 + 0xe) * 4));
  }
  return in_lr;
}

