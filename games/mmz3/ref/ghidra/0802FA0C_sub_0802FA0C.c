// sub_0802FA0C at 0x0802FA0C (thumb)

undefined4 sub_0802FA0C(int param_1)

{
  undefined uVar1;
  char *pcVar2;
  undefined4 in_lr;
  
  pcVar2 = (char *)(param_1 + 0xee);
  if (*pcVar2 == '\0') {
    sub_08017700(param_1,0x1900);
    sub_08038394(param_1,5);
    *pcVar2 = *pcVar2 + '\x01';
  }
  else {
    sub_08034558(param_1,0x1900);
    if ((*(char *)(param_1 + 0x71) == '\x05') && (*(char *)(param_1 + 0x72) < '\x02')) {
      if ((*(uint *)(param_1 + 0x218) & 0x80) == 0) {
        uVar1 = 3;
      }
      else {
        uVar1 = 2;
      }
      *(undefined *)(param_1 + 0xed) = uVar1;
      *(undefined *)(param_1 + 0xee) = 0;
    }
  }
  return in_lr;
}

