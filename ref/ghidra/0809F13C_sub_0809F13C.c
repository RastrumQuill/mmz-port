// sub_0809F13C at 0x0809F13C (thumb)

undefined4 sub_0809F13C(int param_1)

{
  undefined2 uVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_0809C930(param_1,0);
    *(undefined *)(param_1 + 0xe) = 0;
  }
  sub_0809C980(param_1);
  if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 1) != 0) {
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0xe) = 1;
    uVar1 = sub_08001EAC(0x51);
    *(undefined2 *)(param_1 + 200) = uVar1;
  }
  return in_lr;
}

