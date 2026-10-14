// sub_08032850 at 0x08032850 (thumb)

undefined4 sub_08032850(int param_1,short param_2)

{
  undefined2 uVar1;
  char *pcVar2;
  undefined4 in_lr;
  
  pcVar2 = (char *)(param_1 + 0xee);
  if (*pcVar2 == '\0') {
    sub_08017700();
    *(undefined *)(param_1 + 0x135) = 0;
    sub_0803964C(param_1);
    *pcVar2 = *pcVar2 + '\x01';
  }
  else {
    sub_08034558(param_1,param_2);
    if (CONCAT11(*(undefined *)(param_1 + 0x1e),*(undefined *)(param_1 + 0x70)) != param_2) {
      sub_080177CC(param_1,param_2,*(undefined *)(param_1 + 0x140),*(undefined *)(param_1 + 0x141));
    }
    if (*(char *)(param_1 + 0x73) == '\x03') {
      *(undefined *)(param_1 + 0xec) = 0;
      uVar1 = sub_08025BEC(param_1);
      sub_08017700(param_1,uVar1);
      *(undefined *)(param_1 + 0x126) = 0xff;
    }
  }
  return in_lr;
}

