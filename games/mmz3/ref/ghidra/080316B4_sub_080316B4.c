// sub_080316B4 at 0x080316B4 (thumb)

undefined4 sub_080316B4(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined4 in_lr;
  
  pcVar3 = (char *)(param_1 + 0xee);
  if (*pcVar3 == '\0') {
    sub_08017700(param_1,0x1d01);
    sub_08038394(param_1,0xb);
    *pcVar3 = *pcVar3 + '\x01';
  }
  else if ((*(byte *)(param_1 + 0x124) & 0x40) == 0) {
    sub_08034558(param_1,0x1d01);
  }
  else {
    sub_080177CC(param_1,0x1d01,*(undefined *)(param_1 + 0x140),*(undefined *)(param_1 + 0x141));
  }
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined *)(param_1 + 0xec) = 0;
    if (*(char *)(param_1 + 0xe) == '\0') {
      if (*(char *)(param_1 + 0xf) != '\x02') {
        sub_08017700(param_1,0x701);
        return in_lr;
      }
      uVar1 = 0x702;
      uVar2 = 1;
    }
    else if (*(char *)(param_1 + 0xf) == '\x03') {
      uVar1 = 0x705;
      uVar2 = 1;
    }
    else {
      uVar1 = 0x704;
      uVar2 = 4;
    }
    sub_080177CC(param_1,uVar1,uVar2,1);
  }
  else {
    *(undefined *)(param_1 + 0x125) = 4;
  }
  return in_lr;
}

