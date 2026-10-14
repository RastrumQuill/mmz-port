// sub_0802D33C at 0x0802D33C (thumb)

undefined4 sub_0802D33C(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_080343B0(param_1,0xffffe200,0xffffeb00,*(byte *)(param_1 + 10) >> 4 & 1);
  if (iVar1 == 0) {
    *(undefined *)(param_1 + 0xec) = 0;
  }
  else {
    if (*(char *)(param_1 + 0xe8) == '\x01') {
      sub_08017700(param_1,0xb03);
      *(undefined *)(param_1 + 0x129) = 2;
    }
    else {
      sub_08017700(param_1,0x801);
    }
    *(undefined *)(param_1 + 0xed) = 1;
    sub_0802D3AC(param_1);
  }
  return in_lr;
}

