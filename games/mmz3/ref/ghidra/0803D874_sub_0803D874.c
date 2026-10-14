// sub_0803D874 at 0x0803D874 (thumb)

undefined4 sub_0803D874(int param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0xc4);
  bVar1 = 0xc4 < iVar2;
  if ((iVar2 < 0x78) || (bVar1)) {
    if (*(char *)(param_1 + 200) == '\0') {
      sub_0800471C(0x10d);
      *(char *)(param_1 + 200) = '\x01';
    }
  }
  else if (*(char *)(param_1 + 200) != '\0') {
    sub_08004768(0x10d);
    *(char *)(param_1 + 200) = bVar1;
  }
  uVar3 = *(uint *)(param_1 + 0xc4) + 1;
  *(uint *)(param_1 + 0xc4) = uVar3;
  if ((uVar3 & 3) == 0) {
    if (iVar2 < 0x78) {
      sub_0803D6C8(param_1,0,1);
      sub_0801ACF8(3,param_1 + 0x54);
    }
    if (bVar1) {
      sub_0803D6C8(param_1,1,1);
      sub_0801ACF8(3,param_1 + 0x54);
    }
  }
  return in_lr;
}

