// sub_080BA6C8 at 0x080BA6C8 (thumb)

void sub_080BA6C8(undefined4 param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    iVar1 = sub_08005428(DAT_02023210);
  }
  else {
    iVar1 = sub_080054C0(param_2);
  }
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 9) = 2;
    *(undefined4 *)(iVar1 + 0x14) = 0x80ba339;
    *(undefined2 *)(iVar1 + 0x1c) = 800;
    *(undefined *)(iVar1 + 0x1e) = 6;
    *(undefined *)(iVar1 + 0x10) = 0;
    if (param_2 == 0) {
      *(undefined4 *)(iVar1 + 0x20) = param_1;
      *(undefined *)(iVar1 + 0x12) = 0;
    }
    else {
      *(int *)(iVar1 + 0x20) = param_2;
      *(int *)(param_2 + 0x24) = iVar1;
      *(char *)(iVar1 + 0x12) = *(char *)(param_2 + 0x12) + '\x01';
    }
    *(undefined4 *)(iVar1 + 0x24) = 0;
  }
  return;
}

