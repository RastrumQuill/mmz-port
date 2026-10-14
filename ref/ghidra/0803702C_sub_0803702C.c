// sub_0803702C at 0x0803702C (thumb)

undefined4 sub_0803702C(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x71) == '\0') {
    iVar2 = *(char *)(param_1 + 0x72) + -2;
    if ((0 < iVar2) &&
       (cVar1 = sub_08038B00(param_1,*(int *)(param_1 + 0x54) * iVar2 * 0x20), cVar1 != '\0')) {
      sub_08038A78(param_1,2,0,1);
    }
  }
  else if (*(char *)(param_1 + 0x73) == '\x02') {
    *(undefined *)(param_1 + 0xd) = 0;
    *(undefined2 *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

