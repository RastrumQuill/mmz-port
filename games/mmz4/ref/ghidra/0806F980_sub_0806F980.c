// sub_0806F980 at 0x0806F980 (thumb)

undefined4 sub_0806F980(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xcd) != '\0') {
    sub_08002624(0x72);
    sub_08002624(0x94);
    sub_08002624(0x73);
    sub_08002624(0xdb);
  }
  sub_080503A8(param_1);
  return in_lr;
}

