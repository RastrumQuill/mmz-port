// sub_080696B4 at 0x080696B4 (thumb)

undefined4 sub_080696B4(int param_1)

{
  undefined uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x28);
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0x509);
    sub_08006E08(param_1 + 0x74,&DAT_0833e158);
    sub_08002D68(5,0x2a0);
    sub_08002EF0(5);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  uVar2 = *(undefined4 *)(iVar3 + 0x58);
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar3 + 0x54);
  *(undefined4 *)(param_1 + 0x58) = uVar2;
  if (*(char *)(iVar3 + 0xe0) == '\0') {
    if (*(char *)(iVar3 + 0xe1) == '\0') {
      return in_lr;
    }
    uVar1 = 3;
  }
  else {
    uVar1 = 1;
  }
  *(undefined *)(param_1 + 0xd) = uVar1;
  *(undefined *)(param_1 + 0xe) = 0;
  return in_lr;
}

