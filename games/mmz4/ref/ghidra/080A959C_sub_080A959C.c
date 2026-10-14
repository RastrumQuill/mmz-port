// sub_080A959C at 0x080A959C (thumb)

undefined4 sub_080A959C(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xb4) == '\0') {
    if ((*(uint *)(param_1 + 0x8c) & 0x10000) == 0) {
      uVar1 = 0x200;
    }
    else {
      uVar1 = (uint)*(byte *)(param_1 + 0x10);
    }
    sub_080E32E4(param_1 + 0x54,uVar1,*(byte *)(param_1 + 10) >> 4 & 1);
  }
  else {
    sub_080E32E4(param_1 + 0x54,0x100,*(byte *)(param_1 + 10) >> 4 & 1);
  }
  iVar2 = param_1 + 0x54;
  if (DAT_0202e8ec < 9999) {
    DAT_0202e8ec = DAT_0202e8ec + 1;
  }
  sub_0802ABC8(param_1,iVar2);
  if (*(char *)(param_1 + 0x10) == '\0') {
    sub_0802AB70(2,0x18,iVar2);
  }
  else {
    sub_0802AB70(2,0x19,iVar2);
  }
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  return in_lr;
}

