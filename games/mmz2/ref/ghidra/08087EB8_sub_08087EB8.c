// sub_08087EB8 at 0x08087EB8 (thumb)

undefined4 sub_08087EB8(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 0x28);
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_08006E08(param_1 + 0x74,&DAT_08341688);
    *(undefined *)(param_1 + 0x12) = 0x1e;
    sub_080127E4(param_1,0x6b09);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  sub_08087930(param_1);
  sub_080879C8(param_1);
  *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
  sub_080128D4(param_1);
  if (*(char *)(param_1 + 0x12) == '\0') {
    if ((*(uint *)(iVar1 + 0xb4) & 8) == 0) {
      *(undefined *)(param_1 + 0xd) = 0;
      *(undefined *)(param_1 + 0xe) = 0;
    }
    else {
      *(undefined *)(param_1 + 0xd) = 4;
      *(undefined *)(param_1 + 0xe) = 0;
    }
  }
  return in_lr;
}

