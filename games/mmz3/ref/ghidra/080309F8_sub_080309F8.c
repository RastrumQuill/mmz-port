// sub_080309F8 at 0x080309F8 (thumb)

undefined4 sub_080309F8(int param_1)

{
  undefined uVar1;
  undefined *puVar2;
  char *pcVar3;
  undefined4 in_lr;
  
  pcVar3 = (char *)(param_1 + 0xee);
  if (*pcVar3 == '\0') {
    sub_08017700(param_1,0x1c02);
    sub_08038394(param_1,10);
    *pcVar3 = *pcVar3 + '\x01';
  }
  else if ((*(byte *)(param_1 + 0x124) & 0x40) == 0) {
    sub_08034558(param_1,0x1c02);
  }
  else {
    sub_080177CC(param_1,0x1c02,*(undefined *)(param_1 + 0x140),*(undefined *)(param_1 + 0x141));
  }
  if (*(char *)(param_1 + 0x73) == '\x03') {
    sub_080177CC(param_1,0x500,4,1);
    puVar2 = (undefined *)(param_1 + 0xec);
    uVar1 = 0;
  }
  else {
    puVar2 = (undefined *)(param_1 + 0x125);
    uVar1 = 3;
  }
  *puVar2 = uVar1;
  return in_lr;
}

