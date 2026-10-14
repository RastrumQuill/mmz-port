// sub_0801E64C at 0x0801E64C (thumb)

undefined4 sub_0801E64C(int param_1,int param_2)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x10) == '\0') {
    sub_080EEF68(&UNK_08333758 + param_2 * 0x20,&DAT_03002cc0,8);
    if (DAT_0202e140 == '\0') {
      sub_080EEF68(&UNK_08333898 + param_2 * 0x20,&DAT_03002e40,8);
    }
  }
  else {
    sub_080EEF68(&UNK_08333758 + param_2 * 0x20,&DAT_03002d40,8);
  }
  return in_lr;
}

