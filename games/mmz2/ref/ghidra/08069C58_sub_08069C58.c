// sub_08069C58 at 0x08069C58 (thumb)

undefined4 sub_08069C58(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,*(undefined2 *)(&DAT_0833e252 + (uint)*(byte *)(param_1 + 0xbe) * 2));
    *(undefined *)(param_1 + 0x12) = 0x10;
    if (*(byte *)(param_1 + 0xbe) == 0) {
      uVar2 = 0x1b00;
    }
    else {
      uVar2 = 0xffffe500;
    }
    *(undefined4 *)(param_1 + 100) = uVar2;
    *(int *)(param_1 + 0xb4) = -*(int *)(param_1 + 100);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == -1) {
    *(undefined *)(param_1 + 0xd) = 2;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

