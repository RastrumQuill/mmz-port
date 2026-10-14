// sub_0805F2A8 at 0x0805F2A8 (thumb)

undefined4 sub_0805F2A8(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x71) == '\0') {
    iVar2 = *(char *)(param_1 + 0x72) + -2;
    if ((0 < iVar2) &&
       (cVar1 = sub_0806082C(param_1,*(int *)(param_1 + 0x5c) * iVar2 * 0x20), cVar1 != '\0')) {
      sub_08060784(param_1,2,0,1);
    }
  }
  else if (*(char *)(param_1 + 0x73) == '\x02') {
    *(undefined *)(param_1 + 0xd) = 0;
    *(undefined2 *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

