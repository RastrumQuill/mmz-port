// sub_080BA5C0 at 0x080BA5C0 (thumb)

undefined4 sub_080BA5C0(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x28);
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080032EC(0x39);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    if (*(char *)(param_1 + 0x75) == '\0') {
      sub_080127E4(param_1,0x6b02);
    }
    else {
      sub_080127E4(param_1,0x6b04);
    }
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  if (*(char *)(param_1 + 0x75) == '\0') {
    uVar2 = *(uint *)(iVar3 + 0xb4);
    uVar1 = 2;
  }
  else {
    uVar2 = *(uint *)(iVar3 + 0xb4);
    uVar1 = 1;
  }
  if ((uVar2 & uVar1) == 0) {
    *(undefined *)(param_1 + 0xd) = 0;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar3 + 0x54);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(iVar3 + 0x58);
  sub_080128D4(param_1);
  return in_lr;
}

