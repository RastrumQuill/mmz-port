// sub_0801B4E4 at 0x0801B4E4 (thumb)

undefined4 sub_0801B4E4(int param_1,undefined4 param_2,int param_3)

{
  undefined4 in_lr;
  
  if (*(int *)(param_1 + 0x30) == 0) {
    *(byte *)(param_3 + 10) = *(byte *)(param_3 + 10) | 0x80;
    *(int *)(param_3 + 0x18) = param_1 + 0x30;
    *(int *)(param_1 + 0x30) = param_3;
    *(undefined *)(param_1 + 0x38) = 2;
    *(undefined *)(param_1 + 0x39) = 0;
    *(undefined2 *)(param_1 + 0x3e) = 0;
    *(undefined2 *)(param_1 + 0x3c) = 0;
    *(undefined2 *)(param_1 + 0x3a) = 0;
    sub_0801B454(param_1,param_2);
  }
  return in_lr;
}

