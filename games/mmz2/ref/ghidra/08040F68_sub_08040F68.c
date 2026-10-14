// sub_08040F68 at 0x08040F68 (thumb)

undefined4 sub_08040F68(int param_1)

{
  char cVar1;
  undefined uVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') goto LAB_08040fa0;
  sub_080127E4(param_1,0xa200);
  cVar1 = *(char *)(param_1 + 0xc2);
  if (cVar1 == '\x01') {
    uVar2 = 2;
LAB_08040f96:
    *(undefined *)(param_1 + 0xc0) = uVar2;
    *(char *)(param_1 + 0xc2) = '\0';
  }
  else if (cVar1 == '\x03') {
    uVar2 = 4;
    goto LAB_08040f96;
  }
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
LAB_08040fa0:
  sub_080128D4(param_1);
  uVar3 = sub_080093C4(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  *(undefined4 *)(param_1 + 0x58) = uVar3;
  if (*(char *)(param_1 + 0xc0) == '\0') {
    *(undefined *)(param_1 + 0xd) = 3;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

