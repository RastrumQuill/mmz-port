// sub_080CB738 at 0x080CB738 (thumb)

undefined4 sub_080CB738(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(*(int *)(param_1 + 0x28) + 200) != '\0') {
    sub_08005784(param_1 + 0x74,&DAT_0886308c);
  }
  sub_08128884(param_1,*(undefined4 *)(&DAT_0886306c + (uint)*(byte *)(param_1 + 0xd) * 4));
  return in_lr;
}

