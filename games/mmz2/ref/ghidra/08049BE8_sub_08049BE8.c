// sub_08049BE8 at 0x08049BE8 (thumb)

undefined4 sub_08049BE8(int param_1)

{
  undefined2 uVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0xa814);
    *(undefined *)(param_1 + 0xf) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  if (*(char *)(param_1 + 0xf) == '\0') {
    if (*(char *)(param_1 + 0x71) == '\a') {
      uVar1 = sub_080032EC(0x54);
      *(undefined2 *)(param_1 + 0xde) = uVar1;
      uVar2 = sub_080A1BB0(param_1,0,0);
      *(undefined4 *)(param_1 + 0x28) = uVar2;
      sub_080A1BB0(param_1,0,1);
      sub_080A1BB0(param_1,0,2);
      sub_080A1BB0(param_1,0,3);
      *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
    }
  }
  else if (1 < *(byte *)(*(int *)(param_1 + 0x28) + 0xc)) {
    *(undefined *)(param_1 + 0xd) = 10;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

