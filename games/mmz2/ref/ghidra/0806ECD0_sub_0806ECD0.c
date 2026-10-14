// sub_0806ECD0 at 0x0806ECD0 (thumb)

undefined4 sub_0806ECD0(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0x1702);
    sub_08006E08(param_1 + 0x74,&DAT_0833ea8c);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  iVar1 = sub_0801E4D8(*(undefined4 *)(param_1 + 0xc0));
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0xc0) = 0;
    sub_08006E08(param_1 + 0x74,&DAT_0833ea74);
    *(undefined *)(param_1 + 0xd) = 6;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

