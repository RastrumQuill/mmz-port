// sub_080BA42C at 0x080BA42C (thumb)

undefined4 sub_080BA42C(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x28);
  if (*(char *)(param_1 + 0xd) == '\0') {
    *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x54) - *(int *)(iVar3 + 0x54);
    *(int *)(param_1 + 0x7c) = *(int *)(param_1 + 0x58) - *(int *)(iVar3 + 0x58);
    if (*(char *)(param_1 + 0x75) == '\0') {
      sub_080127E4(param_1,0x6b03);
    }
    else {
      sub_080127E4(param_1,0x6b01);
    }
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  else if (*(char *)(param_1 + 0xd) != '\x01') {
    return in_lr;
  }
  if (*(char *)(param_1 + 0x75) == '\0') {
    uVar1 = *(uint *)(iVar3 + 0xb4);
    uVar2 = 0x20;
  }
  else {
    uVar1 = *(uint *)(iVar3 + 0xb4);
    uVar2 = 0x40;
  }
  if ((uVar1 & uVar2) == 0) {
    *(undefined4 *)(param_1 + 0xc) = 4;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)((&DAT_08345998)[*(byte *)(param_1 + 9)] + 0x10);
  }
  else {
    *(int *)(param_1 + 0x54) = *(int *)(iVar3 + 0x54) + *(int *)(param_1 + 0x78);
    *(int *)(param_1 + 0x58) = *(int *)(iVar3 + 0x58) + *(int *)(param_1 + 0x7c);
    sub_080128D4(param_1);
  }
  return in_lr;
}

