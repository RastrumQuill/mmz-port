// sub_08037190 at 0x08037190 (thumb)

undefined4 sub_08037190(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  cVar1 = sub_08038B7C();
  if (cVar1 != '\0') {
    *(undefined2 *)(param_1 + 0xe) = 2;
    sub_080371B0(param_1);
  }
  return in_lr;
}

