// sub_08037854 at 0x08037854 (thumb)

undefined4 sub_08037854(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  sub_08038B00(param_1,*(undefined4 *)(param_1 + 0x54));
  cVar1 = sub_08038BAC(param_1);
  if (cVar1 != '\0') {
    *(undefined *)(param_1 + 0xf) = 3;
  }
  return in_lr;
}

