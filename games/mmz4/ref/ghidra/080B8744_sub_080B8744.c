// sub_080B8744 at 0x080B8744 (thumb)

undefined4 sub_080B8744(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  undefined local_1c [4];
  
  sub_08128B5C(local_1c,&DAT_081298a4,4);
  uVar3 = *(undefined4 *)(param_1 + 0x28);
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_08002B10(0x40);
    iVar2 = 0;
    do {
      sub_080B9130(uVar3,param_1 + 0x54,0,local_1c[iVar2]);
      iVar2 = iVar2 + 1;
    } while (iVar2 < 4);
    sub_080B8980(param_1);
    sub_08005784(param_1 + 0x74,&DAT_08860d20);
    sub_0801CF00(param_1,0xb801);
    *(undefined *)(param_1 + 0x12) = 0x40;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(param_1);
  if (*(char *)(param_1 + 0x12) != '\0') {
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
  }
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == '\0') {
    *(undefined *)(param_1 + 0xd) = 5;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

