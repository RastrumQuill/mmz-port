// sub_08035EAC at 0x08035EAC (thumb)

undefined4 sub_08035EAC(int param_1)

{
  undefined uVar1;
  char *pcVar2;
  undefined4 in_lr;
  
  pcVar2 = (char *)(param_1 + 0x102);
  if (*pcVar2 == '\0') {
    sub_0801CF00(param_1,0x1900);
    sub_0803C490(param_1,5);
    *pcVar2 = *pcVar2 + '\x01';
  }
  else {
    sub_0803A3BC(param_1,0x1900);
    if ((*(char *)(param_1 + 0x71) == '\x05') && (*(char *)(param_1 + 0x72) < '\x02')) {
      if ((*(uint *)(param_1 + 600) & 0x80) == 0) {
        uVar1 = 3;
      }
      else {
        uVar1 = 2;
      }
      *(undefined *)(param_1 + 0x101) = uVar1;
      *(undefined *)(param_1 + 0x102) = 0;
    }
  }
  return in_lr;
}

