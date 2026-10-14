// sub_080CB8C0 at 0x080CB8C0 (thumb)

undefined4 sub_080CB8C0(int param_1)

{
  undefined4 in_lr;
  
  if ((*(char *)(*(int *)(param_1 + 0x28) + 200) == '\0') || (*(char *)(param_1 + 0xd) == '\0')) {
    sub_08128884(param_1,*(undefined4 *)(&DAT_08863080 + (uint)*(byte *)(param_1 + 0xd) * 4));
  }
  else {
    sub_08005784(param_1 + 0x74,&DAT_0886308c);
  }
  return in_lr;
}

