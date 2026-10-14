// sub_0804115C at 0x0804115C (thumb)

undefined4 sub_0804115C(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0xa20a);
    sub_080032EC(0x48);
    *(undefined2 *)(*(int *)(param_1 + 0xb4 + (*(byte *)(param_1 + 0xbe) + 4) * 4) + 0xbe) = 0x1d15;
    *(undefined *)(param_1 + 0x12) = 0x10;
    *(undefined *)(param_1 + 0xf) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  uVar2 = sub_080093C4(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  *(undefined4 *)(param_1 + 0x58) = uVar2;
  if (*(char *)(param_1 + 0xf) == '\0') {
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 == -1) {
      *(undefined2 *)(*(int *)(param_1 + 0xb4 + (*(byte *)(param_1 + 0x13) + 4) * 4) + 0xbe) =
           0x1d18;
      uVar2 = sub_0807414C(param_1,0,*(undefined *)(param_1 + 0x13));
      *(undefined4 *)(param_1 + 0x28) = uVar2;
      sub_0807414C(uVar2,1,*(undefined *)(param_1 + 0x13));
      *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
    }
  }
  else if (1 < *(byte *)(*(int *)(param_1 + 0x28) + 0xc)) {
    *(undefined *)(param_1 + 0xd) = 0x14;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

