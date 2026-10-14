// sub_080DD9C4 at 0x080DD9C4 (thumb)

undefined4 sub_080DD9C4(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined uVar4;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 0x28);
  iVar2 = (uint)*(byte *)(iVar1 + 0xdee) * 4;
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(&DAT_0836de98 + iVar2);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(&DAT_0836dec0 + iVar2);
  if (*(char *)(param_1 + 0xd) == '\0') {
    if (*(char *)(iVar1 + 0xdd1) != '\x01') goto LAB_080dda18;
    uVar3 = 0xe80b;
    uVar4 = 1;
  }
  else {
    if (*(char *)(iVar1 + 0xdd1) != '\0') goto LAB_080dda18;
    uVar3 = 0xe80c;
    uVar4 = 0;
  }
  sub_08017700(param_1,uVar3);
  *(undefined *)(param_1 + 0xd) = uVar4;
LAB_080dda18:
  sub_080177F4(param_1);
  return in_lr;
}

