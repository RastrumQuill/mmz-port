// sub_0802907C at 0x0802907C (thumb)

undefined4 sub_0802907C(int param_1)

{
  undefined4 in_lr;
  
  if (DAT_0202e14c == '\0') {
    *(undefined *)(param_1 + 0x175) = *(undefined *)(param_1 + 0xe);
    *(undefined2 *)(param_1 + 0xe) = 3;
    sub_0801E9FC(param_1,*(undefined *)(param_1 + 0x180));
    sub_08038958(param_1);
    sub_080290BC(param_1);
  }
  return in_lr;
}

