// sub_08036754 at 0x08036754 (thumb)

undefined4 sub_08036754(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x167) == '\0') {
    if (*(char *)(param_1 + 0xe) == '\x01') {
      sub_0801CFC8(param_1,0x403,2,1);
    }
    else {
      sub_0801CFC8(param_1,0x404,2,1);
    }
    *(undefined *)(param_1 + 0x100) = 0;
  }
  else {
    *(undefined *)(param_1 + 0x101) = 1;
    *(undefined *)(param_1 + 0x102) = 0;
    sub_080367BC(param_1);
  }
  return in_lr;
}

